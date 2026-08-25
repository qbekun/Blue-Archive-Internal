#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventContentType; }

#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_SET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4CF0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4D00)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE4D10)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE4D20)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4D30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentLobbyMenuDBSchema_TypeDefinitionIndex = 17721;

	class EventContentLobbyMenuDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::FlatData::EventContentType* _EventContentType_k__BackingField; // 0x28

		::System::Void set_EventContentType(::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_SET_EVENTCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

