#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMAND_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x142B4F0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMAND_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142B500)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMAND_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommand_TypeDefinitionIndex = 14838;

	class ConquestCommand : public Il2CppObject
	{
	public:
		::System::Int32 DisplayOrder; // 0x10

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMAND_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMAND_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMAND_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMAND_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

	};
}

