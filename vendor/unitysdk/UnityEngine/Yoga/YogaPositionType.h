#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaPositionType; }

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaPositionType_TypeDefinitionIndex = 37360;

	class YogaPositionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Yoga::YogaPositionType* Relative; // 0x0
		::UnityEngine::Yoga::YogaPositionType* Absolute; // 0x0

	};
}

