#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MX_TIMELINE_TIMELINEAIMIKTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE1BF10)
#define MX_TIMELINE_TIMELINEAIMIKTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1C070)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineAimIKTrack_TypeDefinitionIndex = 10348;

	class TimelineAimIKTrack : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2, ::UnityEngine::Timeline::TimelineClip* arg3)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKTRACK_CREATEPLAYABLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEAIMIKTRACK_.CTOR_OFFSET))(nullptr);
		}

	};
}

