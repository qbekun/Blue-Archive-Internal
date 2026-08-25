#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1AAC1F0)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AAC200)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AAC210)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AAC220)
#define MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1AAC230)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentClueSearchRoundDBSchema_TypeDefinitionIndex = 17585;

	class EventContentClueSearchRoundDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _Round_k__BackingField; // 0x28

		::System::Int64 get_Round()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCLUESEARCHROUNDDBSCHEMA_SET_ROUND_OFFSET))(arg, nullptr);
		}

	};
}

