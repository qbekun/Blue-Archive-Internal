#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDUNEXPECTEDEVENT_CLONE_OFFSET UNITYSDK_OFFSET(0x142CC10)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDUNEXPECTEDEVENT_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142CC80)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDUNEXPECTEDEVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142CD20)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDUNEXPECTEDEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x142CC70)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandUnexpectedEvent_TypeDefinitionIndex = 14860;

	class ConquestCommandUnexpectedEvent : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDUNEXPECTEDEVENT_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDUNEXPECTEDEVENT_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDUNEXPECTEDEVENT_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDUNEXPECTEDEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

