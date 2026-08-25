#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOBJECTCOMPLETE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142C6E0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOBJECTCOMPLETE_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142C6F0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOBJECTCOMPLETE_CLONE_OFFSET UNITYSDK_OFFSET(0x142C780)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOBJECTCOMPLETE_.CTOR_OFFSET UNITYSDK_OFFSET(0x142C7E0)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandStepObjectComplete_TypeDefinitionIndex = 14855;

	class ConquestCommandStepObjectComplete : public Il2CppObject
	{
	public:
		::System::Int32 Step; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOBJECTCOMPLETE_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOBJECTCOMPLETE_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOBJECTCOMPLETE_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOBJECTCOMPLETE_.CTOR_OFFSET))(nullptr);
		}

	};
}

