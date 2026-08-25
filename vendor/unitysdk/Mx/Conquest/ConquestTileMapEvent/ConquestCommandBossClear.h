#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSCLEAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x142B510)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSCLEAR_CLONE_OFFSET UNITYSDK_OFFSET(0x142B520)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSCLEAR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142B580)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSCLEAR_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142B590)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandBossClear_TypeDefinitionIndex = 14839;

	class ConquestCommandBossClear : public Il2CppObject
	{
	public:
		::System::Int32 Step; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSCLEAR_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSCLEAR_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSCLEAR_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDBOSSCLEAR_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

	};
}

