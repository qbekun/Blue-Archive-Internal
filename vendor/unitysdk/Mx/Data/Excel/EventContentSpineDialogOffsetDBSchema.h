#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventContentType; }

#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B03CE0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B03CF0)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_SET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B03D00)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B03D10)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B03D20)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B03D30)
#define MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B03D40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentSpineDialogOffsetDBSchema_TypeDefinitionIndex = 17851;

	class EventContentSpineDialogOffsetDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::FlatData::EventContentType* _EventContentType_k__BackingField; // 0x28
		::System::Int64 _CostumeUniqueId_k__BackingField; // 0x30

		::FlatData::EventContentType* get_EventContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CostumeUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentType(::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_SET_EVENTCONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSPINEDIALOGOFFSETDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

