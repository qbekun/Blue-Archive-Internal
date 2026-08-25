#include <windows.h>
#include <TlHelp32.h>
#include <string>
#include <unitysdk/unitysdk.h>
#include "logging.h"
#include "render.h"
#include "hooks.h"
#include "config.h"

static HMODULE FindModuleBase(const wchar_t* moduleName)
{
    HMODULE base = nullptr;
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, GetCurrentProcessId());
    if (snap == INVALID_HANDLE_VALUE) return nullptr;

    MODULEENTRY32W me{};
    me.dwSize = sizeof(me);
    if (Module32FirstW(snap, &me))
    {
        do
        {
            if (_wcsicmp(me.szModule, moduleName) == 0)
            {
                base = (HMODULE)me.modBaseAddr;
                break;
            }
        } while (Module32NextW(snap, &me));
    }
    CloseHandle(snap);
    return base;
}

static void Worker()
{
    InstallCrashHandler();
    Log("[worker] started, pid=%lu", GetCurrentProcessId());

    // Wait for GameAssembly.dll to be loaded
    for (int i = 0; i < 600; i++)
    {
        HMODULE base = FindModuleBase(L"GameAssembly.dll");
        if (base)
        {
            hIl2Cpp = base;
            Log("[worker] GameAssembly.dll found at 0x%p (iter=%d)", base, i);
            break;
        }
        Sleep(100);
    }

    if (!hIl2Cpp)
    {
        Log("[worker] GameAssembly.dll NOT found - aborting");
        return;
    }

    Config::Load();
    Log("[worker] config loaded");

    Log("[worker] calling Render::Init()");
    bool ok = Render::Init();
    Log("[worker] Render::Init() -> %s", ok ? "OK" : "FAIL");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, [](LPVOID) -> DWORD
        {
            Worker();
            return 0;
        }, nullptr, 0, nullptr);
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        Render::Shutdown();
        Hooks::UnhookAll();
    }

    return TRUE;
}