#include "engine.h"
#include "hooks.h"
#include "logging.h"
#include "offsets.h"
#include <unitysdk/unitysdk.h>
#include <windows.h>

namespace Engine
{
    static void*              g_currentBattle = nullptr;
    static volatile ULONGLONG g_lastSeenTick  = 0;
    static bool               g_initialized   = false;
    static bool               g_loggedBeat    = false;

    static void Battle_Begin_Hook(void* _this)
    {
        g_currentBattle = _this;
        g_lastSeenTick  = GetTickCount64();
        CALL_ORIGIN(Battle_Begin_Hook, _this);
    }

    // NOTE: in the current game build the method at OFFSET_BATTLE_PROCESSGAMEEND
    // fires EVERY FRAME with the battle pointer (it behaves like the per-frame
    // battle update, not a one-shot battle-end callback). Treating it as
    // "battle ended" cleared g_currentBattle on the very first frame, so
    // IsInBattle() was always false and every battle feature stayed gated off.
    // We now use it as a battle heartbeat instead: it keeps IsInBattle() true
    // while a battle is running, and the timestamp below expires shortly after
    // the battle actually ends (the method stops being called).
    static void Battle_Heartbeat_Hook(void* _this)
    {
        if (!g_currentBattle)
            g_currentBattle = _this;
        g_lastSeenTick = GetTickCount64();

        if (!g_loggedBeat)
        {
            Log("[engine] battle heartbeat this=0x%p", _this);
            g_loggedBeat = true;
        }

        CALL_ORIGIN(Battle_Heartbeat_Hook, _this);
    }

    void Init()
    {
        if (g_initialized) return;

        Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_BATTLE_BEGIN),
                          (void*)&Battle_Begin_Hook);
        Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_BATTLE_PROCESSGAMEEND),
                          (void*)&Battle_Heartbeat_Hook);

        g_initialized = true;
    }

    bool IsInBattle()
    {
        // Battle is active while we keep seeing its heartbeat (every frame
        // during battle). It goes false ~1.5s after the battle ends.
        return g_currentBattle != nullptr &&
               (GetTickCount64() - g_lastSeenTick) < 1500;
    }

    void* GetBattle()
    {
        return IsInBattle() ? g_currentBattle : nullptr;
    }
}
