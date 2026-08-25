#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_SET_TREASUREOBJECTS_OFFSET UNITYSDK_OFFSET(0xFFDBE0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xFFDBF0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_SET_VARIATIONID_OFFSET UNITYSDK_OFFSET(0xFFDC80)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_GET_VARIATIONID_OFFSET UNITYSDK_OFFSET(0xFFDC90)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_GET_TREASUREOBJECTS_OFFSET UNITYSDK_OFFSET(0xFFDCA0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_ISTREASURE_OFFSET UNITYSDK_OFFSET(0xFFDCB0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xFFDDD0)
#define MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xFFDDE0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int EventContentTreasureSaveBoard_TypeDefinitionIndex = 12615;

	class EventContentTreasureSaveBoard : public Il2CppObject
	{
	public:
		::System::Int64 _VariationId_k__BackingField; // 0x10
		::System::Int32 _Round_k__BackingField; // 0x18
		Il2CppObject* _TreasureObjects_k__BackingField; // 0x20

		::System::Void set_TreasureObjects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_SET_TREASUREOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_VariationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_SET_VARIATIONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_VariationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_GET_VARIATIONID_OFFSET))(nullptr);
		}

		Il2CppObject* get_TreasureObjects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_GET_TREASUREOBJECTS_OFFSET))(nullptr);
		}

		::System::Boolean IsTreasure(::System::Int32 arg, ::System::Int32 arg2, ::MX::GameLogic::DBModel::EventContentTreasureObject&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::MX::GameLogic::DBModel::EventContentTreasureObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_ISTREASURE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_EVENTCONTENTTREASURESAVEBOARD_GET_ROUND_OFFSET))(nullptr);
		}

	};
}

