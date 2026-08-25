#pragma once
#include "../../unitysdk.h"

namespace Mx::Timeline { class TimelineEntityIndex; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MX_TIMELINE_TIMELINEANIMATORTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xE20F80)
#define MX_TIMELINE_TIMELINEANIMATORTRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE21220)
#define MX_TIMELINE_TIMELINEANIMATORTRACK_SETOVERRIDECLIP_OFFSET UNITYSDK_OFFSET(0xE1D380)
#define MX_TIMELINE_TIMELINEANIMATORTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE21280)
#define MX_TIMELINE_TIMELINEANIMATORTRACK_SETRANDOMANIMATION_OFFSET UNITYSDK_OFFSET(0xE1D2B0)

namespace Mx::Timeline
{
	inline static constexpr unsigned int TimelineAnimatorTrack_TypeDefinitionIndex = 10361;

	class TimelineAnimatorTrack : public Il2CppObject
	{
	public:
		::Mx::Timeline::TimelineEntityIndex* EntityIndex; // 0xA0
		::System::Boolean isRandomAnimation; // 0xA4

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORTRACK_GATHERPROPERTIES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORTRACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetOverrideClip(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORTRACK_SETOVERRIDECLIP_OFFSET))(str, str2, nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2, ::UnityEngine::Timeline::TimelineClip* arg3)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORTRACK_CREATEPLAYABLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetRandomAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_TIMELINEANIMATORTRACK_SETRANDOMANIMATION_OFFSET))(arg, nullptr);
		}

	};
}

