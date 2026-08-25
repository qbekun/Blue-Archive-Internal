#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::Playables { class PlayableHandle&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEEXTENSIONS_SETANIMATEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEEXTENSIONS_SETANIMATEDPROPERTIESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D0BF0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableExtensions_TypeDefinitionIndex = 36499;

	class AnimationPlayableExtensions : public Il2CppObject
	{
	public:
		::System::Void SetAnimatedProperties(Il2CppObject* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEEXTENSIONS_SETANIMATEDPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetAnimatedPropertiesInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEEXTENSIONS_SETANIMATEDPROPERTIESINTERNAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

