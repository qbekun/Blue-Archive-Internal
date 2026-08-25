#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_SET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1987440)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1987450)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1987460)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1987470)
#define MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_GET_SCHEDULEGROUPID_OFFSET UNITYSDK_OFFSET(0x1987480)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyFavorScheduleDBSchema_TypeDefinitionIndex = 16556;

	class AcademyFavorScheduleDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _ScheduleGroupId_k__BackingField; // 0x28

		::System::Void set_ScheduleGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_SET_SCHEDULEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScheduleGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYFAVORSCHEDULEDBSCHEMA_GET_SCHEDULEGROUPID_OFFSET))(nullptr);
		}

	};
}

