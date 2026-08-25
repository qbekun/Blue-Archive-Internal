#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AA70D0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA70E0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_GET_CLUEID_OFFSET UNITYSDK_OFFSET(0x1AA70F0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_SET_CLUEID_OFFSET UNITYSDK_OFFSET(0x1AA7100)
#define MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AA7110)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueDBSchema_TypeDefinitionIndex = 17561;

	class EventContentClueDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _ClueId_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_GET_CLUEID_OFFSET))(nullptr);
		}

		::System::Void set_ClueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_SET_CLUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

