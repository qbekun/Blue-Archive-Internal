#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A890)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A6A8A0)
#define MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A6A8B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestUnexpectedEventDBSchema_TypeDefinitionIndex = 17296;

	class ConquestUnexpectedEventDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTUNEXPECTEDEVENTDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

