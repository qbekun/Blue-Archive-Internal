#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACADEMYREWARDDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19C72C0)
#define MX_DATA_EXCEL_ACADEMYREWARDDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19C72D0)
#define MX_DATA_EXCEL_ACADEMYREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19C72E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AcademyRewardDBSchema_TypeDefinitionIndex = 16593;

	class AcademyRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACADEMYREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

