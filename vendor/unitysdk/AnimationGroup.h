#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }

	inline static constexpr unsigned int AnimationGroup_TypeDefinitionIndex = 6254;

	class AnimationGroup : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* idleClip; // 0x10
		::UnityEngine::AnimationClip* reactionClip; // 0x18
		Il2CppObject* randomClipsList; // 0x20

	};

