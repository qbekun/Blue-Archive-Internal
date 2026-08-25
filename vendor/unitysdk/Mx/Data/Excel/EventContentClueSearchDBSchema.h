#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA9190)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA91A0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AA91B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueSearchDBSchema_TypeDefinitionIndex = 17571;

	class EventContentClueSearchDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

