#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableBinding; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CE2F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATEANIMATIONOUTPUT_OFFSET UNITYSDK_OFFSET(0xA1CE410)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableBinding_TypeDefinitionIndex = 36485;

	class AnimationPlayableBinding : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableBinding* Create(::System::String* str, ::UnityEngine::Object* arg)
		{
			return (return (::UnityEngine::Playables::PlayableBinding*(*)(::System::String*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* CreateAnimationOutput(::UnityEngine::Playables::PlayableGraph* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEBINDING_CREATEANIMATIONOUTPUT_OFFSET))(arg, str, nullptr);
		}

	};
}

