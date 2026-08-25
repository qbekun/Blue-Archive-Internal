#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C79A60)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODDBSCHEMA_GET_SHOPFREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1C79A70)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODDBSCHEMA_SET_SHOPFREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1C79A80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFreeRecruitPeriodDBSchema_TypeDefinitionIndex = 19406;

	class ShopFreeRecruitPeriodDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ShopFreeRecruitId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopFreeRecruitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODDBSCHEMA_GET_SHOPFREERECRUITID_OFFSET))(nullptr);
		}

		::System::Void set_ShopFreeRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODDBSCHEMA_SET_SHOPFREERECRUITID_OFFSET))(arg, nullptr);
		}

	};
}

