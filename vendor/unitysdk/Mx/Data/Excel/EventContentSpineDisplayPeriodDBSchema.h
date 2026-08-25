#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DialogCategory; }

#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B057A0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B057B0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_SET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1B057C0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B057D0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B057E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpineDisplayPeriodDBSchema_TypeDefinitionIndex = 17858;

	class EventContentSpineDisplayPeriodDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::FlatData::DialogCategory* _DialogCategory_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_DialogCategory(::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_SET_DIALOGCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDISPLAYPERIODDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

