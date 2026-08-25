#include "config.h"
#include "globals.h"
#include "utils.h"
#include "gui.h"
#include <imgui.h>
#include <windows.h>
#include <cstdint>
#include <cstdio>
#include <string>

namespace Config
{
    static const uint32_t MAGIC = 0x4C4F4C49; // "LOLI"

    static std::wstring GetPath()
    {
        wchar_t tmp[MAX_PATH];
        if (!GetTempPathW(MAX_PATH, tmp))
            return L"lolimenu.cfg";
        return std::wstring(tmp) + L"lolimenu.cfg";
    }

    void SaveNow()
    {
        // Sync the live menu customization into the options before dumping.
        g_Options.fMenuAlpha = ui::UI_ALPHA;
        g_Options.fMenuColor[0] = ui::colors::main.x;
        g_Options.fMenuColor[1] = ui::colors::main.y;
        g_Options.fMenuColor[2] = ui::colors::main.z;
        g_Options.fMenuColor[3] = ui::colors::main.w;

        // Options is a POD struct (bools/ints/floats only), so a raw dump is
        // safe. A magic + size guard keeps old/garbage files from corrupting
        // the options when the struct layout changes between versions.
        FILE* f = nullptr;
        if (_wfopen_s(&f, GetPath().c_str(), L"wb") != 0 || !f)
            return;

        uint32_t magic = MAGIC;
        uint32_t size  = (uint32_t)sizeof(Options);
        fwrite(&magic, sizeof(magic), 1, f);
        fwrite(&size,  sizeof(size),  1, f);
        fwrite(&g_Options, sizeof(Options), 1, f);
        fclose(f);
    }

    void Save()
    {
        if (!g_Options.bSaveConfig)
            return;
        SaveNow();
    }

    void Render()
    {
        ImGui::BeginGroupPanel("Config");
        ui::items::notify_checkbox("Save config to file", &g_Options.bSaveConfig);
        ImGui::SameLine();
        ImGui::HelpMarker("Automatically saves your menu settings to %TEMP%\\lolimenu.cfg so they persist between game sessions");

        if (ImGui::Button("save config", ImVec2(275, 30)))
        {
            SaveNow();
            ui::add_notification("A", "Config saved!", ImVec4(0.56f, 0.93f, 0.56f, 1.0f));
        }

        if (ImGui::Button("load config", ImVec2(275, 30)))
        {
            if (GetFileAttributesW(GetPath().c_str()) != INVALID_FILE_ATTRIBUTES)
            {
                Load();
                ui::add_notification("B", "Config loaded!", ImVec4(0.68f, 0.85f, 0.90f, 1.0f));
            }
            else
            {
                ui::add_notification("C", "No config file found!", ImVec4(0.99f, 0.60f, 0.60f, 1.0f));
            }
        }
        ImGui::EndGroupPanel();
    }

    void Load()
    {
        FILE* f = nullptr;
        if (_wfopen_s(&f, GetPath().c_str(), L"rb") != 0 || !f)
            return;

        uint32_t magic = 0;
        uint32_t size  = 0;
        if (fread(&magic, sizeof(magic), 1, f) == 1 &&
            fread(&size,  sizeof(size),  1, f) == 1 &&
            magic == MAGIC && size == (uint32_t)sizeof(Options))
        {
            fread(&g_Options, sizeof(Options), 1, f);

            // Apply menu customization from the config.
            ui::UI_ALPHA = g_Options.fMenuAlpha;
            ui::colors::main = ImVec4(g_Options.fMenuColor[0], g_Options.fMenuColor[1],
                                      g_Options.fMenuColor[2], g_Options.fMenuColor[3]);
            ui::UpdateMenuColors();
        }
        fclose(f);
    }
}
