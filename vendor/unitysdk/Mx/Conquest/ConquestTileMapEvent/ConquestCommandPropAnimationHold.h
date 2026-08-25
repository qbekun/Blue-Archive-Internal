#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATIONHOLD_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142C270)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATIONHOLD_.CTOR_OFFSET UNITYSDK_OFFSET(0x142C300)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATIONHOLD_CLONE_OFFSET UNITYSDK_OFFSET(0x142C310)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATIONHOLD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142C390)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandPropAnimationHold_TypeDefinitionIndex = 14851;

	class ConquestCommandPropAnimationHold : public Il2CppObject
	{
	public:
		::System::Int32 PropKey; // 0x18
		::System::String* AnimationName; // 0x20

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATIONHOLD_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATIONHOLD_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATIONHOLD_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATIONHOLD_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

