#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Audio { class AudioClipPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class AudioClip; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1DDC10)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1DDD10)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DDDF0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1DDF20)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1DDF30)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0xA1DDF70)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1DE000)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUME_OFFSET UNITYSDK_OFFSET(0xA1DE080)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPAN_OFFSET UNITYSDK_OFFSET(0xA1DE1B0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLEND_OFFSET UNITYSDK_OFFSET(0xA1DE2F0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SEEK_OFFSET UNITYSDK_OFFSET(0xA1DE420)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUMEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DE160)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPANINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DE2A0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLENDINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DE3D0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTARTDELAYINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DE5F0)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETPAUSEDELAYINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DE640)
#define UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_INTERNALCREATEAUDIOCLIPPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1DDED0)

namespace UnityEngine::Audio
{
	inline static constexpr unsigned int AudioClipPlayable_TypeDefinitionIndex = 37475;

	class AudioClipPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10

		::UnityEngine::Audio::AudioClipPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::AudioClip* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Audio::AudioClipPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::AudioClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::AudioClip* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::AudioClip*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Audio::AudioClipPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Audio::AudioClipPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Audio::AudioClipPlayable* op_Explicit(::UnityEngine::Playables::Playable* arg)
		{
			return (return (::UnityEngine::Audio::AudioClipPlayable*(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Audio::AudioClipPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Audio::AudioClipPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void SetVolume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void SetStereoPan(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPAN_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpatialBlend(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLEND_OFFSET))(arg, nullptr);
		}

		::System::Void Seek(::System::Double arg, ::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SEEK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetVolumeInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETVOLUMEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetStereoPanInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTEREOPANINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSpatialBlendInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSPATIALBLENDINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetStartDelayInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETSTARTDELAYINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPauseDelayInternal(::UnityEngine::Playables::PlayableHandle&* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_SETPAUSEDELAYINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean InternalCreateAudioClipPlayable(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::AudioClip* arg, ::System::Boolean arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::AudioClip*, ::System::Boolean, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIO_AUDIOCLIPPLAYABLE_INTERNALCREATEAUDIOCLIPPLAYABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

