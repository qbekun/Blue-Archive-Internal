#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEA4E0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_GET_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AEA4F0)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AEA500)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_SET_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1AEA510)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA520)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEA530)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AEA540)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMeetupDBSchema_TypeDefinitionIndex = 17742;

	class EventContentMeetupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28
		::System::Int64 _ConditionScenarioGroupId_k__BackingField; // 0x30

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConditionScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_GET_CONDITIONSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_ConditionScenarioGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_SET_CONDITIONSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

