#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_SET_BUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x1A995E0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A995F0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_GET_BUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x1A99600)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_GET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A99610)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_SET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A99620)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A99630)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A99640)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBuffGroupDBSchema_TypeDefinitionIndex = 17497;

	class EventContentBuffGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _BuffContentId_k__BackingField; // 0x28
		::System::Int64 _BuffGroupId_k__BackingField; // 0x30

		::System::Void set_BuffGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_SET_BUFFGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BuffGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_GET_BUFFGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_BuffContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_GET_BUFFCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_BuffContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_SET_BUFFCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

