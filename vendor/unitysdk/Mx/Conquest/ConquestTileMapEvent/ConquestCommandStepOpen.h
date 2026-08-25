#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOPEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x142C7F0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOPEN_CLONE_OFFSET UNITYSDK_OFFSET(0x142C800)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOPEN_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142C860)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOPEN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142C8F0)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandStepOpen_TypeDefinitionIndex = 14856;

	class ConquestCommandStepOpen : public Il2CppObject
	{
	public:
		::System::Int32 Step; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOPEN_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOPEN_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOPEN_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPOPEN_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

