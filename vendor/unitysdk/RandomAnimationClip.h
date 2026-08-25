#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }

	inline static constexpr unsigned int RandomAnimationClip_TypeDefinitionIndex = 6255;

	class RandomAnimationClip : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* clip; // 0x10
		::System::Int32 probability; // 0x18

	};

