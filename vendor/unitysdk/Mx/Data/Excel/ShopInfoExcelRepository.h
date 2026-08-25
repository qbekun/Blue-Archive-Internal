#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_SELECT_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C7C230)
#define MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C580)
#define MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C7C5C0)
#define MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_SELECTFIRST_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C7C730)
#define MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_SELECT_CATEGORYTYPES_OFFSET UNITYSDK_OFFSET(0x1C7CA90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopInfoExcelRepository_TypeDefinitionIndex = 19418;

	class ShopInfoExcelRepository : public Clockwise
	{
	public:
		Il2CppObject* Select_CategoryType(::FlatData::ShopCategoryType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopCategoryType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_SELECT_CATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CategoryType(::FlatData::ShopCategoryType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopCategoryType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_SELECTFIRST_CATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CategoryTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPINFOEXCELREPOSITORY_SELECT_CATEGORYTYPES_OFFSET))(arg, arg, nullptr);
		}

	};
}

