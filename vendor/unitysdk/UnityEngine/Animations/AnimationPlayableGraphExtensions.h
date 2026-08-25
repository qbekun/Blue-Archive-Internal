#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Playables { class PlayableGraph&; }
namespace UnityEngine::Playables { class PlayableOutputHandle&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_SYNCUPDATEANDTIMEMODE_OFFSET UNITYSDK_OFFSET(0xA1CE120)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEANIMATIONOUTPUT_OFFSET UNITYSDK_OFFSET(0xA1D0C70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALSYNCUPDATEANDTIMEMODE_OFFSET UNITYSDK_OFFSET(0xA1D0C30)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableGraphExtensions_TypeDefinitionIndex = 36500;

	class AnimationPlayableGraphExtensions : public Il2CppObject
	{
	public:
		::System::Void SyncUpdateAndTimeMode(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_SYNCUPDATEANDTIMEMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean InternalCreateAnimationOutput(::UnityEngine::Playables::PlayableGraph&* arg, ::System::String* str, ::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::System::String*, ::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALCREATEANIMATIONOUTPUT_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void InternalSyncUpdateAndTimeMode(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEGRAPHEXTENSIONS_INTERNALSYNCUPDATEANDTIMEMODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

