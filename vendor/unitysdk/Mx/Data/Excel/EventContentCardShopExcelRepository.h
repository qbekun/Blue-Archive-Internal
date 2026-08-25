#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A9E530)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A9E850)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9EC50)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9EF50)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A9F250)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9F660)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A9F980)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A9FCE0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A9FD20)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_CARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1AA0030)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECTFIRST_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1AA0440)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCardShopExcelRepository_TypeDefinitionIndex = 17528;

	class EventContentCardShopExcelRepository : public ::FlatData::Club
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CardGroupId(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_CARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CardGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECT_CARDGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CardGroupId(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPEXCELREPOSITORY_SELECTFIRST_CARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

