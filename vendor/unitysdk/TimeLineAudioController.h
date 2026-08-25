#pragma once
#include "unitysdk.h"

class AudioType;
namespace MX::Audio { class AudioSourceData; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINEAUDIOCONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x20495C0)
#define TIMELINEAUDIOCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20496D0)

	inline static constexpr unsigned int TimeLineAudioController_TypeDefinitionIndex = 3280;

	class TimeLineAudioController : public Il2CppObject
	{
	public:
		::System::Boolean PlaySoundManager; // 0x18
		::System::Boolean SyncEndTimeByClipLength; // 0x19
		AudioType* Audio; // 0x1C
		::System::String* VoiceId; // 0x20
		::MX::Audio::AudioSourceData* AudioData; // 0x28

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEAUDIOCONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEAUDIOCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

