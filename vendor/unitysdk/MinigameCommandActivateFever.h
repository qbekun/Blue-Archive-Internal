#pragma once
#include "unitysdk.h"

namespace MX::MinigameRhythm { class MinigameRhythmLogicManager; }

#define MINIGAMECOMMANDACTIVATEFEVER_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0xD12370)
#define MINIGAMECOMMANDACTIVATEFEVER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD123C0)
#define MINIGAMECOMMANDACTIVATEFEVER_START_OFFSET UNITYSDK_OFFSET(0xD123E0)

	inline static constexpr unsigned int MinigameCommandActivateFever_TypeDefinitionIndex = 630;

	class MinigameCommandActivateFever : public Il2CppObject
	{
	public:
		::MX::MinigameRhythm::MinigameRhythmLogicManager* logicManager; // 0x18
		::System::Single FeverValueThreshold; // 0x20

		::System::Void ExecuteCommand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDACTIVATEFEVER_EXECUTECOMMAND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDACTIVATEFEVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMECOMMANDACTIVATEFEVER_START_OFFSET))(nullptr);
		}

	};

