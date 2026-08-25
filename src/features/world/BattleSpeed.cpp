#include "features.h"
#include "gui.h"
#include "globals.h"
#include "engine.h"
#include "utils.h"
#include <imgui.h>
#include <unitysdk/unitysdk.h>
#include <unitysdk/UnityEngine/Time.h>

namespace BattleSpeed
{
    static bool s_lastActive = false;

    void Render()
    {
        ImGui::BeginGroupPanel("Battle Speed");
        ui::items::notify_checkbox("Battle Speed", &g_Options.bBattleSpeed);
        ImGui::SameLine();
        ImGui::HelpMarker("Speeds up the battle (only while in battle)");
        if (g_Options.bBattleSpeed)
            ImGui::SliderFloat("Multiplier", &g_Options.fBattleSpeed, 1.0f, 10.0f, "%.1f");
        ImGui::EndGroupPanel();
    }

    void Update()
    {
        // Works like Global Speed (Time.timeScale), but only applies while a
        // battle is running. When the battle ends the scale is restored.
        bool active = g_Options.bBattleSpeed &&
                      Engine::IsInBattle() &&
                      g_Options.fBattleSpeed > 1.0f;

        if (active)
        {
            UnityEngine::Time::set_timeScale(g_Options.fBattleSpeed);
        }
        else if (s_lastActive)
        {
            // Restore - if Global Speed is also enabled, keep its scale.
            UnityEngine::Time::set_timeScale(g_Options.bGlobalSpeed ? g_Options.fGlobalSpeed : 1.0f);
        }

        s_lastActive = active;
    }

    void Start() {}
}
