#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDDBSCHEMA_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C77370)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C77380)
#define MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDDBSCHEMA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0x1C77390)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFilterClassifiedDBSchema_TypeDefinitionIndex = 19392;

	class ShopFilterClassifiedDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GoodsId_k__BackingField; // 0x20

		::System::Void set_GoodsId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDDBSCHEMA_SET_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFILTERCLASSIFIEDDBSCHEMA_GET_GOODSID_OFFSET))(nullptr);
		}

	};
}

