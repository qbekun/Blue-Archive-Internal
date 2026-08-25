#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSHOWCONQUESTUI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142C3A0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSHOWCONQUESTUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x142C3B0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSHOWCONQUESTUI_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142C3C0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSHOWCONQUESTUI_CLONE_OFFSET UNITYSDK_OFFSET(0x142C480)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandShowConquestUI_TypeDefinitionIndex = 14852;

	class ConquestCommandShowConquestUI : public Il2CppObject
	{
	public:
		::System::Boolean BlockNextCommand; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSHOWCONQUESTUI_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSHOWCONQUESTUI_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSHOWCONQUESTUI_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSHOWCONQUESTUI_CLONE_OFFSET))(nullptr);
		}

	};
}

