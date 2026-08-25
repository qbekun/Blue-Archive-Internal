#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AEE020)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AEE030)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AEE040)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMiniEventShortCutDBSchema_TypeDefinitionIndex = 17762;

	class EventContentMiniEventShortCutDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

