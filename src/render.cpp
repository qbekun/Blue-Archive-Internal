#include "render.h"
#include "menu.h"
#include "engine.h"
#include "hooks.h"
#include "logging.h"
#include "config.h"
#include "gui/gui.h"
#include "gui/gui_colors.h"
#include <windows.h>
#include <exception>
#include <d3d11.h>
#include <dxgi.h>
#include <imgui.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_win32.h>
#include <string>

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace Render
{
    static HWND              g_hwnd = nullptr;
    static WNDPROC           g_originalWndProc = nullptr;
    static ID3D11Device*     g_pd3dDevice = nullptr;
    static ID3D11DeviceContext* g_pd3dContext = nullptr;
    static ID3D11RenderTargetView* g_backbufferRTV = nullptr;
    static bool              g_initialized = false;
    static bool              g_menuVisible = true;
    static SRWLOCK           g_presentLock = SRWLOCK_INIT;

    static int RecordUiCrash(unsigned int code, EXCEPTION_POINTERS* ep);
    static bool RenderFrameUi(IDXGISwapChain* swapChain, bool logFrame);

    static LRESULT CALLBACK WndProc_Hook(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
    {
        if (g_originalWndProc)
            ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam);
        return CallWindowProcW(g_originalWndProc, hWnd, msg, wParam, lParam);
    }

    static HWND FindGameWindow()
    {
        struct Ctx { DWORD pid; HWND hwnd; } ctx{ GetCurrentProcessId(), nullptr };

        EnumWindows([](HWND hwnd, LPARAM lParam) -> BOOL
        {
            auto* c = (Ctx*)lParam;
            DWORD wpid = 0;
            GetWindowThreadProcessId(hwnd, &wpid);
            if (wpid == c->pid && IsWindowVisible(hwnd) && GetWindow(hwnd, GW_OWNER) == nullptr)
            {
                c->hwnd = hwnd;
                return FALSE;
            }
            return TRUE;
        }, (LPARAM)&ctx);

        return ctx.hwnd;
    }

    static HRESULT STDMETHODCALLTYPE Present_Hook(IDXGISwapChain* swapChain, UINT syncInterval, UINT flags)
    {
        static bool rendererReady = false;
        static uint64_t frameCount = 0;
        frameCount++;

        AcquireSRWLockExclusive(&g_presentLock);

        if (!rendererReady)
        {
            Log("[present] first Present() call, initializing ImGui (thread=%lu)", GetCurrentThreadId());

            swapChain->GetDevice(__uuidof(ID3D11Device), (void**)&g_pd3dDevice);
            if (g_pd3dDevice)
                g_pd3dDevice->GetImmediateContext(&g_pd3dContext);

            if (g_pd3dDevice && g_pd3dContext && g_hwnd)
            {
                ImGui::CreateContext();

                // Hand the D3D11 objects over to the sweetie-style menu UI so
                // it can do its background blur and font rendering.
                ui::g_pd3dDevice = g_pd3dDevice;
                ui::g_pd3dDeviceContext = g_pd3dContext;
                ui::g_pSwapChain = swapChain;

                ImGuiIO& io = ImGui::GetIO();
                // The menu has no title bar, so allow dragging it by any empty
                // space instead of requiring a title bar to grab.
                io.ConfigWindowsMoveFromTitleBarOnly = false;

                // Menu styling.
                ImGuiStyle* s = &ImGui::GetStyle();
                s->WindowPadding = ImVec2(0, 0);
                s->WindowBorderSize = 0;
                s->ItemSpacing = ImVec2(20, 20);
                s->ScrollbarSize = 4.f;

                // Fonts MUST be added before ImGui_ImplDX11_Init(): the backend
                // builds the font atlas on Init, and ImGui::NewFrame() requires
                // the atlas to stay built afterwards.
                ui::initialize_fonts();
                ui::initialize_tabs();
                Log("[present] fonts+tabs initialized");

                bool okWin32 = ImGui_ImplWin32_Init(g_hwnd);
                bool okDx11 = ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dContext);
                Log("[present] ImGui_ImplWin32_Init=%d ImGui_ImplDX11_Init=%d", okWin32 ? 1 : 0, okDx11 ? 1 : 0);
                Engine::Init();
                Menu::Start();
                rendererReady = okWin32 && okDx11;
                Log("[present] rendererReady=%d", rendererReady ? 1 : 0);
            }
            else
            {
                Log("[present] init failed: device=%p context=%p hwnd=%p", g_pd3dDevice, g_pd3dContext, g_hwnd);
            }
        }

        static bool insertWasDown = false;
        bool insertDown = (GetAsyncKeyState(VK_INSERT) & 0x8000) != 0;
        if (insertDown && !insertWasDown)
        {
            g_menuVisible = !g_menuVisible;
            Log("[present] Insert toggled -> visible=%d", g_menuVisible ? 1 : 0);
        }
        insertWasDown = insertDown;

        static bool firstFrameLogged = false;
        bool logFrame = !firstFrameLogged;
        firstFrameLogged = true;

        if (rendererReady)
        {
            bool uiOk = false;
            __try
            {
                uiOk = RenderFrameUi(swapChain, logFrame);
            }
            __except (RecordUiCrash(GetExceptionCode(), GetExceptionInformation()))
            {
                // Menu rendering crashed (SEH); disable the overlay so the game survives.
                uiOk = false;
            }

            if (!uiOk)
            {
                rendererReady = false;
                g_menuVisible = false;
            }
            else
            {
                if (frameCount % 300 == 0)
                {
                    Log("[present] alive, frame=%llu inBattle=%d", frameCount, Engine::IsInBattle() ? 1 : 0);
                }
                if (frameCount % 600 == 0)
                {
                    Config::Save(); // persist menu settings ~every 10s
                }
            }
        }

        ReleaseSRWLockExclusive(&g_presentLock);
        return CALL_ORIGIN(Present_Hook, swapChain, syncInterval, flags);
    }

    static int RecordUiCrash(unsigned int code, EXCEPTION_POINTERS* ep)
    {
        void* addr = (ep && ep->ExceptionRecord) ? ep->ExceptionRecord->ExceptionAddress : nullptr;
        LogCrashRaw(code, addr);
        Log("[present] UI CRASH exception=0x%08X at %p - menu disabled", code, addr);
        return EXCEPTION_EXECUTE_HANDLER;
    }

    // Runs the per-frame UI. Kept in its own function with C++ try/catch because
    // __try (SEH) and C++ exceptions can't be mixed in the same function, and
    // __except does not catch C++ exceptions when /EHsc is enabled.
    static bool RenderFrameUi(IDXGISwapChain* swapChain, bool logFrame)
    {
        try
        {
            ui::g_pSwapChain = swapChain;

            if (logFrame) Log("[present] frame1: NewFrame");
            ImGui_ImplDX11_NewFrame();
            if (logFrame) Log("[present] frame1: dx11 newframe done");
            ImGui_ImplWin32_NewFrame();
            if (logFrame) Log("[present] frame1: win32 newframe done");
            ImGui::NewFrame();
            if (logFrame) Log("[present] frame1: imgui newframe done");

            if (logFrame) Log("[present] frame1: Update");
            Menu::Update();
            if (g_menuVisible)
            {
                if (logFrame) Log("[present] frame1: Render");
                Menu::Render();
            }

            if (logFrame) Log("[present] frame1: ImGui::Render");
            ImGui::Render();

            if (!g_backbufferRTV)
            {
                ID3D11Texture2D* backbuffer = nullptr;
                if (SUCCEEDED(swapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&backbuffer)) && backbuffer)
                {
                    g_pd3dDevice->CreateRenderTargetView(backbuffer, nullptr, &g_backbufferRTV);
                    backbuffer->Release();
                }
            }
            if (g_backbufferRTV)
            {
                if (logFrame) Log("[present] frame1: RenderDrawData");
                ID3D11RenderTargetView* oldRTV = nullptr;
                ID3D11DepthStencilView* oldDSV = nullptr;
                g_pd3dContext->OMGetRenderTargets(1, &oldRTV, &oldDSV);

                g_pd3dContext->OMSetRenderTargets(1, &g_backbufferRTV, nullptr);
                ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

                g_pd3dContext->OMSetRenderTargets(1, &oldRTV, oldDSV);
                if (oldRTV) oldRTV->Release();
                if (oldDSV) oldDSV->Release();
            }
            if (logFrame) Log("[present] frame1: done");
            return true;
        }
        catch (const std::exception& e)
        {
            LogCrashRaw(0xE06D7363, nullptr);
            Log("[present] UI C++ EXCEPTION: %s - menu disabled", e.what());
            return false;
        }
        catch (...)
        {
            LogCrashRaw(0xE06D7363, nullptr);
            Log("[present] UI C++ EXCEPTION (unknown type) - menu disabled");
            return false;
        }
    }

    static bool InstallD3D11Hooks()
    {
        g_hwnd = FindGameWindow();
        Log("[render] FindGameWindow -> 0x%p", g_hwnd);
        if (!g_hwnd) return false;

        ID3D11Device* dummyDevice = nullptr;
        ID3D11DeviceContext* dummyContext = nullptr;
        IDXGISwapChain* dummySwapChain = nullptr;

        DXGI_SWAP_CHAIN_DESC sd{};
        sd.BufferCount = 1;
        sd.BufferDesc.Width = 1;
        sd.BufferDesc.Height = 1;
        sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.BufferDesc.RefreshRate.Numerator = 60;
        sd.BufferDesc.RefreshRate.Denominator = 1;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.OutputWindow = g_hwnd;
        sd.SampleDesc.Count = 1;
        sd.Windowed = TRUE;
        sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

        HRESULT hr = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0,
            nullptr, 0, D3D11_SDK_VERSION, &sd, &dummySwapChain, &dummyDevice, nullptr, &dummyContext);
        Log("[render] D3D11CreateDeviceAndSwapChain hr=0x%08X chain=%p", hr, dummySwapChain);
        if (FAILED(hr)) return false;

        void** vtable = *(void***)dummySwapChain;
        void* present = vtable[8];
        Log("[render] Present at 0x%p", present);

        dummySwapChain->Release();
        dummyDevice->Release();
        dummyContext->Release();

        bool hooked = Hooks::CreateHook(present, (void*)&Present_Hook);
        Log("[render] Present hook installed: %d", hooked ? 1 : 0);
        return hooked;
    }

    bool Init()
    {
        if (g_initialized) return true;

        g_initialized = InstallD3D11Hooks();
        if (g_initialized)
            g_originalWndProc = (WNDPROC)SetWindowLongPtrW(g_hwnd, GWLP_WNDPROC, (LONG_PTR)&WndProc_Hook);

        return g_initialized;
    }

    void Shutdown()
    {
        if (g_originalWndProc && g_hwnd)
        {
            SetWindowLongPtrW(g_hwnd, GWLP_WNDPROC, (LONG_PTR)g_originalWndProc);
            g_originalWndProc = nullptr;
        }

        if (g_pd3dDevice)
        {
            ImGui_ImplDX11_Shutdown();
            ImGui_ImplWin32_Shutdown();
            ImGui::DestroyContext();
            g_pd3dContext->Release();
            g_pd3dDevice->Release();
            g_pd3dDevice = nullptr;
            g_pd3dContext = nullptr;
        }

        Hooks::UnhookAll();
        g_initialized = false;
    }
}