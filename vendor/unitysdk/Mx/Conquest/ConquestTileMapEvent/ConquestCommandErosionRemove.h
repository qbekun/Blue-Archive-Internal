#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommand; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestCommandType; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestDisplayInfo; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDEROSIONREMOVE_CLONE_OFFSET UNITYSDK_OFFSET(0x142BA70)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDEROSIONREMOVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x142BAD0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDEROSIONREMOVE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x142BAE0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDEROSIONREMOVE_MAKECONQUESTDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x142BAF0)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestCommandErosionRemove_TypeDefinitionIndex = 14844;

	class ConquestCommandErosionRemove : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestCommand* Clone()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDEROSIONREMOVE_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDEROSIONREMOVE_.CTOR_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestCommandType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestCommandType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDEROSIONREMOVE_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo* MakeConquestDisplayInfo(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestDisplayInfo*(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTCOMMANDEROSIONREMOVE_MAKECONQUESTDISPLAYINFO_OFFSET))(arg, nullptr);
		}

	};
}

