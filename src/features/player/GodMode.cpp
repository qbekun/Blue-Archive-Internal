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

namespace GodMode
{
    int64_t BattleEntity_AddHitPoint_Hook(void* _this, int64_t value)
    {
        if (g_Options.bGodMode && Engine::IsInBattle())
        {
            auto* entity = (::MX::Logic::BattleEntities::BattleEntity*)_this;
            int type = (int32_t)entity->get_TacticEntityType();
            static bool logged = false;
            if (!logged) { Log("[godmode] AddHitPoint fired inBattle=1 type=%d", type); logged = true; }
            if (type == 1)
            {
                entity->Damaged = nullptr;
                return 0;
            }
        }

        return CALL_ORIGIN(BattleEntity_AddHitPoint_Hook, _this, value);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("God Mode");
        if (ui::items::notify_checkbox("God Mode", &g_Options.bGodMode))
        {
            if (g_Options.bGodMode)
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_BATTLEENTITY_ADDHITPOINT), (void*)&BattleEntity_AddHitPoint_Hook);
            else
                Hooks::DeleteHook((void*)&BattleEntity_AddHitPoint_Hook);
        }
        ImGui::SameLine();
        ImGui::HelpMarker("You won't take Damage");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}