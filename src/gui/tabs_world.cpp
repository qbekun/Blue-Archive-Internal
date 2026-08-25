#include "gui.h"
#include "gui_colors.h"
#include "features/features.h"

void ui::tabs::world(const TabCategory tab)
{
    if (tab.name == "World")
    {
        if (ui::begin_child_left("main", 280))
        {
            InstantWin::Render();
            DumbEnemies::Render();
        }
        ImGui::EndChild();

        if (ui::begin_child_right("speed", 280))
        {
            BattleSpeed::Render();
            GlobalSpeed::Render();
        }
        ImGui::EndChild();

        if (ui::begin_child_left("skip", 280))
        {
            SkipDialog::Render();
            SkipBattleSummary::Render();
        }
        ImGui::EndChild();
    }
}