#pragma once
#include "unitysdk.h"

#define DAILYRECORDSCROLLVIEWITEMDATA_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x267DF70)
#define DAILYRECORDSCROLLVIEWITEMDATA_GET_DAY_OFFSET UNITYSDK_OFFSET(0x267DF80)
#define DAILYRECORDSCROLLVIEWITEMDATA_SET_DAY_OFFSET UNITYSDK_OFFSET(0x267DF90)
#define DAILYRECORDSCROLLVIEWITEMDATA_SET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0x267DFA0)

	inline static constexpr unsigned int DailyRecordScrollViewItemData_TypeDefinitionIndex = 6734;

	class DailyRecordScrollViewItemData : public Il2CppObject
	{
	public:
		::System::Int32 _Day_k__BackingField; // 0x10
		Il2CppObject* _ParcelInfos_k__BackingField; // 0x18

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAILYRECORDSCROLLVIEWITEMDATA_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAILYRECORDSCROLLVIEWITEMDATA_GET_DAY_OFFSET))(nullptr);
		}

		::System::Void set_Day(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DAILYRECORDSCROLLVIEWITEMDATA_SET_DAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DAILYRECORDSCROLLVIEWITEMDATA_SET_PARCELINFOS_OFFSET))(arg, nullptr);
		}

	};

