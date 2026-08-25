#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Animates { class TweenTiming; }

namespace MXStudio::LipSync::Animates
{
	inline static constexpr unsigned int TweenTiming_TypeDefinitionIndex = 36890;

	class TweenTiming : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXStudio::LipSync::Animates::TweenTiming* Early; // 0x0
		::MXStudio::LipSync::Animates::TweenTiming* Centered; // 0x0
		::MXStudio::LipSync::Animates::TweenTiming* Late; // 0x0

	};
}

