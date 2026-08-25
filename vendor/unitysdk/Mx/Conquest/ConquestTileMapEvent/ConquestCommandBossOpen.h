#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSOPEN_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142B630)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSOPEN_CLONE_OFFSET UNITYSDK_OFFSET(0x142B6B0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSOPEN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142B730)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSOPEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x142B720)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandBossOpen_TypeDefinitionIndex = 14840;

	class ConquestCommandBossOpen : public Il2CppObject
	{
	public:
		::System::Int64 EntityId; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSOPEN_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSOPEN_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSOPEN_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSOPEN_.CTOR_OFFSET))(nullptr);
		}

	};
}

