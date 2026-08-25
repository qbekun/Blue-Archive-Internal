#include "features.h"
#include "gui.h"
#include "globals.h"
#include "utils.h"
#include <imgui.h>
#include <unitysdk/UnityEngine/Camera.h>

namespace CameraFOV
{
    void Render()
    {
        ImGui::BeginGroupPanel("Camera FOV");
        ui::items::notify_checkbox("Camera FOV", &g_Options.bEnableFOV);
        ImGui::SameLine();
        ImGui::HelpMarker("Changes your Camera Field of View");
        ImGui::Separator();
        if (g_Options.bEnableFOV)
            ImGui::SliderFloat("Field of View", &g_Options.fFOV, 0.0f, 360.0f, "%.1f");
        ImGui::EndGroupPanel();
    }

    void Update()
    {
        static bool wasEnabled = false;
        static float originalFOV = 60.0f;

        void* cam = UnityEngine::Camera::get_main();
        if (cam == nullptr) return;

        auto* camera = (::UnityEngine::Camera*)cam;

        if (g_Options.bEnableFOV)
        {
            if (!wasEnabled)
            {
                originalFOV = camera->get_fieldOfView();
                wasEnabled = true;
            }
            camera->set_fieldOfView(g_Options.fFOV);
        }
        else
        {
            if (wasEnabled)
            {
                camera->set_fieldOfView(originalFOV);
                wasEnabled = false;
            }
        }
    }

    void Start() {}
}