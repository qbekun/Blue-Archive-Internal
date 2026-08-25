#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCHECKTILEEROSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142B870)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCHECKTILEEROSION_CLONE_OFFSET UNITYSDK_OFFSET(0x142B880)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCHECKTILEEROSION_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142B8F0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCHECKTILEEROSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x142B960)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandCheckTileErosion_TypeDefinitionIndex = 14842;

	class ConquestCommandCheckTileErosion : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCHECKTILEEROSION_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCHECKTILEEROSION_CLONE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCHECKTILEEROSION_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDCHECKTILEEROSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

