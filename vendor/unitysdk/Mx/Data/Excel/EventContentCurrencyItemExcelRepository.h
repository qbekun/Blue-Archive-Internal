#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AB9850)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AB9890)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AB9AF0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECT_ITEMUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1AB9EF0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECT_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1ABA300)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABA610)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABA930)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECTFIRST_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1ABAC30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCurrencyItemExcelRepository_TypeDefinitionIndex = 17653;

	class EventContentCurrencyItemExcelRepository : public UCBTTaskCustomAnimationFormatter
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ItemUniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECT_ITEMUNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ItemUniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECT_ITEMUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ItemUniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCELREPOSITORY_SELECTFIRST_ITEMUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

