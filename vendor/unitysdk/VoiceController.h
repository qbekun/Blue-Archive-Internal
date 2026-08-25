#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace UnityEngine::Playables { class Playable; }
namespace MX::Audio { class VoicePlayInfoSimple; }
namespace UnityEngine::Playables { class FrameData; }

#define VOICECONTROLLER_SET_TRACKAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x2050C30)
#define VOICECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2050C40)
#define VOICECONTROLLER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x2050C50)
#define VOICECONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2050BE0)
#define VOICECONTROLLER__ONBEHAVIOURPLAY_B__7_0_OFFSET UNITYSDK_OFFSET(0x2050D20)
#define VOICECONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x2050E50)
#define VOICECONTROLLER_GET_TRACKAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x2050F40)

	inline static constexpr unsigned int VoiceController_TypeDefinitionIndex = 3316;

	class VoiceController : public Il2CppObject
	{
	public:
		::UnityEngine::AudioSource* _TrackAudioSource_k__BackingField; // 0x10
		::System::String* voiceId; // 0x18
		::System::Single volume; // 0x20

		::System::Void set_TrackAudioSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + VOICECONTROLLER_SET_TRACKAUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOICECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + VOICECONTROLLER_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VOICECONTROLLER_INITIALIZE_OFFSET))(str, arg, nullptr);
		}

		::System::Void _OnBehaviourPlay_b__7_0(::MX::Audio::VoicePlayInfoSimple* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfoSimple*, ::PVOID))((::PBYTE)hIl2Cpp + VOICECONTROLLER__ONBEHAVIOURPLAY_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + VOICECONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::AudioSource* get_TrackAudioSource()
		{
			return ((::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + VOICECONTROLLER_GET_TRACKAUDIOSOURCE_OFFSET))(nullptr);
		}

	};

