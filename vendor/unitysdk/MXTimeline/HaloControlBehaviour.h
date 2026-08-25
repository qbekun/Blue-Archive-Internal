#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define MXTIMELINE_HALOCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE01DD0)
#define MXTIMELINE_HALOCONTROLBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xE01EE0)
#define MXTIMELINE_HALOCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE01F60)

namespace MXTimeline
{
	inline static constexpr unsigned int HaloControlBehaviour_TypeDefinitionIndex = 10217;

	class HaloControlBehaviour : public Il2CppObject
	{
	public:
		::System::String* HaloRootName; // 0x0
		::UnityEngine::GameObject* owner; // 0x10
		::System::Single AddFollowPositionPower; // 0x18
		Il2CppObject* _cachedFollowers; // 0x20

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_HALOCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_HALOCONTROLBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_HALOCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

