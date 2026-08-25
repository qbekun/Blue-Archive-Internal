#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9E4C0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_SET_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9E4D0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A9E4E0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A9E4F0)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E500)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A9E510)
#define MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_GET_CARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9E520)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCardShopDBSchema_TypeDefinitionIndex = 17517;

	class EventContentCardShopDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _Id_k__BackingField; // 0x28
		::System::Int32 _CardGroupId_k__BackingField; // 0x30

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CardGroupId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_SET_CARDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_CardGroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCARDSHOPDBSCHEMA_GET_CARDGROUPID_OFFSET))(nullptr);
		}

	};
}

