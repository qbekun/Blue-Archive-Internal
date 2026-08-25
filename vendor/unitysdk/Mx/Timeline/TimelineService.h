#pragma once
#include "../../unitysdk.h"

namespace Mx::Timeline { class TimelineEntityIndex; }

#define MX_TIMELINE_TIMELINESERVICE_ISSUPPORT_OFFSET UNITYSDK_OFFSET(0xE1BA20)
#define MX_TIMELINE_TIMELINESERVICE_ISMAIN_OFFSET UNITYSDK_OFFSET(0xE1BA40)
#define MX_TIMELINE_TIMELINESERVICE_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0xE1BA60)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineService_TypeDefinitionIndex = 10345;

	class TimelineService : public Il2CppObject
	{
	public:
		::System::Boolean IsSupport(::Mx::Timeline::TimelineEntityIndex* arg)
		{
			return ((::System::Boolean(*)(::Mx::Timeline::TimelineEntityIndex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINESERVICE_ISSUPPORT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMain(::Mx::Timeline::TimelineEntityIndex* arg)
		{
			return ((::System::Boolean(*)(::Mx::Timeline::TimelineEntityIndex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINESERVICE_ISMAIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExtension(::Mx::Timeline::TimelineEntityIndex* arg)
		{
			return ((::System::Boolean(*)(::Mx::Timeline::TimelineEntityIndex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINESERVICE_ISEXTENSION_OFFSET))(arg, nullptr);
		}

	};
}

