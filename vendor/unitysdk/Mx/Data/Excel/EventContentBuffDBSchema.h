#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTBUFFDBSCHEMA_GET_EVENTCONTENTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A97D20)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A97D30)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFDBSCHEMA_SET_EVENTCONTENTBUFFID_OFFSET UNITYSDK_OFFSET(0x1A97D40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBuffDBSchema_TypeDefinitionIndex = 17490;

	class EventContentBuffDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentBuffId_k__BackingField; // 0x20

		::System::Int64 get_EventContentBuffId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFDBSCHEMA_GET_EVENTCONTENTBUFFID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentBuffId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFDBSCHEMA_SET_EVENTCONTENTBUFFID_OFFSET))(arg, nullptr);
		}

	};
}

