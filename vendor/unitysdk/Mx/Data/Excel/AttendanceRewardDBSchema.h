#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ATTENDANCEREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19DEC00)
#define MX_DATA_EXCEL_ATTENDANCEREWARDDBSCHEMA_SET_ATTENDANCEID_OFFSET UNITYSDK_OFFSET(0x19DEC10)
#define MX_DATA_EXCEL_ATTENDANCEREWARDDBSCHEMA_GET_ATTENDANCEID_OFFSET UNITYSDK_OFFSET(0x19DEC20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AttendanceRewardDBSchema_TypeDefinitionIndex = 16714;

	class AttendanceRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _AttendanceId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AttendanceId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDDBSCHEMA_SET_ATTENDANCEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AttendanceId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEREWARDDBSCHEMA_GET_ATTENDANCEID_OFFSET))(nullptr);
		}

	};
}

