#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDHIDECONQUESTUI_CLONE_OFFSET UNITYSDK_OFFSET(0x142BB90)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDHIDECONQUESTUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x142BBF0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDHIDECONQUESTUI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142BC00)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDHIDECONQUESTUI_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142BC10)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandHideConquestUI_TypeDefinitionIndex = 14845;

	class ConquestCommandHideConquestUI : public Il2CppObject
	{
	public:
		::System::Boolean BlockNextCommand; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDHIDECONQUESTUI_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDHIDECONQUESTUI_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDHIDECONQUESTUI_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDHIDECONQUESTUI_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

	};
}

