#pragma once
#include "unitysdk.h"

class AudioMixerSnapshotInfo;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINEAUDIOMIXERSNAPSHOTSBATTLECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2049E90)
#define TIMELINEAUDIOMIXERSNAPSHOTSBATTLECONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2049EA0)

	inline static constexpr unsigned int TimeLineAudioMixerSnapshotsBattleController_TypeDefinitionIndex = 3282;

	class TimeLineAudioMixerSnapshotsBattleController : public Il2CppObject
	{
	public:
		AudioMixerSnapshotInfo* normalSnapshot; // 0x18
		AudioMixerSnapshotInfo* raidSnapshot; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEAUDIOMIXERSNAPSHOTSBATTLECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEAUDIOMIXERSNAPSHOTSBATTLECONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

