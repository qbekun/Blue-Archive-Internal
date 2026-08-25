#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6130)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF6140)
#define MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF6150)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentPlayGuideDBSchema_TypeDefinitionIndex = 17796;

	class EventContentPlayGuideDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTPLAYGUIDEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

