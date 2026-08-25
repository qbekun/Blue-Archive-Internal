#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopGroupType; }

#define MX_DATA_EXCEL_SHOPTABGROUPDBSCHEMA_GET_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C84A90)
#define MX_DATA_EXCEL_SHOPTABGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C84AA0)
#define MX_DATA_EXCEL_SHOPTABGROUPDBSCHEMA_SET_SHOPGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C84AB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopTabGroupDBSchema_TypeDefinitionIndex = 19451;

	class ShopTabGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ShopGroupType* _ShopGroupType_k__BackingField; // 0x20

		::FlatData::ShopGroupType* get_ShopGroupType()
		{
			return (return (::FlatData::ShopGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPDBSCHEMA_GET_SHOPGROUPTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ShopGroupType(::FlatData::ShopGroupType* arg)
		{
			((::System::Void(*)(::FlatData::ShopGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPTABGROUPDBSCHEMA_SET_SHOPGROUPTYPE_OFFSET))(arg, nullptr);
		}

	};
}

