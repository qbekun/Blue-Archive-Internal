#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define MX_DATA_EXCEL_SHOPDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C75400)
#define MX_DATA_EXCEL_SHOPDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C75410)
#define MX_DATA_EXCEL_SHOPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C75420)
#define MX_DATA_EXCEL_SHOPDBSCHEMA_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C75430)
#define MX_DATA_EXCEL_SHOPDBSCHEMA_SET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C75440)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopDBSchema_TypeDefinitionIndex = 19382;

	class ShopDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::FlatData::ShopCategoryType* _CategoryType_k__BackingField; // 0x28

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPDBSCHEMA_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPDBSCHEMA_SET_CATEGORYTYPE_OFFSET))(arg, nullptr);
		}

	};
}

