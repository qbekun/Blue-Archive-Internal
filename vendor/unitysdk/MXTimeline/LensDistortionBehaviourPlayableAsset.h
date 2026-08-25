#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class LensDistortionBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_LENSDISTORTIONBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE01720)
#define MXTIMELINE_LENSDISTORTIONBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE01870)

namespace MXTimeline
{
	inline static constexpr unsigned int LensDistortionBehaviourPlayableAsset_TypeDefinitionIndex = 10213;

	class LensDistortionBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::LensDistortionBehaviour* behaviour; // 0x30

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_LENSDISTORTIONBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_LENSDISTORTIONBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

