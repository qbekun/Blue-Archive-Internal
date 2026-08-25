#pragma once
#include "unitysdk.h"

namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }

#define MINIGAMECOMMANDCHANGEGLOBALSPEED_.CTOR_OFFSET UNITYSDK_OFFSET(0xD12720)
#define MINIGAMECOMMANDCHANGEGLOBALSPEED_START_OFFSET UNITYSDK_OFFSET(0xD12730)
#define MINIGAMECOMMANDCHANGEGLOBALSPEED_LERPGLOBALSPEED_OFFSET UNITYSDK_OFFSET(0xD127A0)
#define MINIGAMECOMMANDCHANGEGLOBALSPEED_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xD12840)

	inline static constexpr unsigned int MinigameCommandChangeGlobalSpeed_TypeDefinitionIndex = 633;

	class MinigameCommandChangeGlobalSpeed : public Il2CppObject
	{
	public:
		::MX::MinigameRhythm::MinigameRhythmLogicManager* logicManager; // 0x18
		::System::Single initialGlobalSpeed; // 0x20
		::System::Single SpeedMultiplier; // 0x24
		::System::Single TransitionTime; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDCHANGEGLOBALSPEED_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDCHANGEGLOBALSPEED_START_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* LerpGlobalSpeed(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDCHANGEGLOBALSPEED_LERPGLOBALSPEED_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDCHANGEGLOBALSPEED_EXECUTECOMMAND_OFFSET))(nullptr);
		}

	};

