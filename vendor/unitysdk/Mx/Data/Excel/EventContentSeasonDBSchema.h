#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventContentType; }

#define MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFAD10)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_SET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFAD20)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AFAD30)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AFAD40)
#define MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AFAD50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSeasonDBSchema_TypeDefinitionIndex = 17810;

	class EventContentSeasonDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::FlatData::EventContentType* _EventContentType_k__BackingField; // 0x28

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentType(::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_SET_EVENTCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSEASONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

