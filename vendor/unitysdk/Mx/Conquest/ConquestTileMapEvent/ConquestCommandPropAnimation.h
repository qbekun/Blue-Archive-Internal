#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATION_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142C130)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATION_CLONE_OFFSET UNITYSDK_OFFSET(0x142C1D0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x142C250)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142C260)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandPropAnimation_TypeDefinitionIndex = 14850;

	class ConquestCommandPropAnimation : public Il2CppObject
	{
	public:
		::System::Int32 PropKey; // 0x18
		::System::String* AnimationName; // 0x20
		::System::Boolean BlockNextCommand; // 0x28

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATION_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATION_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDPROPANIMATION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

