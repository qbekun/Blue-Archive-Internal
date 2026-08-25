#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSDBSCHEMA_SET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C2B570)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSDBSCHEMA_GET_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C2B580)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B590)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PickupFirstGetBonusDBSchema_TypeDefinitionIndex = 19051;

	class PickupFirstGetBonusDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ShopRecruitId_k__BackingField; // 0x20

		::System::Void set_ShopRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSDBSCHEMA_SET_SHOPRECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopRecruitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSDBSCHEMA_GET_SHOPRECRUITID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

