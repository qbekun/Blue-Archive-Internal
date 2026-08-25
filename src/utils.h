#pragma once
#include <imgui.h>

namespace ImGui
{
    void HelpMarker(const char* desc);
    void AlertMarker(const char* desc);
    bool BeginGroupPanel(const char* name, const ImVec2& size = ImVec2(0.0f, 0.0f));
    void EndGroupPanel();
}