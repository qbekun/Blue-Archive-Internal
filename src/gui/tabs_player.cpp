#include "gui.h"
#include "gui_colors.h"
#include "features/features.h"

void ui::tabs::player(const TabCategory tab)
{
    if (tab.name == "Combat")
    {
        if (ui::begin_child_left("main", 280))
        {
            GodMode::Render();
            InstantKill::Render();
            NoCost::Render();
        }
        ImGui::EndChild();

        if (ui::begin_child_right("multipliers", 280))
        {
            DamageMultiplier::Render();
            HealMultiplier::Render();
        }
        ImGui::EndChild();

        if (ui::begin_child_left("summon", 280))
        {
            InfSummonDuration::Render();
            NoSkillCooldown::Render();
        }
        ImGui::EndChild();

        if (ui::begin_child_right("stats", 280))
        {
            PlayerStats::Render();
        }
        ImGui::EndChild();
    }
}