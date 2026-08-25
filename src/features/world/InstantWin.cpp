#include "features.h"
#include "gui.h"
#include "globals.h"
#include "hooks.h"
#include "engine.h"
#include "utils.h"
#include "offsets.h"
#include <imgui.h>
#include <unitysdk/unitysdk.h>
#include <unitysdk/MX/Logic/Battles/Battle.h>
#include <unitysdk/MX/Logic/Battles/BattleLogicState.h>
#include <unitysdk/MX/Logic/Battles/GroupTag.h>
#include <unitysdk/MX/Logic/Battles/BattleEndType.h>
#include <unitysdk/MX/Logic/Battles/Summary/BattleSummary.h>

namespace InstantWin
{
    void Battle_Update_Hook(void* _this)
    {
        if (g_Options.bInstantWin && Engine::IsInBattle())
        {
            auto* battle = (::MX::Logic::Battles::Battle*)_this;
            auto* summary = battle->O7f31e72b9496299aa5ac430c704a33f2b795d6d4d8e4cf19638840bb90873110();
            if (summary)
            {
                summary->_Winner_k__BackingField = (::MX::Logic::Battles::GroupTag)1;
                summary->_EndType_k__BackingField = (::MX::Logic::Battles::BattleEndType)4;
                summary->_EndFrame_k__BackingField = 0;
                summary->_ElapsedRealtime_k__BackingField = 0.0f;

                battle->O8d694122a1c61a8f384acced76e4eb71cb2010c708f5222a7721748a467a6389((::MX::Logic::Battles::BattleLogicState)3);
            }
        }

        CALL_ORIGIN(Battle_Update_Hook, _this);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Instant Win");
        if (ui::items::notify_checkbox("Instant Win", &g_Options.bInstantWin))
        {
            if (g_Options.bInstantWin)
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_BATTLE_UPDATE), (void*)&Battle_Update_Hook);
            else
                Hooks::DeleteHook((void*)&Battle_Update_Hook);
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Instantly wins the battle");
        ImGui::SameLine();
        ImGui::AlertMarker("PLEASE DISABLE THIS WHEN GOING TO TACTICAL CHALLENGE TO AVOID GETTING KICKED, can still be used inside Tactical Challenge though, just disable when going to tactical challenge");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}