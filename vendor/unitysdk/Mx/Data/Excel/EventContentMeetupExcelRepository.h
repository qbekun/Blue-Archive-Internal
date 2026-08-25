#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA550)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1AEA590)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEA990)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1AEACA0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECTFIRST_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AEAFC0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AEB2E0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1AEB640)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEB940)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_CONDITIONSCENARIOGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1AEBC60)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AEC070)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AEC480)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMeetupExcelRepository_TypeDefinitionIndex = 17753;

	class EventContentMeetupExcelRepository : public ::MXUnderCover::UCBTTaskUCBTTaskStun
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ConditionScenarioGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECTFIRST_CONDITIONSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ConditionScenarioGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_CONDITIONSCENARIOGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ConditionScenarioGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPEXCELREPOSITORY_SELECT_CONDITIONSCENARIOGROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

