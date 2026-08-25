#include "gui.h"
#include "gui_colors.h"
#include "config.h"
#include "globals.h"

void ui::tabs::config(const TabCategory tab)
{
    if (tab.name == "Settings")
    {
        if (ui::begin_child_left("main", 280))
        {
            Config::Render();
        }
        ImGui::EndChild();

        if (ui::begin_child_right("customize", 280))
        {
            ImGui::SliderFloat("menu transparency", &ui::UI_ALPHA, 0.5f, 1.f, "%.1f");
            ImGui::ColorEdit4("menu scheme", (float*)&ui::colors::main,
                ImGuiColorEditFlags_NoSidePreview |
                ImGuiColorEditFlags_AlphaBar |
                ImGuiColorEditFlags_NoInputs |
                ImGuiColorEditFlags_AlphaPreview);
        }
        ImGui::EndChild();

        if (ui::begin_child_left("watermark", 280))
        {
            ui::items::notify_checkbox("watermark", &g_Options.bWatermark);
            ui::items::notify_checkbox("show fps", &g_Options.bWatermarkFPS);
            ui::items::notify_checkbox("show time", &g_Options.bWatermarkTime);
            ui::items::notify_checkbox("show user name", &g_Options.bWatermarkUser);
            ImGui::InputText("user name", g_Options.WatermarkUser, sizeof(g_Options.WatermarkUser));
        }
        ImGui::EndChild();
    }
}