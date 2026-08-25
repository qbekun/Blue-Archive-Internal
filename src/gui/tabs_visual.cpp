#include "gui.h"
#include "gui_colors.h"
#include "features/features.h"

void ui::tabs::visual(const TabCategory tab)
{
    if (tab.name == "Visuals")
    {
        if (ui::begin_child_left("main", 280))
        {
            CameraFOV::Render();
        }
        ImGui::EndChild();
    }
}