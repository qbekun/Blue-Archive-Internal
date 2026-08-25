#pragma once
#include "../../unitysdk.h"

namespace FlatData { class AimIKType; }
namespace Mx::Timeline { class TimelineAimIKBehavior; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MX_TIMELINE_TIMELINEAIMIKPLAYABLE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE1BD20)
#define MX_TIMELINE_TIMELINEAIMIKPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1BEE0)
#define MX_TIMELINE_TIMELINEAIMIKPLAYABLE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xE1BEF0)
#define MX_TIMELINE_TIMELINEAIMIKPLAYABLE_SET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xE1BF00)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineAimIKPlayable_TypeDefinitionIndex = 10347;

	class TimelineAimIKPlayable : public Il2CppObject
	{
	public:
		::FlatData::AimIKType* aimIKType; // 0x18
		::System::Boolean keepChange; // 0x1C
		::Mx::Timeline::TimelineAimIKBehavior* _Behavior_k__BackingField; // 0x20

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKPLAYABLE_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::Mx::Timeline::TimelineAimIKBehavior* get_Behavior()
		{
			return ((::Mx::Timeline::TimelineAimIKBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKPLAYABLE_GET_BEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_Behavior(::Mx::Timeline::TimelineAimIKBehavior* arg)
		{
			((::System::Void(*)(::Mx::Timeline::TimelineAimIKBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKPLAYABLE_SET_BEHAVIOR_OFFSET))(arg, nullptr);
		}

	};
}

