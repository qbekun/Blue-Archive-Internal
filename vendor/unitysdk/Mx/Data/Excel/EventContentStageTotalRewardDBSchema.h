#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B0E160)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B0E170)
#define MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B0E180)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentStageTotalRewardDBSchema_TypeDefinitionIndex = 17892;

	class EventContentStageTotalRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTSTAGETOTALREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

