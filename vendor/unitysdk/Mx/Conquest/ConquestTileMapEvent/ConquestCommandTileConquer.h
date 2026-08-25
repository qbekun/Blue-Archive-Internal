#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUER_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142C900)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUER_.CTOR_OFFSET UNITYSDK_OFFSET(0x142C980)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUER_CLONE_OFFSET UNITYSDK_OFFSET(0x142C990)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142CA00)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandTileConquer_TypeDefinitionIndex = 14857;

	class ConquestCommandTileConquer : public Il2CppObject
	{
	public:
		::System::Int64 TileUniqueId; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUER_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUER_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUER_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDTILECONQUER_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

