#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaLogLevel; }

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaLogLevel_TypeDefinitionIndex = 37355;

	class YogaLogLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Yoga::YogaLogLevel* Error; // 0x0
		::UnityEngine::Yoga::YogaLogLevel* Warn; // 0x0
		::UnityEngine::Yoga::YogaLogLevel* Info; // 0x0
		::UnityEngine::Yoga::YogaLogLevel* Debug; // 0x0
		::UnityEngine::Yoga::YogaLogLevel* Verbose; // 0x0
		::UnityEngine::Yoga::YogaLogLevel* Fatal; // 0x0

	};
}

