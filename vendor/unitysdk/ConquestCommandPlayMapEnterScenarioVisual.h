#pragma once
#include "unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandPlayMapEnterScenario; }
namespace FlatData { class StageDifficulty; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define CONQUESTCOMMANDPLAYMAPENTERSCENARIOVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC6B0)
#define CONQUESTCOMMANDPLAYMAPENTERSCENARIOVISUAL_GETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC720)
#define CONQUESTCOMMANDPLAYMAPENTERSCENARIOVISUAL_SETCOMMAND_OFFSET UNITYSDK_OFFSET(0x1ADC730)

	inline static constexpr unsigned int ConquestCommandPlayMapEnterScenarioVisual_TypeDefinitionIndex = 1456;

	class ConquestCommandPlayMapEnterScenarioVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandPlayMapEnterScenario* PlayMapEnterScenario; // 0x18
		::System::Int32 Step; // 0x20
		::FlatData::StageDifficulty* Difficulty; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPLAYMAPENTERSCENARIOVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* GetCommand()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPLAYMAPENTERSCENARIOVISUAL_GETCOMMAND_OFFSET))(nullptr);
		}

		::System::Void SetCommand(::MX::Conquest::ConquestTileMapEvent::ConquestCommand* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestCommand*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCOMMANDPLAYMAPENTERSCENARIOVISUAL_SETCOMMAND_OFFSET))(arg, nullptr);
		}

	};

