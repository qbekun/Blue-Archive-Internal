#include "features.h"
#include "gui.h"
#include "globals.h"
#include "utils.h"
#include <imgui.h>
#include <unitysdk/UnityEngine/Time.h>

namespace GlobalSpeed
{
    static bool lastEnabled = false;

    void Render()
    {
        ImGui::BeginGroupPanel("Global Speed");
        ui::items::notify_checkbox("Global Speed", &g_Options.bGlobalSpeed);
        ImGui::SameLine();
        ImGui::HelpMarker("Modifies Game Speed");
        if (g_Options.bGlobalSpeed)
            ImGui::SliderFloat("Speed Multiplier", &g_Options.fGlobalSpeed, 1.0f, 10.0f, "%.1f");
        ImGui::EndGroupPanel();
    }

    void Update()
    {
        if (g_Options.bGlobalSpeed)
        {
            UnityEngine::Time::set_timeScale(g_Options.fGlobalSpeed);
        }
        else if (lastEnabled)
        {
            UnityEngine::Time::set_timeScale(1.0f);
        }

        lastEnabled = g_Options.bGlobalSpeed;
    }

    void Start() {}
}