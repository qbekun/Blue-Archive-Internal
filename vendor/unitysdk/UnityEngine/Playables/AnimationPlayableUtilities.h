#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Animations { class AnimationClipPlayable; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_PLAYABLES_ANIMATIONPLAYABLEUTILITIES_PLAY_OFFSET UNITYSDK_OFFSET(0xA1CDF30)
#define UNITYENGINE_PLAYABLES_ANIMATIONPLAYABLEUTILITIES_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0xA1CE160)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int AnimationPlayableUtilities_TypeDefinitionIndex = 36484;

	class AnimationPlayableUtilities : public Il2CppObject
	{
	public:
		::System::Void Play(::UnityEngine::Animator* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::PlayableGraph* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::PlayableGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_ANIMATIONPLAYABLEUTILITIES_PLAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Animations::AnimationClipPlayable* PlayClip(::UnityEngine::Animator* arg, ::UnityEngine::AnimationClip* arg, ::UnityEngine::Playables::PlayableGraph&* arg)
		{
			return (return (::UnityEngine::Animations::AnimationClipPlayable*(*)(::UnityEngine::Animator*, ::UnityEngine::AnimationClip*, ::UnityEngine::Playables::PlayableGraph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_ANIMATIONPLAYABLEUTILITIES_PLAYCLIP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

