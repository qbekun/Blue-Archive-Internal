#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A1C0)
#define MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_SET_MAINSTORYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5A1D0)
#define MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5A1E0)
#define MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_GET_MAINSTORYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5A1F0)
#define MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A5A200)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestEventDBSchema_TypeDefinitionIndex = 17224;

	class ConquestEventDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _MainStoryEventContentId_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MainStoryEventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_SET_MAINSTORYEVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_MainStoryEventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_GET_MAINSTORYEVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEVENTDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

