#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AF4D50)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF4D60)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4D70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentNotifyDBSchema_TypeDefinitionIndex = 17789;

	class EventContentNotifyDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

