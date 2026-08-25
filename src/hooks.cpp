#include "hooks.h"
#include "logging.h"
#include <MinHook.h>
#include <unordered_map>
#include <vector>

namespace Hooks
{
    struct HookInfo
    {
        void* target = nullptr;     // the real game target address
        void* hookedAddr = nullptr; // address patched by MinHook (target for first detour, prev detour for chained)
        void* orig = nullptr;       // trampoline
    };

    static bool g_initialized = false;
    static std::unordered_map<void*, HookInfo> g_hooks;          // detour -> info
    static std::unordered_map<void*, std::vector<void*>> g_chain; // real target -> detours (oldest..newest)

    static bool EnsureInit()
    {
        if (!g_initialized)
        {
            if (MH_Initialize() != MH_OK)
                return false;
            g_initialized = true;
        }
        return true;
    }

    bool CreateHook(void* target, void* detour)
    {
        if (!target || !detour) return false;
        if (!EnsureInit()) return false;
        if (g_hooks.count(detour)) return true; // already installed

        void* orig = nullptr;
        MH_STATUS st;

        auto it = g_chain.find(target);
        if (it == g_chain.end())
        {
            // first hook on this target
            st = MH_CreateHook(target, detour, &orig);
            Log("[hooks] CreateHook target=0x%p detour=0x%p (first) -> MH_CreateHook=%d", target, detour, (int)st);
            if (st != MH_OK) return false;
            st = MH_EnableHook(target);
            Log("[hooks] MH_EnableHook=0x%p -> %d", target, (int)st);
            if (st != MH_OK) { MH_RemoveHook(target); return false; }
            g_chain[target] = { detour };
            g_hooks[detour] = { target, target, orig };
            return true;
        }

        // target already hooked: chain the new detour onto the previous one
        void* prevDetour = it->second.back();
        st = MH_CreateHook(prevDetour, detour, &orig);
        Log("[hooks] CreateHook target=0x%p detour=0x%p (chain onto 0x%p) -> MH_CreateHook=%d", target, detour, prevDetour, (int)st);
        if (st != MH_OK) return false;
        st = MH_EnableHook(prevDetour);
        Log("[hooks] MH_EnableHook=0x%p -> %d", prevDetour, (int)st);
        if (st != MH_OK) { MH_RemoveHook(prevDetour); return false; }

        it->second.push_back(detour);
        g_hooks[detour] = { target, prevDetour, orig };
        return true;
    }

    bool DeleteHook(void* detour)
    {
        if (!detour) return false;
        auto it = g_hooks.find(detour);
        if (it == g_hooks.end()) return false;

        void* target = it->second.target;
        auto chainIt = g_chain.find(target);
        if (chainIt == g_chain.end()) return false;

        auto& chain = chainIt->second;

        // remove all hooks in this chain (disable + remove on every hooked address)
        for (void* d : chain)
        {
            auto hi = g_hooks.find(d);
            if (hi == g_hooks.end()) continue;
            MH_DisableHook(hi->second.hookedAddr);
            MH_RemoveHook(hi->second.hookedAddr);
        }

        // drop the detour from the chain
        chain.erase(std::remove(chain.begin(), chain.end(), detour), chain.end());

        for (auto it2 = g_hooks.begin(); it2 != g_hooks.end();)
        {
            if (it2->second.target == target)
                it2 = g_hooks.erase(it2);
            else
                ++it2;
        }

        if (chain.empty())
        {
            g_chain.erase(chainIt);
            return true;
        }

        // rebuild the chain for remaining detours (oldest..newest)
        for (size_t i = 0; i < chain.size(); ++i)
        {
            void* hookedAddr = (i == 0) ? target : chain[i - 1];
            void* orig = nullptr;
            MH_STATUS st = MH_CreateHook(hookedAddr, chain[i], &orig);
            if (st != MH_OK) { Log("[hooks] rebuild CreateHook 0x%p -> %d", hookedAddr, (int)st); continue; }
            MH_EnableHook(hookedAddr);
            g_hooks[chain[i]] = { target, hookedAddr, orig };
        }
        return true;
    }

    void* GetOriginal(void* detour)
    {
        auto it = g_hooks.find(detour);
        return it == g_hooks.end() ? nullptr : it->second.orig;
    }

    void UnhookAll()
    {
        for (auto& [target, chain] : g_chain)
        {
            for (void* d : chain)
            {
                auto hi = g_hooks.find(d);
                if (hi == g_hooks.end()) continue;
                MH_DisableHook(hi->second.hookedAddr);
                MH_RemoveHook(hi->second.hookedAddr);
            }
        }
        g_hooks.clear();
        g_chain.clear();
        if (g_initialized)
        {
            MH_Uninitialize();
            g_initialized = false;
        }
    }
}