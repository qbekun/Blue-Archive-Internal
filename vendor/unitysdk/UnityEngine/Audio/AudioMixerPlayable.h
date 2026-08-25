#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Audio { class AudioMixerPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph&; }
namespace UnityEngine::Playables { class PlayableHandle&; }

#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DED80)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1DEDD0)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DEEC0)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1DEFF0)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1DF000)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1DF040)
#define UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEAUDIOMIXERPLAYABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DEFA0)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioMixerPlayable_TypeDefinitionIndex = 37479;

	class AudioMixerPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10

		::UnityEngine::Audio::AudioMixerPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Audio::AudioMixerPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Audio::AudioMixerPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Audio::AudioMixerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Audio::AudioMixerPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Audio::AudioMixerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateAudioMixerPlayableInternal(::UnityEngine::Playables::PlayableGraph&* arg, ::System::Boolean arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOMIXERPLAYABLE_CREATEAUDIOMIXERPLAYABLEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

