#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFODBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AECE50)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AECE60)
#define MX_DATA_EXCEL_EVENTCONTENTMEETUPINFODBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AECE70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMeetupInfoDBSchema_TypeDefinitionIndex = 17755;

	class EventContentMeetupInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFODBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMEETUPINFODBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

