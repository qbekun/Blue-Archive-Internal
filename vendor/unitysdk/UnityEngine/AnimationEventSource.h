#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationEventSource; }

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationEventSource_TypeDefinitionIndex = 36448;

	class AnimationEventSource : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AnimationEventSource* NoSource; // 0x0
		::UnityEngine::AnimationEventSource* Legacy; // 0x0
		::UnityEngine::AnimationEventSource* Animator; // 0x0

	};
}

