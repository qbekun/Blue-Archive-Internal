#pragma once
#include "unitysdk.h"

namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }
class MinigameNoteObject;

#define MINIGAMECOMMANDCHANGEENEMY__EXECUTECOMMAND_B__4_0_OFFSET UNITYSDK_OFFSET(0xD12450)
#define MINIGAMECOMMANDCHANGEENEMY_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xD12520)
#define MINIGAMECOMMANDCHANGEENEMY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD126A0)
#define MINIGAMECOMMANDCHANGEENEMY_START_OFFSET UNITYSDK_OFFSET(0xD126B0)

	inline static constexpr unsigned int MinigameCommandChangeEnemy_TypeDefinitionIndex = 631;

	class MinigameCommandChangeEnemy : public Il2CppObject
	{
	public:
		::System::Single Probability; // 0x18
		::System::String* CharacterAddressablePath; // 0x20
		::MX::MinigameRhythm::MinigameRhythmLogicManager* logicManager; // 0x28

		::System::Void _ExecuteCommand_b__4_0(MinigameNoteObject* arg)
		{
			((::System::Void(*)(MinigameNoteObject*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDCHANGEENEMY__EXECUTECOMMAND_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDCHANGEENEMY_EXECUTECOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDCHANGEENEMY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDCHANGEENEMY_START_OFFSET))(nullptr);
		}

	};

