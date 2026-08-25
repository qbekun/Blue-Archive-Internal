#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA0D10)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1010)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA1050)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AA1370)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AA14E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCardShopModifyExcelRepository_TypeDefinitionIndex = 17535;

	class EventContentCardShopModifyExcelRepository : public ::FlatData::UnderCoverItemCategory
	{
	public:
		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPMODIFYEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

