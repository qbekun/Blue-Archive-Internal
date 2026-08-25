#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C82B30)
#define MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C82B40)
#define MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C82B50)
#define MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C82B60)
#define MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C82B70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRefreshDBSchema_TypeDefinitionIndex = 19441;

	class ShopRefreshDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x28

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHDBSCHEMA_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

	};
}

