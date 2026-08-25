#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B079D0)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B079E0)
#define MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B079F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpoilerPopupDBSchema_TypeDefinitionIndex = 17868;

	class EventContentSpoilerPopupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPOILERPOPUPDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

