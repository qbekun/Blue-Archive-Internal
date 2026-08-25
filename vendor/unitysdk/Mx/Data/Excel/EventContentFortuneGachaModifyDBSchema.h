#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE1D90)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1DA0)
#define MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE1DB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentFortuneGachaModifyDBSchema_TypeDefinitionIndex = 17707;

	class EventContentFortuneGachaModifyDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _EventContentId_k__BackingField; // 0x20

		::System::Int32 get_EventContentId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTFORTUNEGACHAMODIFYDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

