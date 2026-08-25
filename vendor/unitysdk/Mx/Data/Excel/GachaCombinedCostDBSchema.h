#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHACOMBINEDCOSTDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B30700)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B30710)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B30720)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCombinedCostDBSchema_TypeDefinitionIndex = 18046;

	class GachaCombinedCostDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

