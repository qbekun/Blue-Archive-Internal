#pragma once

namespace Config
{
    void Load();    // load saved options from disk (safe to call once at startup)
    void Save();    // persist current options to disk (no-op when bSaveConfig is off)
    void SaveNow(); // persist current options to disk, regardless of bSaveConfig
    void Render();  // config tab UI (save toggle + save/load buttons)
}
