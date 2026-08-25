#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AAC240)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_ROUND_OFFSET UNITYSDK_OFFSET(0x1AAC4A0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECT_EVENTCONTENTID_ROUND_OFFSET UNITYSDK_OFFSET(0x1AAC8A0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECT_EVENTCONTENTID_ROUND_OFFSET UNITYSDK_OFFSET(0x1AACC80)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AAD220)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AAD540)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AAD850)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AADC60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueSearchRoundExcelRepository_TypeDefinitionIndex = 17593;

	class EventContentClueSearchRoundExcelRepository : public ::MXUnderCover::UCBTNodeTag
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_Round(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_ROUND_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_Round(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECT_EVENTCONTENTID_ROUND_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_Round(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECT_EVENTCONTENTID_ROUND_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

