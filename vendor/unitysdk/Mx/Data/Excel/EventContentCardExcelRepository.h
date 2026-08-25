#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECTFIRST_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9BE80)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9C1A0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A9C4B0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A9C710)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9CB20)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECT_CARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A9CE40)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A9D240)
#define MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECT_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9D280)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCardExcelRepository_TypeDefinitionIndex = 17515;

	class EventContentCardExcelRepository : public ::FlatData::Tag
	{
	public:
		Il2CppObject* SelectFirst_CardGroupId(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECTFIRST_CARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CardGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECT_CARDGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CardGroupId(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDEXCELREPOSITORY_SELECT_CARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

