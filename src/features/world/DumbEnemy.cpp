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
#include <unitysdk/MX/Logic/BattleEntities/BattleEntity.h>
#include <set>

namespace DumbEnemies
{
    bool BattleEntity_get_HasMainTarget_Hook(void* _this)
    {
        if (g_Options.bDumbEnemies && Engine::IsInBattle())
        {
            auto* entity = (::MX::Logic::BattleEntities::BattleEntity*)_this;
            int type = (int32_t)entity->get_TacticEntityType();

            static std::set<int> seen;
            if (seen.insert(type).second)
                Log("[dumbenemy] get_HasMainTarget fired inBattle=1 type=%d (distinct)", type);

            if (type != 1)
                entity->ClearTargetAndSkillCommandInfo();
        }

        return CALL_ORIGIN(BattleEntity_get_HasMainTarget_Hook, _this);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Dumb Enemies");
        if (ui::items::notify_checkbox("Dumb Enemies", &g_Options.bDumbEnemies))
        {
            if (g_Options.bDumbEnemies)
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_BATTLEENTITY_GET_HASMAINTARGET), (void*)&BattleEntity_get_HasMainTarget_Hook);
            else
                Hooks::DeleteHook((void*)&BattleEntity_get_HasMainTarget_Hook);
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Makes enemies unable to target you");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}