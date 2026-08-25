#include "features.h"
#include "gui.h"
#include "globals.h"
#include "hooks.h"
#include "engine.h"
#include "utils.h"
#include "sdk_ext.h"
#include "offsets.h"
#include <imgui.h>
#include <vector>
#include <unitysdk/unitysdk.h>
#include <unitysdk/MX/Logic/Actions/HeroAction.h>
#include <unitysdk/MX/Logic/BattleEntities/BattleEntity.h>
#include <unitysdk/MX/Logic/BattleEntities/O1655a58ff4d16ea3b1193c6c7db095276c8a032f536f2348c792bbe845767680.h>

namespace PlayerStats
{
    struct StatValue
    {
        int id;
        const char* name;
        int value;
    };

    static std::vector<StatValue> g_Stats = {
        { 1, "Max HP", 0 },
        { 2, "Attack Power", 0 },
        { 3, "Defense Power", 0 },
        { 4, "Heal Power", 0 },
        { 5, "Accuracy Point", 0 },
        { 6, "Accuracy Rate", 0 },
        { 7, "Dodge Point", 0 },
        { 8, "Dodge Rate", 0 },
        { 9, "Critical Point", 0 },
        { 10, "Critical Chance Rate", 0 },
        { 11, "Critical Resist Chance Rate", 0 },
        { 12, "Critical Damage Rate", 0 },
        { 13, "Move Speed", 0 },
        { 14, "Sight Range", 0 },
        { 15, "Active Gauge", 0 },
        { 16, "Stability Point", 0 },
        { 17, "Stability Rate", 0 },
        { 18, "Reload Time", 0 },
        { 19, "Max Bullet Count", 0 },
        { 20, "Ignore Delay Count", 0 },
        { 21, "Weapon Range", 0 },
        { 22, "Block Rate", 0 },
        { 23, "Body Radius", 0 },
        { 24, "Action Count", 0 },
        { 25, "Strategy Mobility", 0 },
        { 26, "Strategy Sight Range", 0 },
        { 27, "Street Battle Adaptation", 0 },
        { 28, "Outdoor Battle Adaptation", 0 },
        { 29, "Indoor Battle Adaptation", 0 },
        { 30, "Heal Effectiveness Rate", 0 },
        { 31, "Critical Chance Resist Point", 0 },
        { 32, "Critical Damage Resist Rate", 0 },
        { 33, "Life Recover On Hit", 0 },
        { 34, "Normal Attack Speed", 0 },
        { 35, "Ammo Cost", 0 },
        { 36, "Groggy Gauge", 0 },
        { 37, "Groggy Time", 0 },
        { 38, "Damage Ratio", 0 },
        { 39, "Damaged Ratio", 0 },
        { 40, "Oppression Power", 0 },
        { 41, "Oppression Resist", 0 },
        { 42, "Regen Cost", 0 },
        { 43, "Initial Weapon Range Rate", 0 },
        { 44, "Defense Penetration", 0 },
        { 45, "Defense Penetration Resist", 0 },
        { 46, "Extend Buff Duration", 0 },
        { 47, "Extend Debuff Duration", 0 },
        { 48, "Extend Crowd Control Duration", 0 },
        { 49, "Enhance Explosion Rate", 0 },
        { 50, "Enhance Pierce Rate", 0 },
        { 51, "Enhance Mystic Rate", 0 },
        { 52, "Enhance Light Armor Rate", 0 },
        { 53, "Enhance Heavy Armor Rate", 0 },
        { 54, "Enhance Unarmed Rate", 0 },
        { 55, "Enhance Siege Rate", 0 },
        { 56, "Enhance Normal Rate", 0 },
        { 57, "Enhance Structure Rate", 0 },
        { 58, "Enhance Normal Armor Rate", 0 },
        { 59, "Damage Ratio 2 Increase", 0 },
        { 60, "Damage Ratio 2 Decrease", 0 },
        { 61, "Damaged Ratio 2 Increase", 0 },
        { 62, "Damaged Ratio 2 Decrease", 0 },
        { 63, "Enhance Sonic Rate", 0 },
        { 64, "Enhance Elastic Armor Rate", 0 },
        { 65, "Ex Damaged Ratio Increase", 0 },
        { 66, "Ex Damaged Ratio Decrease", 0 },
        { 67, "Enhance Ex Damage Rate", 0 },
        { 68, "Reduce Ex Damaged Rate", 0 },
        { 69, "Heal Rate", 0 },
        { 70, "Heal Light Armor Rate", 0 },
        { 71, "Heal Heavy Armor Rate", 0 },
        { 72, "Heal Unarmed Rate", 0 },
        { 73, "Heal Elastic Armor Rate", 0 },
        { 74, "Heal Normal Armor Rate", 0 },
        { 75, "Healed Explosion Rate", 0 },
        { 76, "Healed Pierce Rate", 0 },
        { 77, "Healed Mystic Rate", 0 },
        { 78, "Healed Sonic Rate", 0 },
        { 79, "Healed Normal Rate", 0 },
        { 80, "Growth Score", 0 },
        { 81, "Bullet Type Enhance Rate", 0 },
        { 82, "Max Cost Increase", 0 }
    };

    void ApplyStats(void* battleEntity)
    {
        auto* entity = (::MX::Logic::BattleEntities::BattleEntity*)battleEntity;
        auto* statProc = entity->get_statProcessor();
        if (!statProc) return;

        auto* currentStat = entity->get_CurrentStat();
        if (!currentStat) return;

        for (auto& stat : g_Stats)
        {
            if (stat.value == 0) continue;

            SDK_Ext::StatSetValue(currentStat, stat.id, (int64_t)stat.value);
            statProc->_InitialStat_k__BackingField = currentStat;
            statProc->_DefaultStat_k__BackingField = currentStat;

            if (stat.id == 1)
                entity->set_HitPoint((int64_t)stat.value);
        }
    }

    void HeroAction_Update_Hook(void* _this, void* battle)
    {
        if (g_Options.bPlayerStats && Engine::IsInBattle())
        {
            auto* action = (::MX::Logic::Actions::HeroAction*)_this;
            auto* executer = action->get_Executer();
            if (executer && (int32_t)executer->get_TacticEntityType() == 1)
                ApplyStats(executer);
        }

        CALL_ORIGIN(HeroAction_Update_Hook, _this, battle);
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Player Stats");
        if (ui::items::notify_checkbox("Stat Mods", &g_Options.bPlayerStats))
        {
            if (g_Options.bPlayerStats)
                Hooks::CreateHook((void*)((PBYTE)hIl2Cpp + OFFSET_HEROACTION_UPDATE), (void*)&HeroAction_Update_Hook);
            else
                Hooks::DeleteHook((void*)&HeroAction_Update_Hook);
        }
        ImGui::SameLine();
        ImGui::HelpMarker("Let you change your stats");

        if (g_Options.bPlayerStats)
        {
            // Pick a stat from the list, then type the value you want.
            static int selected = 0;
            if (selected >= (int)g_Stats.size())
                selected = 0;

            const char* preview = g_Stats[selected].name;
            if (ImGui::BeginCombo("stat", preview))
            {
                for (int i = 0; i < (int)g_Stats.size(); ++i)
                {
                    const bool is_selected = (selected == i);
                    if (ImGui::Selectable(g_Stats[i].name, is_selected))
                        selected = i;
                    if (is_selected)
                        ImGui::SetItemDefaultFocus();
                }
                ImGui::EndCombo();
            }

            ImGui::InputInt("value", &g_Stats[selected].value, 1, 100);

            if (ImGui::Button("reset stat", ImVec2(275, 30)))
                g_Stats[selected].value = 0;

            if (ImGui::Button("reset all", ImVec2(275, 30)))
            {
                for (auto& s : g_Stats)
                    s.value = 0;
            }
        }
        ImGui::EndGroupPanel();
    }

    void Update() {}
    void Start() {}
}