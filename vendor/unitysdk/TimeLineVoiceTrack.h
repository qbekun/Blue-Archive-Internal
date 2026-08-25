#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define TIMELINEVOICETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2050F50)
#define TIMELINEVOICETRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x20510E0)

	inline static constexpr unsigned int TimeLineVoiceTrack_TypeDefinitionIndex = 3318;

	class TimeLineVoiceTrack : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2, ::UnityEngine::Timeline::TimelineClip* arg3)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEVOICETRACK_CREATEPLAYABLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEVOICETRACK_.CTOR_OFFSET))(nullptr);
		}

	};

