#pragma once
#include "../../../unitysdk.h"

namespace MX::Conquest::ConquestTileMapEvent { class ConquestTriggerType; }
namespace MX::Conquest { class ConquestTile; }
namespace MX::Conquest { class ConquestUnit; }
namespace MX::Conquest::ConquestTileMapEvent { class ConquestEventTrigger; }

#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1432150)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1432160)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_GET_TILE_OFFSET UNITYSDK_OFFSET(0x1432170)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_SET_TILE_OFFSET UNITYSDK_OFFSET(0x1432180)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1432190)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x14321A0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x14321B0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x14321C0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14321D0)
#define MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x14321E0)

namespace MX::Conquest::ConquestTileMapEvent
{
	inline static constexpr unsigned int ConquestEventTrigger_TypeDefinitionIndex = 14883;

	class ConquestEventTrigger : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* _Type_k__BackingField; // 0x10
		::MX::Conquest::ConquestTile* _Tile_k__BackingField; // 0x18
		::MX::Conquest::ConquestUnit* _Unit_k__BackingField; // 0x20
		::System::String* _Parameter_k__BackingField; // 0x28

		::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* get_Type()
		{
			return ((::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestTriggerType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestTile* get_Tile()
		{
			return ((::MX::Conquest::ConquestTile*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_GET_TILE_OFFSET))(nullptr);
		}

		::System::Void set_Tile(::MX::Conquest::ConquestTile* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_SET_TILE_OFFSET))(arg, nullptr);
		}

		::MX::Conquest::ConquestUnit* get_Unit()
		{
			return ((::MX::Conquest::ConquestUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Void set_Unit(::MX::Conquest::ConquestUnit* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_SET_UNIT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Parameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_GET_PARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_Parameter(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_SET_PARAMETER_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger* arg)
		{
			((::System::Void(*)(::MX::Conquest::ConquestTileMapEvent::ConquestEventTrigger*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CONQUEST_CONQUESTTILEMAPEVENT_CONQUESTEVENTTRIGGER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

