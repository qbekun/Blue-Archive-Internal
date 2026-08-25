#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationPlayMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int AnimationPlayMode_TypeDefinitionIndex = 36446;

	class AnimationPlayMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AnimationPlayMode* Stop; // 0x0
		::UnityEngine::AnimationPlayMode* Queue; // 0x0
		::UnityEngine::AnimationPlayMode* Mix; // 0x0

	};
}

