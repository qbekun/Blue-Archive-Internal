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

namespace InstantKill
{
    int64_t BattleEntity_AddHitPoint_Hook(void* _this, int64_t value)
    {
        if (g_Options.bInstantKill && Engine::IsInBattle())
        {
            auto* entity = (::MX::Logic::BattleEntities::BattleEntity*)_this;
            int type = (int32_t)entity->get_TacticEntityType();
            static bool logged = false;
            if (!logged) { Log("[instantkill] AddHitPoint fired inBattle=1 type=%d", type); logged = true; }
            if (type != 1)
            {
                entity->set_HitPoint(1);
                entity->set_HitPointBefore(1);
            }
        }

        return CALL_ORIGIN(BattleEntity_AddHitPoint_Hook, _this, value);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Instant Kill");
        if (ui::items::notify_checkbox("Instant Kill", &g_Options.bInstantKill))
        {
            if (g_Options.bInstantKill)
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_BATTLEENTITY_ADDHITPOINT), (void*)&BattleEntity_AddHitPoint_Hook);
            else
                Hooks::DeleteHook((void*)&BattleEntity_AddHitPoint_Hook);
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Instantly kills enemies");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}