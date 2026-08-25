#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABB590)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB5A0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_GET_EVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1ABB5B0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_SET_EVENTSTAGEID_OFFSET UNITYSDK_OFFSET(0x1ABB5C0)
#define MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1ABB5D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDebuffRewardDBSchema_TypeDefinitionIndex = 17655;

	class EventContentDebuffRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _EventStageId_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_GET_EVENTSTAGEID_OFFSET))(nullptr);
		}

		::System::Void set_EventStageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_SET_EVENTSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDEBUFFREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

