#pragma once
#include "../../unitysdk.h"

namespace Mx::Timeline { class TimelineEntityIndex; }

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineEntityIndex_TypeDefinitionIndex = 10344;

	class TimelineEntityIndex : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mx::Timeline::TimelineEntityIndex* MainFirst; // 0x0
		::Mx::Timeline::TimelineEntityIndex* MainSecond; // 0x0
		::Mx::Timeline::TimelineEntityIndex* MainThird; // 0x0
		::Mx::Timeline::TimelineEntityIndex* MainFourth; // 0x0
		::Mx::Timeline::TimelineEntityIndex* SupportFirst; // 0x0
		::Mx::Timeline::TimelineEntityIndex* SupportSecond; // 0x0
		::Mx::Timeline::TimelineEntityIndex* MainFifth; // 0x0
		::Mx::Timeline::TimelineEntityIndex* MainSixth; // 0x0
		::Mx::Timeline::TimelineEntityIndex* SupportThird; // 0x0
		::Mx::Timeline::TimelineEntityIndex* SupportFourth; // 0x0

	};
}

