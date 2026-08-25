#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C75450)
#define MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECT_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C75770)
#define MX_DATA_EXCEL_SHOPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C75AC0)
#define MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECTFIRST_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C75B00)
#define MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C75E70)
#define MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECT_CATEGORYTYPES_OFFSET UNITYSDK_OFFSET(0x1C76170)
#define MX_DATA_EXCEL_SHOPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C76580)
#define MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C767E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopExcelRepository_TypeDefinitionIndex = 19390;

	class ShopExcelRepository : public Type
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CategoryType(::FlatData::ShopCategoryType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopCategoryType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECT_CATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_CategoryType(::FlatData::ShopCategoryType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopCategoryType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECTFIRST_CATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CategoryTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECT_CATEGORYTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

