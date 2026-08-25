#include "features.h"
#include "gui.h"
#include "globals.h"
#include "hooks.h"
#include "engine.h"
#include "utils.h"
#include "offsets.h"
#include <imgui.h>
#include <unitysdk/unitysdk.h>
#include <unitysdk/MX/Visual/Battles/BattleSceneHandler.h>

namespace SkipBattleSummary
{
    // The SDK enum headers lost their values (everything is 0), so hardcode the
    // real values from the C# dump:
    //   BattleSceneState      : Ending = 3, ShowResult = 4
    //   BattleResultSkipType  : SkipTimeline = 2
    enum : int32_t { State_Ending = 3, State_ShowResult = 4, SkipTimeline = 2 };

    void BattleSceneHandler_Update_Hook(void* _this)
    {
        if (g_Options.bSkipBattleSummary)
        {
            auto* handler = (::MX::Visual::Battles::BattleSceneHandler*)_this;
            if ((int32_t)handler->get_BattleState() == State_Ending)
            {
                handler->set_BattleResultSkipType((::MX::Visual::Battles::BattleResultSkipType)SkipTimeline);
                handler->set_BattleState((::MX::Visual::Battles::BattleSceneState)State_ShowResult);
            }
        }

        CALL_ORIGIN(BattleSceneHandler_Update_Hook, _this);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Skip Battle Summary");
        if (ui::items::notify_checkbox("Skip Battle Summary", &g_Options.bSkipBattleSummary))
        {
            if (g_Options.bSkipBattleSummary)
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_BATTLESCENEHANDLER_UPDATE), (void*)&BattleSceneHandler_Update_Hook);
            else
                Hooks::DeleteHook((void*)&BattleSceneHandler_Update_Hook);
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Skips the battle result screen");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}
