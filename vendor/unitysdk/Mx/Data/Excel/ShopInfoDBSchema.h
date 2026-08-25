#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define MX_DATA_EXCEL_SHOPINFODBSCHEMA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C7C200)
#define MX_DATA_EXCEL_SHOPINFODBSCHEMA_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C7C210)
#define MX_DATA_EXCEL_SHOPINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C220)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopInfoDBSchema_TypeDefinitionIndex = 19413;

	class ShopInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x20

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFODBSCHEMA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFODBSCHEMA_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

