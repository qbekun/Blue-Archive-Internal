#pragma once

struct Options
{
    // Player
    bool bGodMode = false;
    bool bInstantKill = false;
    bool bNoCost = false;
    bool bDamageMultiplier = false;
    int  DamageMultiplier = 10;
    bool bHealMultiplier = false;
    int  HealMultiplier = 10;
    bool bInfSummonDuration = false;
    bool bPlayerStats = false;
    bool bNoSkillCooldown = false;

    // World
    bool  bInstantWin = false;
    bool  bDumbEnemies = false;
    bool  bBattleSpeed = false;
    float fBattleSpeed = 2.0f;
    bool  bGlobalSpeed = false;
    float fGlobalSpeed = 2.0f;
    bool  bSkipDialogue = false;
    bool  bSkipBattleSummary = false;

    // Visual
    bool  bEnableFOV = false;
    float fFOV = 90.0f;

    // Watermark
    bool  bWatermark = true;        // show the watermark at all
    bool  bWatermarkFPS = true;     // show FPS counter
    bool  bWatermarkTime = true;    // show current time
    bool  bWatermarkUser = true;    // show the user name
    char  WatermarkUser[32] = "qbekun";

    // Customization (menu look)
    float fMenuAlpha = 0.9f;
    float fMenuColor[4] = { 1.0f, 0.7137f, 0.7569f, 1.0f }; // light pink

    // Config
    bool bSaveConfig = true;
};

inline Options g_Options;