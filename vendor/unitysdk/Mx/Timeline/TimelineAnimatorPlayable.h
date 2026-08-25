#pragma once
#include "../../unitysdk.h"

class SingleUnityLayer;
namespace UnityEngine { class Motion; }
namespace UnityEngine { class AnimationClip; }
namespace Mx::Timeline { class TimelineAnimatorBehavior; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace Mx::Timeline { class TimelineAnimatorTrack; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define MX_TIMELINE_TIMELINEANIMATORPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE20C60)
#define MX_TIMELINE_TIMELINEANIMATORPLAYABLE_SET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xE20DF0)
#define MX_TIMELINE_TIMELINEANIMATORPLAYABLE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE20E00)
#define MX_TIMELINE_TIMELINEANIMATORPLAYABLE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xE20EF0)
#define MX_TIMELINE_TIMELINEANIMATORPLAYABLE_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE20F00)
#define MX_TIMELINE_TIMELINEANIMATORPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE20F10)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineAnimatorPlayable_TypeDefinitionIndex = 10359;

	class TimelineAnimatorPlayable : public Il2CppObject
	{
	public:
		SingleUnityLayer* targetLayer; // 0x18
		::UnityEngine::Motion* State; // 0x20
		::UnityEngine::Motion* StateRandom; // 0x28
		::UnityEngine::AnimationClip* OverrideClip; // 0x30
		::System::Single TransitionLength; // 0x38
		::System::Boolean BackToGamePlayAnimation; // 0x3C
		::Mx::Timeline::TimelineAnimatorBehavior* _behavior_k__BackingField; // 0x40

		::System::Void Initialize(::UnityEngine::Playables::PlayableDirector* arg, ::Mx::Timeline::TimelineAnimatorTrack* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::Mx::Timeline::TimelineAnimatorTrack*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORPLAYABLE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_behavior(::Mx::Timeline::TimelineAnimatorBehavior* arg)
		{
			((::System::Void(*)(::Mx::Timeline::TimelineAnimatorBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORPLAYABLE_SET_BEHAVIOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORPLAYABLE_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::Mx::Timeline::TimelineAnimatorBehavior* get_behavior()
		{
			return ((::Mx::Timeline::TimelineAnimatorBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORPLAYABLE_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORPLAYABLE_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

