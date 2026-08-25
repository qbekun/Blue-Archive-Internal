#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECTFIRST_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C82B80)
#define MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECT_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1C82EF0)
#define MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C83240)
#define MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECT_CATEGORYTYPES_OFFSET UNITYSDK_OFFSET(0x1C83640)
#define MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C83A50)
#define MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C83D50)
#define MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C84070)
#define MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C842D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRefreshExcelRepository_TypeDefinitionIndex = 19449;

	class ShopRefreshExcelRepository : public ::MXUnderCover::UCPath
	{
	public:
		Il2CppObject* SelectFirst_CategoryType(::FlatData::ShopCategoryType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopCategoryType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECTFIRST_CATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CategoryType(::FlatData::ShopCategoryType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ShopCategoryType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECT_CATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CategoryTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECT_CATEGORYTYPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPREFRESHEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

