#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_GET_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AEF140)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEF150)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AEF160)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_SET_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AEF170)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEF180)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMiniEventTokenDBSchema_TypeDefinitionIndex = 17769;

	class EventContentMiniEventTokenDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _ItemUniqueId_k__BackingField; // 0x28

		::System::Int64 get_ItemUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_GET_ITEMUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ItemUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_SET_ITEMUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

