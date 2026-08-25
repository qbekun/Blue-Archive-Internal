#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ATTENDANCEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19DD520)
#define MX_DATA_EXCEL_ATTENDANCEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19DD530)
#define MX_DATA_EXCEL_ATTENDANCEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19DD540)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AttendanceDBSchema_TypeDefinitionIndex = 16707;

	class AttendanceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ATTENDANCEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

