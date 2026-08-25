#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class AudioSource; }
namespace MX::Audio { class AudioSourceObject; }
namespace MX::Audio { class AudioPlayInfo; }
namespace MX::Audio { class AudioSourceData; }
namespace MX::Audio { class AudioSourceObject&; }
namespace UnityEngine { class AnimationEvent; }

#define MX_AUDIO_AUDIOPLAYER_GET_DEFAULTLOADCOUNT_OFFSET UNITYSDK_OFFSET(0x1D47B20)
#define MX_AUDIO_AUDIOPLAYER_GET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D47B30)
#define MX_AUDIO_AUDIOPLAYER_SET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D47B40)
#define MX_AUDIO_AUDIOPLAYER_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1D47B50)
#define MX_AUDIO_AUDIOPLAYER_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1D47B60)
#define MX_AUDIO_AUDIOPLAYER_GET_AUDIOUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D47B70)
#define MX_AUDIO_AUDIOPLAYER_SET_AUDIOUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D47B80)
#define MX_AUDIO_AUDIOPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D47B90)
#define MX_AUDIO_AUDIOPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D47C00)
#define MX_AUDIO_AUDIOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D47E00)
#define MX_AUDIO_AUDIOPLAYER_LOADDEFAULTAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D47E80)
#define MX_AUDIO_AUDIOPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D47F10)
#define MX_AUDIO_AUDIOPLAYER_ADDSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D47FC0)
#define MX_AUDIO_AUDIOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1D48080)
#define MX_AUDIO_AUDIOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1D48200)
#define MX_AUDIO_AUDIOPLAYER_PLAYBYAUDIOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D48280)
#define MX_AUDIO_AUDIOPLAYER_PLAYBYAUDIODATA_OFFSET UNITYSDK_OFFSET(0x1D48100)
#define MX_AUDIO_AUDIOPLAYER_PLAYBYAUDIODATA_OFFSET UNITYSDK_OFFSET(0x1D485F0)
#define MX_AUDIO_AUDIOPLAYER_GETSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D484B0)
#define MX_AUDIO_AUDIOPLAYER_GETSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D48360)
#define MX_AUDIO_AUDIOPLAYER_GETSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D48840)
#define MX_AUDIO_AUDIOPLAYER_FINDSOURCEOBJECTONPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D48720)
#define MX_AUDIO_AUDIOPLAYER_PLAYAUDIO_OFFSET UNITYSDK_OFFSET(0x1D489C0)
#define MX_AUDIO_AUDIOPLAYER_PLAYAUDIOFOOTSTEP_OFFSET UNITYSDK_OFFSET(0x1D48B10)
#define MX_AUDIO_AUDIOPLAYER_PLAYAUDIOREVERSE_OFFSET UNITYSDK_OFFSET(0x1D48B70)
#define MX_AUDIO_AUDIOPLAYER_STOPAUDIO_OFFSET UNITYSDK_OFFSET(0x1D48CC0)
#define MX_AUDIO_AUDIOPLAYER_REGISTERTOEXTENSION_OFFSET UNITYSDK_OFFSET(0x1D48DD0)
#define MX_AUDIO_AUDIOPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D48FB0)
#define MX_AUDIO_AUDIOPLAYER__ONENABLE_G__PLAYONACTIVATED|17_0_OFFSET UNITYSDK_OFFSET(0x1D47D80)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioPlayer_TypeDefinitionIndex = 20159;

	class AudioPlayer : public <<InitAsync>g__co_Init|0>d
	{
	public:
		::System::Boolean PlayOnEnable; // 0x40
		Il2CppObject* AudioSourceDatas; // 0x48
		EntityVisual* _EntityVisual_k__BackingField; // 0x50
		::UnityEngine::Animator* _Animator_k__BackingField; // 0x58
		AudioUIController* _audioUIController_k__BackingField; // 0x60

		::System::Int32 get_DefaultLoadCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_GET_DEFAULTLOADCOUNT_OFFSET))(nullptr);
		}

		EntityVisual* get_EntityVisual()
		{
			return (return (EntityVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_GET_ENTITYVISUAL_OFFSET))(nullptr);
		}

		::System::Void set_EntityVisual(EntityVisual* arg)
		{
			((::System::Void(*)(EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_SET_ENTITYVISUAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return (return (::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void set_Animator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		AudioUIController* get_audioUIController()
		{
			return (return (AudioUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_GET_AUDIOUICONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_audioUIController(AudioUIController* arg)
		{
			((::System::Void(*)(AudioUIController*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_SET_AUDIOUICONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_ONDESTROY_OFFSET))(nullptr);
		}

		::UnityEngine::AudioSource* LoadDefaultAudioSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_LOADDEFAULTAUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_INITIALIZE_OFFSET))(nullptr);
		}

		::MX::Audio::AudioSourceObject* AddSourceObject(::System::Boolean arg)
		{
			return (return (::MX::Audio::AudioSourceObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_ADDSOURCEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_PLAY_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void PlayByAudioPlayInfo(::MX::Audio::AudioPlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_PLAYBYAUDIOPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void PlayByAudioData(::MX::Audio::AudioSourceData* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_PLAYBYAUDIODATA_OFFSET))(arg, nullptr);
		}

		::System::Void PlayByAudioData(::MX::Audio::AudioSourceData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_PLAYBYAUDIODATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSourceObject(::MX::Audio::AudioSourceData* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_GETSOURCEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSourceObject(::MX::Audio::AudioPlayInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioPlayInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_GETSOURCEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSourceObject(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_GETSOURCEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FindSourceObjectOnProgress(::System::Int32 arg, ::MX::Audio::AudioSourceObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::MX::Audio::AudioSourceObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_FINDSOURCEOBJECTONPROGRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PlayAudio(::UnityEngine::AnimationEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_PLAYAUDIO_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAudioFootstep(::UnityEngine::AnimationEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_PLAYAUDIOFOOTSTEP_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAudioReverse(::UnityEngine::AnimationEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_PLAYAUDIOREVERSE_OFFSET))(arg, nullptr);
		}

		::System::Void StopAudio(::UnityEngine::AnimationEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_STOPAUDIO_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterToExtension(::MX::Audio::AudioSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_REGISTERTOEXTENSION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnEnable_g__PlayOnActivated|17_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYER__ONENABLE_G__PLAYONACTIVATED|17_0_OFFSET))(nullptr);
		}

	};
}

