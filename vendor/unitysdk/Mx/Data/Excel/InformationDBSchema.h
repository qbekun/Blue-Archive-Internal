#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_INFORMATIONDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4EEF0)
#define MX_DATA_EXCEL_INFORMATIONDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4EF00)
#define MX_DATA_EXCEL_INFORMATIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EF10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InformationDBSchema_TypeDefinitionIndex = 18185;

	class InformationDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupID_k__BackingField; // 0x20

		::System::Void set_GroupID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

