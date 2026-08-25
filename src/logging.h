#pragma once
#include <windows.h>
#include <string>
#include <cstdio>
#include <cstdarg>

// Single shared logger (one FILE* handle, one .cpp) so every translation unit
// appends to the same file without fighting over a second open handle.
void Log(const char* fmt, ...);

// Installs a vectored exception handler + unhandled-exception filter that
// writes first-chance / fatal exceptions to %TEMP%\lolimenu.log using raw
// WinAPI only (no CRT, no heap), so it works even when the heap/stack is
// already corrupted. Call early from the worker thread.
void InstallCrashHandler();

// Appends a crash record to %TEMP%\lolimenu.log via raw WinAPI. Safe to call
// from exception handlers. Returns the exception code.
unsigned int LogCrashRaw(unsigned int code, void* address);