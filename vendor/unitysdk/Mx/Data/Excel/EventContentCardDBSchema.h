#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_GET_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9BE30)
#define MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A9BE40)
#define MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9BE50)
#define MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_SET_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9BE60)
#define MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9BE70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCardDBSchema_TypeDefinitionIndex = 17507;

	class EventContentCardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int32 _CardGroupId_k__BackingField; // 0x20
		::System::Int64 _EventContentId_k__BackingField; // 0x28

		::System::Int32 get_CardGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_GET_CARDGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_CardGroupId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_SET_CARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

