#include "logging.h"
#include <dbghelp.h>
#include <mutex>

void Log(const char* fmt, ...)
{
    static FILE* f = nullptr;
    if (!f)
    {
        wchar_t tmp[MAX_PATH];
        if (GetTempPathW(MAX_PATH, tmp))
        {
            std::wstring path = std::wstring(tmp) + L"lolimenu.log";
            _wfopen_s(&f, path.c_str(), L"a");
        }
    }
    if (!f) return;

    va_list ap;
    va_start(ap, fmt);
    vfprintf(f, fmt, ap);
    va_end(ap);
    fprintf(f, "\n");
    fflush(f);

    char buf[512];
    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    OutputDebugStringA(buf);
}

static void RawWrite(HANDLE h, const char* text)
{
    if (h == INVALID_HANDLE_VALUE || !text) return;
    DWORD written = 0;
    WriteFile(h, text, (DWORD)strlen(text), &written, NULL);
}

static void RawPrintf(HANDLE h, const char* fmt, ...)
{
    char buf[512];
    va_list ap;
    va_start(ap, fmt);
    int n = vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    if (n > 0)
        RawWrite(h, buf);
}

// Resolves the module containing 'address' (best-effort; raw WinAPI only).
typedef struct _MODULEINFOX { void* lpBaseOfDll; unsigned long SizeOfImage; void* EntryPoint; } MODULEINFOX;
typedef BOOL(WINAPI* FnGetModuleInformation)(HANDLE, HMODULE, MODULEINFOX*, unsigned long);

static bool AddressInModule(void* address, char* outModName, size_t outSize, char* outModBase)
{
    if (!address) return false;
    HMODULE mod = nullptr;
    if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        (LPCSTR)address, &mod) && mod)
    {
        GetModuleFileNameA(mod, outModName, (DWORD)outSize);
        outModBase[0] = '\0';
        FnGetModuleInformation pfn = (FnGetModuleInformation)GetProcAddress(GetModuleHandleA("kernel32.dll"), "K32GetModuleInformation");
        if (!pfn)
        {
            HMODULE psapi = LoadLibraryA("psapi.dll");
            if (psapi)
                pfn = (FnGetModuleInformation)GetProcAddress(psapi, "GetModuleInformation");
        }
        if (pfn)
        {
            MODULEINFOX mi{};
            pfn(GetCurrentProcess(), mod, &mi, sizeof(mi));
            sprintf_s(outModBase, outSize, "0x%p", mi.lpBaseOfDll);
        }
        return true;
    }
    return false;
}

unsigned int LogCrashRaw(unsigned int code, void* address)
{
    wchar_t tmp[MAX_PATH];
    if (!GetTempPathW(MAX_PATH, tmp))
        return code;
    std::wstring path = std::wstring(tmp) + L"lolimenu.log";

    HANDLE h = CreateFileW(path.c_str(), FILE_APPEND_DATA, FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if (h == INVALID_HANDLE_VALUE)
        return code;

    char modName[MAX_PATH] = "?";
    char modBase[64] = "?";
    if (AddressInModule(address, modName, sizeof(modName), modBase))
    {
        RawPrintf(h, "[crash] exception=0x%08X at %p thread=%lu module=%s base=%s\n",
            code, address, GetCurrentThreadId(), modName, modBase);
    }
    else
    {
        RawPrintf(h, "[crash] exception=0x%08X at %p thread=%lu module=? (unmapped)\n",
            code, address, GetCurrentThreadId());
    }
    CloseHandle(h);
    return code;
}

// Log every first-chance exception code, throttled to once per code per second,
// so we catch C++ exceptions (0xE06D7363), fail-fast, breakpoints, etc. and not
// just plain access violations. Pure WinAPI so it works even if the heap is bad.
static LONG WINAPI CrashVeh(EXCEPTION_POINTERS* ep)
{
    static struct { unsigned int code; DWORD lastTick; } s_throttle[32];
    static volatile LONG s_throttleLock = 0;

    if (ep && ep->ExceptionRecord)
    {
        unsigned int code = ep->ExceptionRecord->ExceptionCode;
        DWORD now = GetTickCount();

        bool shouldLog = true;
        while (InterlockedCompareExchange(&s_throttleLock, 1, 0) != 0) { /* spin */ }
        for (int i = 0; i < 32; i++)
        {
            if (s_throttle[i].code == code)
            {
                if (now - s_throttle[i].lastTick < 1000)
                    shouldLog = false;
                else
                    s_throttle[i].lastTick = now;
                break;
            }
            if (s_throttle[i].code == 0)
            {
                s_throttle[i].code = code;
                s_throttle[i].lastTick = now;
                break;
            }
        }
        InterlockedExchange(&s_throttleLock, 0);

        if (shouldLog)
            LogCrashRaw(code, ep->ExceptionRecord->ExceptionAddress);
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

static LONG WINAPI CrashUnhandled(EXCEPTION_POINTERS* ep)
{
    if (ep && ep->ExceptionRecord)
    {
        LogCrashRaw(ep->ExceptionRecord->ExceptionCode, ep->ExceptionRecord->ExceptionAddress);
        // Best-effort mini dump so we can symbolicate locally.
        wchar_t tmp[MAX_PATH];
        wchar_t dumpPath[MAX_PATH];
        if (GetTempPathW(MAX_PATH, tmp))
        {
            swprintf_s(dumpPath, MAX_PATH, L"%slolimenu.dmp", tmp);
            HANDLE dumpFile = CreateFileW(dumpPath, GENERIC_WRITE, FILE_SHARE_READ, NULL,
                CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
            if (dumpFile != INVALID_HANDLE_VALUE)
            {
                // dbghelp is only loaded at crash time (dynamic) so it never
                // shows up in the DLL import table of the manual-mapped module.
                typedef BOOL(WINAPI* FnMiniDumpWriteDump)(HANDLE, DWORD, HANDLE, DWORD, PMINIDUMP_EXCEPTION_INFORMATION, PMINIDUMP_USER_STREAM_INFORMATION, PMINIDUMP_CALLBACK_INFORMATION);
                HMODULE dbghelp = LoadLibraryA("dbghelp.dll");
                if (dbghelp)
                {
                    auto pfn = (FnMiniDumpWriteDump)GetProcAddress(dbghelp, "MiniDumpWriteDump");
                    if (pfn)
                    {
                        MINIDUMP_EXCEPTION_INFORMATION mei{};
                        mei.ThreadId = GetCurrentThreadId();
                        mei.ExceptionPointers = ep;
                        mei.ClientPointers = TRUE;
                        pfn(GetCurrentProcess(), GetCurrentProcessId(), dumpFile,
                            MiniDumpNormal, &mei, NULL, NULL);
                    }
                }
                CloseHandle(dumpFile);
            }
        }
    }
    return EXCEPTION_EXECUTE_HANDLER;
}

void InstallCrashHandler()
{
    static std::once_flag flag;
    std::call_once(flag, []()
    {
        AddVectoredExceptionHandler(1, CrashVeh);
        SetUnhandledExceptionFilter(CrashUnhandled);
        Log("[crash] crash handler installed");
    });
}