#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_SELECTFIRST_ATTENDANCEID_OFFSET UNITYSDK_OFFSET(0x19DEC30)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_SELECT_ATTENDANCEID_OFFSET UNITYSDK_OFFSET(0x19DEF50)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_SELECT_ATTENDANCEIDS_OFFSET UNITYSDK_OFFSET(0x19DF250)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19DF650)
#define MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19DF7C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AttendanceRewardExcelRepository_TypeDefinitionIndex = 16719;

	class AttendanceRewardExcelRepository : public ::FlatData::DreamMakerEndingCondition
	{
	public:
		Il2CppObject* SelectFirst_AttendanceId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_SELECTFIRST_ATTENDANCEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_AttendanceId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_SELECT_ATTENDANCEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_AttendanceIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_SELECT_ATTENDANCEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

