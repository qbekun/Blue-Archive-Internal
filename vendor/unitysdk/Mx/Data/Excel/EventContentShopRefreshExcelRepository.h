#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B018C0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B01CC0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B01FE0)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B02020)
#define MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B02320)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentShopRefreshExcelRepository_TypeDefinitionIndex = 17842;

	class EventContentShopRefreshExcelRepository : public <>c__DisplayClass34_0
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSHOPREFRESHEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

