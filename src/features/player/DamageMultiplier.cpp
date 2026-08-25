#include "features.h"
#include "gui.h"
#include "globals.h"
#include "hooks.h"
#include "engine.h"
#include "utils.h"
#include "logging.h"
#include "sdk_ext.h"
#include "offsets.h"
#include <imgui.h>
#include <unitysdk/unitysdk.h>
#include <unitysdk/MX/Logic/Actions/HeroAction.h>
#include <unitysdk/MX/Logic/BattleEntities/BattleEntity.h>

namespace DamageMultiplier
{
    static int64_t originalValue = 0;

    void Apply(void* battleEntity)
    {
        void* stat = ((::MX::Logic::BattleEntities::BattleEntity*)battleEntity)->get_CurrentStat();
        if (!stat) return;

        int64_t base = 0;
        if (!SDK_Ext::StatGetValue(stat, 2, &base)) return;

        if (!g_Options.bDamageMultiplier && originalValue != 0)
        {
            SDK_Ext::StatSetValue(stat, 2, originalValue);
            originalValue = 0;
            return;
        }

        if (g_Options.bDamageMultiplier)
        {
            if (originalValue == 0) originalValue = base;
            SDK_Ext::StatSetValue(stat, 2, originalValue * g_Options.DamageMultiplier);
        }
    }

    void HeroAction_Update_Hook(void* _this, void* battle)
    {
        if (g_Options.bDamageMultiplier && Engine::IsInBattle())
        {
            auto* action = (::MX::Logic::Actions::HeroAction*)_this;
            auto* executer = action->get_Executer();
            static bool logged = false;
            if (!logged)
            {
                int t = executer ? (int32_t)executer->get_TacticEntityType() : -1;
                Log("[dmgmult] Oda139::Update fired inBattle=1 executer=0x%p type=%d", executer, t);
                logged = true;
            }
            if (executer && (int32_t)executer->get_TacticEntityType() == 1)
                Apply(executer);
        }

        CALL_ORIGIN(HeroAction_Update_Hook, _this, battle);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Damage Multiplier");
        if (ui::items::notify_checkbox("Damage Multiplier", &g_Options.bDamageMultiplier))
        {
            if (g_Options.bDamageMultiplier)
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_HEROACTION_UPDATE), (void*)&HeroAction_Update_Hook);
            else
                Hooks::DeleteHook((void*)&HeroAction_Update_Hook);
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Multiplies your damage");
        if (g_Options.bDamageMultiplier)
            ImGui::SliderInt("Multiplier", &g_Options.DamageMultiplier, 1, 1000);
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}