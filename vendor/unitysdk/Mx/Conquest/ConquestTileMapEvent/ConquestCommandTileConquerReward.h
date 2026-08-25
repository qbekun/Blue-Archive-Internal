#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUERREWARD_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142CA10)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUERREWARD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142CA80)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUERREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x142CA90)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUERREWARD_CLONE_OFFSET UNITYSDK_OFFSET(0x142CAA0)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandTileConquerReward_TypeDefinitionIndex = 14858;

	class ConquestCommandTileConquerReward : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUERREWARD_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUERREWARD_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUERREWARD_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUERREWARD_CLONE_OFFSET))(nullptr);
		}

	};
}

