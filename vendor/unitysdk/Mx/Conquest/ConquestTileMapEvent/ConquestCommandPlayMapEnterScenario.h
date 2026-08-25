#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPLAYMAPENTERSCENARIO_CLONE_OFFSET UNITYSDK_OFFSET(0x142BFF0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPLAYMAPENTERSCENARIO_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142C060)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPLAYMAPENTERSCENARIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x142C050)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPLAYMAPENTERSCENARIO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142C120)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandPlayMapEnterScenario_TypeDefinitionIndex = 14849;

	class ConquestCommandPlayMapEnterScenario : public Il2CppObject
	{
	public:
		::System::Int32 Step; // 0x18
		::FlatData::StageDifficulty* Difficulty; // 0x1C

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPLAYMAPENTERSCENARIO_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPLAYMAPENTERSCENARIO_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPLAYMAPENTERSCENARIO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPLAYMAPENTERSCENARIO_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

