#pragma once
#include "unitysdk.h"

class MinigameRhythmPreset;

#define MINIGAMERHYTHMPRESETDATASETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0xD16EC0)
#define MINIGAMERHYTHMPRESETDATASETTING_SETPRESETDATA_OFFSET UNITYSDK_OFFSET(0xD16ED0)
#define MINIGAMERHYTHMPRESETDATASETTING_SAVEPRESETDATA_OFFSET UNITYSDK_OFFSET(0xD16F50)

	inline static constexpr unsigned int MinigameRhythmPresetDataSetting_TypeDefinitionIndex = 673;

	class MinigameRhythmPresetDataSetting : public Il2CppObject
	{
	public:
		::System::String* SpawnPlayerName; // 0x18
		::System::Single JudgeValuesCritical; // 0x20
		::System::Single JudgeValuesAttack; // 0x24
		::System::Single UINoteOffset; // 0x28
		::Il2CppArray<::System::Object*>* NoteObjectSettings; // 0x30
		::System::String* ReplaceResourcePrefabName; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMPRESETDATASETTING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetPresetData(MinigameRhythmPreset* arg)
		{
			((::System::Void(*)(MinigameRhythmPreset*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMPRESETDATASETTING_SETPRESETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SavePresetData(MinigameRhythmPreset* arg)
		{
			((::System::Void(*)(MinigameRhythmPreset*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMPRESETDATASETTING_SAVEPRESETDATA_OFFSET))(arg, nullptr);
		}

	};

