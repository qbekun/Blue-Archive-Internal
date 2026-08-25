#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class MinigameNoteColor; }
namespace MX::SaveData { class MinigameNoteScale; }
namespace MX::SaveData { class ToggleValue; }
class MinigameRhythmOption;

#define MINIGAMERHYTHMOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD16DE0)
#define MINIGAMERHYTHMOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0xD16E10)

	inline static constexpr unsigned int MinigameRhythmOption_TypeDefinitionIndex = 670;

	class MinigameRhythmOption : public Il2CppObject
	{
	public:
		::System::Int32 NoteSpeed; // 0x10
		::System::Int32 OffsetLevel; // 0x14
		::MX::SaveData::MinigameNoteColor* NotePresetIndex; // 0x18
		::MX::SaveData::MinigameNoteScale* NoteScaleOption; // 0x1C
		::MX::SaveData::ToggleValue* FeverOn; // 0x20
		::MX::SaveData::ToggleValue* SoundEffectOn; // 0x24
		::System::Boolean AutoPlayOn; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMOPTION_.CTOR_OFFSET))(nullptr);
		}

		MinigameRhythmOption* Clone()
		{
			return ((MinigameRhythmOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMERHYTHMOPTION_CLONE_OFFSET))(nullptr);
		}

	};

