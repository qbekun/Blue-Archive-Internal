#include "utils.h"

namespace ImGui
{
    void HelpMarker(const char* desc)
    {
        ImGui::TextDisabled("(?)");
        if (ImGui::IsItemHovered())
        {
            ImGui::BeginTooltip();
            ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
            ImGui::TextUnformatted(desc);
            ImGui::PopTextWrapPos();
            ImGui::EndTooltip();
        }
    }

    void AlertMarker(const char* desc)
    {
        ImGui::TextColored(ImVec4(1.0f, 0.30f, 0.30f, 1.0f), "(!)");
        if (ImGui::IsItemHovered())
        {
            ImGui::BeginTooltip();
            ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
            ImGui::TextUnformatted(desc);
            ImGui::PopTextWrapPos();
            ImGui::EndTooltip();
        }
    }

    bool BeginGroupPanel(const char* name, const ImVec2& size)
    {
        (void)size;
        ImGui::PushID(name);
        ImGui::TextColored(ImVec4(0.98f, 0.75f, 0.85f, 1.0f), name);
        ImGui::Indent();
        ImGui::Spacing();
        return true;
    }

    void EndGroupPanel()
    {
        ImGui::Unindent();
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::PopID();
    }
}