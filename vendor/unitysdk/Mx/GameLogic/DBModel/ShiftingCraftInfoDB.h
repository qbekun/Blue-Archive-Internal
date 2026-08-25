#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_CRAFTRECIPEID_OFFSET UNITYSDK_OFFSET(0xFF4E60)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_SLOTSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFF4E70)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_CRAFTAMOUNT_OFFSET UNITYSDK_OFFSET(0xFF4E80)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xFF4E90)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_CRAFTRECIPEID_OFFSET UNITYSDK_OFFSET(0xFF4EF0)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_CRAFTAMOUNT_OFFSET UNITYSDK_OFFSET(0xFF4F00)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_SLOTSEQUENCE_OFFSET UNITYSDK_OFFSET(0xFF4F10)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xFF4F20)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xFF4F30)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xFF4F40)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xFF4F50)
#define MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFF4F60)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ShiftingCraftInfoDB_TypeDefinitionIndex = 12570;

	class ShiftingCraftInfoDB : public Il2CppObject
	{
	public:
		::System::Int64 _SlotSequence_k__BackingField; // 0x10
		::System::Int64 _CraftRecipeId_k__BackingField; // 0x18
		::System::Int64 _CraftAmount_k__BackingField; // 0x20
		::System::DateTime* _StartTime_k__BackingField; // 0x28
		::System::DateTime* _EndTime_k__BackingField; // 0x30

		::System::Void set_CraftRecipeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_CRAFTRECIPEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SlotSequence()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_SLOTSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void set_CraftAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_CRAFTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsComplete(::System::DateTime* arg)
		{
			return ((::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CraftRecipeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_CRAFTRECIPEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CraftAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_CRAFTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SlotSequence(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_SLOTSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_STARTTIME_OFFSET))(nullptr);
		}

		::System::Void set_StartTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_STARTTIME_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_GET_ENDTIME_OFFSET))(nullptr);
		}

		::System::Void set_EndTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_SET_ENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_SHIFTINGCRAFTINFODB_.CTOR_OFFSET))(nullptr);
		}

	};
}

