#pragma once

namespace Hooks
{
    bool  CreateHook(void* target, void* detour);
    bool  DeleteHook(void* detour);
    void* GetOriginal(void* detour);
    void  UnhookAll();
}

#define CALL_ORIGIN(fn, ...) (((decltype(&fn))Hooks::GetOriginal((void*)&fn))(__VA_ARGS__))