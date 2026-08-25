#pragma once
#include "unitysdk.h"

class AudioMixerSnapshotInfo;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINEAUDIOMIXERSNAPSHOTSCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204A300)
#define TIMELINEAUDIOMIXERSNAPSHOTSCONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x204A310)

	inline static constexpr unsigned int TimeLineAudioMixerSnapshotsController_TypeDefinitionIndex = 3284;

	class TimeLineAudioMixerSnapshotsController : public Il2CppObject
	{
	public:
		AudioMixerSnapshotInfo* AudioMixerSnapshot; // 0x18
		::System::Boolean DefaultSnapShot; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEAUDIOMIXERSNAPSHOTSCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEAUDIOMIXERSNAPSHOTSCONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

