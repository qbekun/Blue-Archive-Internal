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
#include <unitysdk/MX/Logic/Battles/O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c.h>

namespace NoSkillCooldown
{
    void CharacterSkillCard_Update_Hook(void* _this)
    {
        static bool logged = false;
        if (!logged)
        {
            Log("[noskill] CharacterSkillCard::Update fired inBattle=%d", (int)Engine::IsInBattle());
            logged = true;
        }

        if (g_Options.bNoSkillCooldown && Engine::IsInBattle())
        {
            auto* card = (::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c*)_this;
            card->_RemainCoolTime_k__BackingField = 0;
        }

        CALL_ORIGIN(CharacterSkillCard_Update_Hook, _this);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("No Skill Cooldown");
        if (ui::items::notify_checkbox("No Skill Cooldown", &g_Options.bNoSkillCooldown))
        {
            if (g_Options.bNoSkillCooldown)
            {
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_CHARACTERSKILLCARD_UPDATE), (void*)&CharacterSkillCard_Update_Hook);
            }
            else
            {
                Hooks::DeleteHook((void*)&CharacterSkillCard_Update_Hook);
            }
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Skills have no cooldown");
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}