#include "features.h"
#include "gui.h"
#include "globals.h"
#include "hooks.h"
#include "engine.h"
#include "utils.h"
#include "offsets.h"
#include <imgui.h>
#include <unitysdk/unitysdk.h>
#include <unitysdk/MX/Logic/BattleEntities/SummonedCharacter.h>

namespace InfSummonDuration
{
    void SummonedCharacter_Update_Hook(void* _this, void* battle)
    {
        if (g_Options.bInfSummonDuration && Engine::IsInBattle())
        {
            auto* sc = (::MX::Logic::BattleEntities::SummonedCharacter*)_this;
            sc->set_SummonDurationRemained(sc->get_SummonDurationMax());
        }

        CALL_ORIGIN(SummonedCharacter_Update_Hook, _this, battle);
    }

    void SummonedCharacter_ExpireSummonedCharacter_Hook(void* _this)
    {
        if (g_Options.bInfSummonDuration && Engine::IsInBattle())
            return;

        CALL_ORIGIN(SummonedCharacter_ExpireSummonedCharacter_Hook, _this);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Infinite Summon Duration");
        if (ui::items::notify_checkbox("Infinite Summon Duration", &g_Options.bInfSummonDuration))
        {
            if (g_Options.bInfSummonDuration)
            {
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_SUMMONEDCHARACTER_UPDATE), (void*)&SummonedCharacter_Update_Hook);
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_SUMMONEDCHARACTER_EXPIRE), (void*)&SummonedCharacter_ExpireSummonedCharacter_Hook);
            }
            else
            {
                Hooks::DeleteHook((void*)&SummonedCharacter_Update_Hook);
                Hooks::DeleteHook((void*)&SummonedCharacter_ExpireSummonedCharacter_Hook);
            }
        }
        ImGui::SameLine();
        ImGui::HelpMarker("your summon last forever");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}