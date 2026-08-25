#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureObject; }

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_GET_TREASURES_OFFSET UNITYSDK_OFFSET(0xFFED80)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_SET_NORMALCELLS_OFFSET UNITYSDK_OFFSET(0xFFED90)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFE990)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_GET_TREASUREIDS_OFFSET UNITYSDK_OFFSET(0xFFEDA0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_GET_NORMALCELLS_OFFSET UNITYSDK_OFFSET(0xFFEDB0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_SET_TREASURES_OFFSET UNITYSDK_OFFSET(0xFFEDC0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_RECEIVETREASURE_OFFSET UNITYSDK_OFFSET(0xFFEDD0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_FLIP_OFFSET UNITYSDK_OFFSET(0xFFF0D0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_SET_TREASUREIDS_OFFSET UNITYSDK_OFFSET(0xFFF510)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentTreasureBoardHistory_TypeDefinitionIndex = 12625;

	class EventContentTreasureBoardHistory : public Il2CppObject
	{
	public:
		Il2CppObject* _TreasureIds_k__BackingField; // 0x10
		Il2CppObject* _NormalCells_k__BackingField; // 0x18
		Il2CppObject* _Treasures_k__BackingField; // 0x20

		Il2CppObject* get_Treasures()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_GET_TREASURES_OFFSET))(nullptr);
		}

		::System::Void set_NormalCells(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_SET_NORMALCELLS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_TreasureIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_GET_TREASUREIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_NormalCells()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_GET_NORMALCELLS_OFFSET))(nullptr);
		}

		::System::Void set_Treasures(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_SET_TREASURES_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReceiveTreasure(::System::Int64 arg, ::System::Int32 arg2, ::System::Int64 arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_RECEIVETREASURE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Flip(::System::Int32 arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::EventContentTreasureObject* arg3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::MX::GameLogic::DBModel::EventContentTreasureObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_FLIP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_TreasureIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASUREBOARDHISTORY_SET_TREASUREIDS_OFFSET))(arg, nullptr);
		}

	};
}

