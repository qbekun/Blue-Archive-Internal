#pragma once
#include "../../../unitysdk.h"

namespace Spine::Unity::Playables { class SpineAnimationStateBehaviour; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E3E90)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x95E3F20)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x95E4030)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x95E4110)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateClip_TypeDefinitionIndex = 37937;

	class SpineAnimationStateClip : public Il2CppObject
	{
	public:
		::Spine::Unity::Playables::SpineAnimationStateBehaviour* template; // 0x18
		::UnityEngine::Timeline::TimelineClip* timelineClip; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_GET_DURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return (return (::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

	};
}

