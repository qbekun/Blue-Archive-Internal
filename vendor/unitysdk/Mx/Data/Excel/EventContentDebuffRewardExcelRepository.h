#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1ABB5E0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABB840)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABBB60)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1ABBE60)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1ABC260)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1ABC660)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1ABCA40)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCFE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDebuffRewardExcelRepository_TypeDefinitionIndex = 17663;

	class EventContentDebuffRewardExcelRepository : public ::MXUnderCover::UCBTTaskCustomAnimation
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_EventStageId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTSTAGEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventStageId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTSTAGEID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventStageId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

