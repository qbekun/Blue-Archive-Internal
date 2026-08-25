#include "features.h"
#include "gui.h"
#include "globals.h"
#include "hooks.h"
#include "engine.h"
#include "utils.h"
#include "logging.h"
#include "offsets.h"
#include <imgui.h>
#include <unitysdk/unitysdk.h>
#include <unitysdk/MX/Logic/Battles/O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0.h>

namespace NoCost
{
    static void ForceCost(void* _this)
    {
        auto* mgr = (::MX::Logic::Battles::O0cfedd4af7eb1e58c3659c9f2b940143072795cc8522d1a7d43a037a961960b0*)_this;
        mgr->Ofab372965997abb6db560e7e0963c3b39782a8d1b5fd81e4187d692b2600a61f = 999999.0f;
    }

    static bool s_logged = false;

    void PlayerSkillCardManager_UpdateRegenCost_Hook(void* _this)
    {
        if (!s_logged) { Log("[nocost] UpdateRegenCost fired inBattle=%d", (int)Engine::IsInBattle()); s_logged = true; }
        if (g_Options.bNoCost && Engine::IsInBattle())
            ForceCost(_this);

        CALL_ORIGIN(PlayerSkillCardManager_UpdateRegenCost_Hook, _this);
    }

    void PlayerSkillCardManager_ProcessSkillCard_Hook(void* _this)
    {
        if (!s_logged) { Log("[nocost] ProcessSkillCard fired inBattle=%d", (int)Engine::IsInBattle()); s_logged = true; }
        if (g_Options.bNoCost && Engine::IsInBattle())
            ForceCost(_this);

        CALL_ORIGIN(PlayerSkillCardManager_ProcessSkillCard_Hook, _this);
    }

    void PlayerSkillCardManager_AddCost_Hook(void* _this, float costToAdd)
    {
        if (!s_logged) { Log("[nocost] AddCost fired inBattle=%d", (int)Engine::IsInBattle()); s_logged = true; }
        if (g_Options.bNoCost && Engine::IsInBattle() && costToAdd < 0.0f)
            return;

        CALL_ORIGIN(PlayerSkillCardManager_AddCost_Hook, _this, costToAdd);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("No Cost");
        if (ui::items::notify_checkbox("No Cost", &g_Options.bNoCost))
        {
            if (g_Options.bNoCost)
            {
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_SKILLCARDMANAGER_PROCESSSKILLCARD), (void*)&PlayerSkillCardManager_ProcessSkillCard_Hook);
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_SKILLCARDMANAGER_UPDATEREGENCOST), (void*)&PlayerSkillCardManager_UpdateRegenCost_Hook);
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_SKILLCARDMANAGER_ADDCOST), (void*)&PlayerSkillCardManager_AddCost_Hook);
            }
            else
            {
                Hooks::DeleteHook((void*)&PlayerSkillCardManager_ProcessSkillCard_Hook);
                Hooks::DeleteHook((void*)&PlayerSkillCardManager_UpdateRegenCost_Hook);
                Hooks::DeleteHook((void*)&PlayerSkillCardManager_AddCost_Hook);
            }
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Inf Cost");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}