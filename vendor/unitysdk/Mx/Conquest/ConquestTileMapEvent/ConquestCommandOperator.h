#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDOPERATOR_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142BED0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDOPERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x142BF60)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDOPERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x142BFD0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDOPERATOR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142BFE0)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandOperator_TypeDefinitionIndex = 14848;

	class ConquestCommandOperator : public Il2CppObject
	{
	public:
		::System::String* GroupId; // 0x18

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDOPERATOR_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDOPERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDOPERATOR_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDOPERATOR_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

