#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }

#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AFF290)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFF4F0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFF810)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AFFB10)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1AFFF10)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1B00350)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1B00780)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B00D20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentShopInfoExcelRepository_TypeDefinitionIndex = 17835;

	class EventContentShopInfoExcelRepository : public UCPlayerDescription
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_CategoryType(::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CATEGORYTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_CategoryType(::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ShopCategoryType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_CATEGORYTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_CategoryType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_SELECT_EVENTCONTENTID_CATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

