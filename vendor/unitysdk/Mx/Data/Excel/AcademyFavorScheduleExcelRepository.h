#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECT_SCHEDULEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1987490)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECT_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x19878A0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECTFIRST_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1987BB0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1987ED0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19881D0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19885D0)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1988610)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1988930)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyFavorScheduleExcelRepository_TypeDefinitionIndex = 16564;

	class AcademyFavorScheduleExcelRepository : public ::FlatData::FriendSearchLevelOption
	{
	public:
		Il2CppObject* Select_ScheduleGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECT_SCHEDULEGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ScheduleGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECT_SCHEDULEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ScheduleGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECTFIRST_SCHEDULEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

