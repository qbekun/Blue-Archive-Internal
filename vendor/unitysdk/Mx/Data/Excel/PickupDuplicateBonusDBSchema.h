#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C282E0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C282F0)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C28300)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C28310)
#define MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C28320)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PickupDuplicateBonusDBSchema_TypeDefinitionIndex = 19034;

	class PickupDuplicateBonusDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _ShopId_k__BackingField; // 0x28

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_ShopId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_SET_SHOPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_GET_SHOPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPDUPLICATEBONUSDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

