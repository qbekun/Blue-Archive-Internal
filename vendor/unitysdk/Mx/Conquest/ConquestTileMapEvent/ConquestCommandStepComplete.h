#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPCOMPLETE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142C5D0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPCOMPLETE_CLONE_OFFSET UNITYSDK_OFFSET(0x142C5E0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPCOMPLETE_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142C650)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPCOMPLETE_.CTOR_OFFSET UNITYSDK_OFFSET(0x142C640)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandStepComplete_TypeDefinitionIndex = 14854;

	class ConquestCommandStepComplete : public Il2CppObject
	{
	public:
		::System::Int32 Step; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPCOMPLETE_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPCOMPLETE_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPCOMPLETE_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDSTEPCOMPLETE_.CTOR_OFFSET))(nullptr);
		}

	};
}

