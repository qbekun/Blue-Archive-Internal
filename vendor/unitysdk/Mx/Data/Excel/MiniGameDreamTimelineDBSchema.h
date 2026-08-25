#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBD9C0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_GET_DREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BBD9D0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BBD9E0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_GET_DREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BBD9F0)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_SET_DREAMMAKERDAYS_OFFSET UNITYSDK_OFFSET(0x1BBDA00)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_SET_DREAMMAKERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1BBDA10)
#define MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDA20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameDreamTimelineDBSchema_TypeDefinitionIndex = 18679;

	class MiniGameDreamTimelineDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _DreamMakerDays_k__BackingField; // 0x28
		::System::Int64 _DreamMakerActionPoint_k__BackingField; // 0x30

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DreamMakerDays()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_GET_DREAMMAKERDAYS_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_DreamMakerActionPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_GET_DREAMMAKERACTIONPOINT_OFFSET))(nullptr);
		}

		::System::Void set_DreamMakerDays(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_SET_DREAMMAKERDAYS_OFFSET))(arg, nullptr);
		}

		::System::Void set_DreamMakerActionPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_SET_DREAMMAKERACTIONPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEDREAMTIMELINEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

