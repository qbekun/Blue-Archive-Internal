#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x95E5A30)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E5EA0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateTrack_TypeDefinitionIndex = 37940;

	class SpineAnimationStateTrack : public Il2CppObject
	{
	public:
		::System::Int32 trackIndex; // 0xA0
		::System::Boolean unscaledTime; // 0xA4

		::UnityEngine::Playables::Playable* CreateTrackMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK_CREATETRACKMIXER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

