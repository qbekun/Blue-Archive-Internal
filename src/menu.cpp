#include "menu.h"
#include "gui/gui.h"
#include "gui/gui_colors.h"
#include "gui/blur/directx_blur.h"
#include "features/features.h"
#include "config.h"
#include "logging.h"

namespace Menu
{
    void Start()
    {
        // Feature startup.
        GodMode::Start();
        InstantKill::Start();
        NoCost::Start();
        DamageMultiplier::Start();
        HealMultiplier::Start();
        InfSummonDuration::Start();
        PlayerStats::Start();
        NoSkillCooldown::Start();
        InstantWin::Start();
        DumbEnemies::Start();
        BattleSpeed::Start();
        GlobalSpeed::Start();
        SkipDialog::Start();
        SkipBattleSummary::Start();
        CameraFOV::Start();
    }

    void Update()
    {
        GodMode::Update();
        InstantKill::Update();
        NoCost::Update();
        DamageMultiplier::Update();
        HealMultiplier::Update();
        InfSummonDuration::Update();
        PlayerStats::Update();
        NoSkillCooldown::Update();
        InstantWin::Update();
        DumbEnemies::Update();
        BattleSpeed::Update();
        GlobalSpeed::Update();
        SkipDialog::Update();
        SkipBattleSummary::Update();
        CameraFOV::Update();
    }

    void Render()
    {
        ui::UpdateMenuColors();

        const ImVec2 viewport = ImGui::GetMainViewport()->Size;
        ImGui::SetNextWindowPos(ImVec2((viewport.x - ui::size.x) * 0.5f, (viewport.y - ui::size.y) * 0.5f), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(ui::size));

        ImGui::Begin("lolikuza", nullptr,
            ImGuiWindowFlags_NoDecoration |
            ImGuiWindowFlags_NoResize |
            ImGuiWindowFlags_NoBringToFrontOnFocus |
            ImGuiWindowFlags_NoSavedSettings);
        {
            draw_background_blur(ImGui::GetBackgroundDrawList(),
                ui::g_pSwapChain, ui::g_pd3dDevice, ui::g_pd3dDeviceContext,
                ImGui::GetWindowPos(), ImGui::GetWindowPos() + ImGui::GetWindowSize(), 6.f);

            ui::render_background();
            ui::render_title();
            ui::render_title_cheat("lolikuza");
            ui::render_tabs_content();
            ui::render_tabs(ImGui::GetIO().DeltaTime);
            ui::render_outline();
            ui::render_watermark();
            ui::render_notification();
        }
        ImGui::End();
    }
}