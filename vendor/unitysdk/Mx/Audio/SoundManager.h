#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace FlatData { class CharacterVoiceOverridePriority; }
namespace UnityEngine::Audio { class AudioMixer; }
namespace UnityEngine::Audio { class AudioMixerGroup; }
namespace UnityEngine::Audio { class AudioMixerSnapshot; }
namespace UnityEngine { class AudioClip; }
namespace MX::Audio { class VoicePlayInfoSimple; }
namespace UnityEngine { class Coroutine; }
namespace MX::Audio { class AudioSourceData; }
namespace UnityEngine { class AnimationCurve; }

#define MX_AUDIO_SOUNDMANAGER_GET_DEFAULTUISOURCEORIGIN_OFFSET UNITYSDK_OFFSET(0x1D524E0)
#define MX_AUDIO_SOUNDMANAGER_SET_DEFAULTUISOURCEORIGIN_OFFSET UNITYSDK_OFFSET(0x1D524F0)
#define MX_AUDIO_SOUNDMANAGER_GET_VOICEPLAYINGSOURCE_OFFSET UNITYSDK_OFFSET(0x1D52500)
#define MX_AUDIO_SOUNDMANAGER_SET_VOICEPLAYINGSOURCE_OFFSET UNITYSDK_OFFSET(0x1D52510)
#define MX_AUDIO_SOUNDMANAGER_GET_DEFAULTSFXSOURCE_OFFSET UNITYSDK_OFFSET(0x1D52520)
#define MX_AUDIO_SOUNDMANAGER_SET_DEFAULTSFXSOURCE_OFFSET UNITYSDK_OFFSET(0x1D52530)
#define MX_AUDIO_SOUNDMANAGER_GET_DEFAULTVOICESOURCE_OFFSET UNITYSDK_OFFSET(0x1D52540)
#define MX_AUDIO_SOUNDMANAGER_SET_DEFAULTVOICESOURCE_OFFSET UNITYSDK_OFFSET(0x1D52550)
#define MX_AUDIO_SOUNDMANAGER_GET_DEFAULTBGMSOURCE_OFFSET UNITYSDK_OFFSET(0x1D52560)
#define MX_AUDIO_SOUNDMANAGER_SET_DEFAULTBGMSOURCE_OFFSET UNITYSDK_OFFSET(0x1D52570)
#define MX_AUDIO_SOUNDMANAGER_GET_DEFAULTAMBIENCESOURCE_OFFSET UNITYSDK_OFFSET(0x1D52580)
#define MX_AUDIO_SOUNDMANAGER_SET_DEFAULTAMBIENCESOURCE_OFFSET UNITYSDK_OFFSET(0x1D52590)
#define MX_AUDIO_SOUNDMANAGER_GET_DEFAULTDIALOGAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D525A0)
#define MX_AUDIO_SOUNDMANAGER_SET_DEFAULTDIALOGAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D525B0)
#define MX_AUDIO_SOUNDMANAGER_GET_DEFAULTOPERATORAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D525C0)
#define MX_AUDIO_SOUNDMANAGER_SET_DEFAULTOPERATORAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D525D0)
#define MX_AUDIO_SOUNDMANAGER_GET_CURRENTOPERATORVOICEOVERRIDEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D525E0)
#define MX_AUDIO_SOUNDMANAGER_SET_CURRENTOPERATORVOICEOVERRIDEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D525F0)
#define MX_AUDIO_SOUNDMANAGER_DEFAULTAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D52600)
#define MX_AUDIO_SOUNDMANAGER_GET_MIXER_OFFSET UNITYSDK_OFFSET(0x1D52770)
#define MX_AUDIO_SOUNDMANAGER_SET_MIXER_OFFSET UNITYSDK_OFFSET(0x1D52780)
#define MX_AUDIO_SOUNDMANAGER_GET_CURRENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D52790)
#define MX_AUDIO_SOUNDMANAGER_SET_CURRENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D527A0)
#define MX_AUDIO_SOUNDMANAGER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D527C0)
#define MX_AUDIO_SOUNDMANAGER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D527D0)
#define MX_AUDIO_SOUNDMANAGER_GET_INITIALPOOLCOUNT_OFFSET UNITYSDK_OFFSET(0x1D527E0)
#define MX_AUDIO_SOUNDMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D52830)
#define MX_AUDIO_SOUNDMANAGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1D528A0)
#define MX_AUDIO_SOUNDMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1D529E0)
#define MX_AUDIO_SOUNDMANAGER_SETBACKGROUNDSOUND_OFFSET UNITYSDK_OFFSET(0x1D528B0)
#define MX_AUDIO_SOUNDMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D52AF0)
#define MX_AUDIO_SOUNDMANAGER_ONAUDIOCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D52B80)
#define MX_AUDIO_SOUNDMANAGER_COINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D52C60)
#define MX_AUDIO_SOUNDMANAGER_APPLYUSERVOLUMES_OFFSET UNITYSDK_OFFSET(0x1D52CD0)
#define MX_AUDIO_SOUNDMANAGER_REVERTTODEFAULTUISOURCEORIGIN_OFFSET UNITYSDK_OFFSET(0x1D53060)
#define MX_AUDIO_SOUNDMANAGER_PLAYUISOUND_OFFSET UNITYSDK_OFFSET(0x1D53650)
#define MX_AUDIO_SOUNDMANAGER_PLAY3DSOUND_OFFSET UNITYSDK_OFFSET(0x1D537C0)
#define MX_AUDIO_SOUNDMANAGER_PLAYSCENARIOSOUND_OFFSET UNITYSDK_OFFSET(0x1D53840)
#define MX_AUDIO_SOUNDMANAGER_STOPSCENARIOSOUNDS_OFFSET UNITYSDK_OFFSET(0x1D53960)
#define MX_AUDIO_SOUNDMANAGER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1D50FB0)
#define MX_AUDIO_SOUNDMANAGER_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1D50DF0)
#define MX_AUDIO_SOUNDMANAGER_CALCDECIBEL_OFFSET UNITYSDK_OFFSET(0x1D4E960)
#define MX_AUDIO_SOUNDMANAGER_CALCDECIBELTORATIO_OFFSET UNITYSDK_OFFSET(0x1D53B70)
#define MX_AUDIO_SOUNDMANAGER_GETMIXERVOLUMERATIO_OFFSET UNITYSDK_OFFSET(0x1D53A70)
#define MX_AUDIO_SOUNDMANAGER_GETVOLUMERATIO_OFFSET UNITYSDK_OFFSET(0x1D53BB0)
#define MX_AUDIO_SOUNDMANAGER_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x1D43650)
#define MX_AUDIO_SOUNDMANAGER_PLAYOPERATORVOICE_OFFSET UNITYSDK_OFFSET(0x1D53EE0)
#define MX_AUDIO_SOUNDMANAGER_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x1D53D60)
#define MX_AUDIO_SOUNDMANAGER_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x1D3FB10)
#define MX_AUDIO_SOUNDMANAGER_PLAYOPERATORVOICE_OFFSET UNITYSDK_OFFSET(0x1D54050)
#define MX_AUDIO_SOUNDMANAGER_CHECKCHARACTERVOICEPLAYING_OFFSET UNITYSDK_OFFSET(0x1D54320)
#define MX_AUDIO_SOUNDMANAGER_COPLAYVOICEANDWAIT_OFFSET UNITYSDK_OFFSET(0x1D54C50)
#define MX_AUDIO_SOUNDMANAGER_STOPVOICE_OFFSET UNITYSDK_OFFSET(0x1D53F00)
#define MX_AUDIO_SOUNDMANAGER_FADEOUTOPERATORVOICE_OFFSET UNITYSDK_OFFSET(0x1D53FD0)
#define MX_AUDIO_SOUNDMANAGER_COFADEOUTOPERATORVOICE_OFFSET UNITYSDK_OFFSET(0x1D54BE0)
#define MX_AUDIO_SOUNDMANAGER_SETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D54CE0)
#define MX_AUDIO_SOUNDMANAGER_SETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D54DF0)
#define MX_AUDIO_SOUNDMANAGER_TRANSITIONTOCURRENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D54E90)
#define MX_AUDIO_SOUNDMANAGER_PLAYBYAUDIODATA_OFFSET UNITYSDK_OFFSET(0x1D54EC0)
#define MX_AUDIO_SOUNDMANAGER_COPLAYBYAUDIODATA_OFFSET UNITYSDK_OFFSET(0x1D54FE0)
#define MX_AUDIO_SOUNDMANAGER_PLAYSKILLCUTINVOICE_OFFSET UNITYSDK_OFFSET(0x1D55090)
#define MX_AUDIO_SOUNDMANAGER_COPLAYSKILLCUTINVOICE_OFFSET UNITYSDK_OFFSET(0x1D550C0)
#define MX_AUDIO_SOUNDMANAGER_COPLAYDEFAULTUISOURCE_OFFSET UNITYSDK_OFFSET(0x1D55190)
#define MX_AUDIO_SOUNDMANAGER_COCHANGEVOLUME_OFFSET UNITYSDK_OFFSET(0x1D4FC80)
#define MX_AUDIO_SOUNDMANAGER_COCHANGEVOLUME_OFFSET UNITYSDK_OFFSET(0x1D55210)
#define MX_AUDIO_SOUNDMANAGER_CROSSFADEVOLUME_OFFSET UNITYSDK_OFFSET(0x1D552C0)
#define MX_AUDIO_SOUNDMANAGER_COCROSSFADEVOLUME_OFFSET UNITYSDK_OFFSET(0x1D552F0)
#define MX_AUDIO_SOUNDMANAGER_INITIALIZEPOOL_OFFSET UNITYSDK_OFFSET(0x1D553A0)
#define MX_AUDIO_SOUNDMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D55430)
#define MX_AUDIO_SOUNDMANAGER__PLAYUISOUND_B__64_0_OFFSET UNITYSDK_OFFSET(0x1D55570)

namespace MX::Audio
{
	inline static constexpr unsigned int SoundManager_TypeDefinitionIndex = 20208;

	class SoundManager : public ::ToyWebViewShared::Messages::RequestGoForward
	{
	public:
		::UnityEngine::AudioSource* _DefaultUISourceOrigin_k__BackingField; // 0x20
		Il2CppObject* defaultUISourcePool; // 0x28
		::System::Single SnapshotTransitionTime; // 0x30
		Il2CppObject* _VoicePlayingSource_k__BackingField; // 0x38
		::UnityEngine::AudioSource* _DefaultSFXSource_k__BackingField; // 0x40
		::UnityEngine::AudioSource* _DefaultVoiceSource_k__BackingField; // 0x48
		::UnityEngine::AudioSource* _DefaultBGMSource_k__BackingField; // 0x50
		::UnityEngine::AudioSource* _DefaultAmbienceSource_k__BackingField; // 0x58
		::UnityEngine::AudioSource* _DefaultDialogAudioSource_k__BackingField; // 0x60
		::UnityEngine::AudioSource* _DefaultOperatorAudioSource_k__BackingField; // 0x68
		::FlatData::CharacterVoiceOverridePriority* _CurrentOperatorVoiceOverridePriority_k__BackingField; // 0x70
		::UnityEngine::Audio::AudioMixer* _Mixer_k__BackingField; // 0x78
		::UnityEngine::Audio::AudioMixerGroup* defaultUISfxMixerGroup; // 0x80
		::UnityEngine::Audio::AudioMixerGroup* scenarioSfxMixerGroup; // 0x88
		::UnityEngine::Audio::AudioMixerSnapshot* _CurrentSnapShot_k__BackingField; // 0x90
		::System::Boolean _IsInitialized_k__BackingField; // 0x98
		Il2CppObject* playScenarioSources; // 0xA0

		::UnityEngine::AudioSource* get_DefaultUISourceOrigin()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_DEFAULTUISOURCEORIGIN_OFFSET))(nullptr);
		}

		::System::Void set_DefaultUISourceOrigin(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_DEFAULTUISOURCEORIGIN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VoicePlayingSource()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_VOICEPLAYINGSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_VoicePlayingSource(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_VOICEPLAYINGSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_DefaultSFXSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_DEFAULTSFXSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultSFXSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_DEFAULTSFXSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_DefaultVoiceSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_DEFAULTVOICESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultVoiceSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_DEFAULTVOICESOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_DefaultBGMSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_DEFAULTBGMSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultBGMSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_DEFAULTBGMSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_DefaultAmbienceSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_DEFAULTAMBIENCESOURCE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultAmbienceSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_DEFAULTAMBIENCESOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_DefaultDialogAudioSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_DEFAULTDIALOGAUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultDialogAudioSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_DEFAULTDIALOGAUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_DefaultOperatorAudioSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_DEFAULTOPERATORAUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultOperatorAudioSource(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_DEFAULTOPERATORAUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::FlatData::CharacterVoiceOverridePriority* get_CurrentOperatorVoiceOverridePriority()
		{
			return (return (::FlatData::CharacterVoiceOverridePriority*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_CURRENTOPERATORVOICEOVERRIDEPRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_CurrentOperatorVoiceOverridePriority(::FlatData::CharacterVoiceOverridePriority* arg)
		{
			((::System::Void(*)(::FlatData::CharacterVoiceOverridePriority*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_CURRENTOPERATORVOICEOVERRIDEPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean DefaultAudioSource(::UnityEngine::AudioSource* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_DEFAULTAUDIOSOURCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Audio::AudioMixer* get_Mixer()
		{
			return (return (::UnityEngine::Audio::AudioMixer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_MIXER_OFFSET))(nullptr);
		}

		::System::Void set_Mixer(::UnityEngine::Audio::AudioMixer* arg)
		{
			((::System::Void(*)(::UnityEngine::Audio::AudioMixer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_MIXER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Audio::AudioMixerSnapshot* get_CurrentSnapShot()
		{
			return (return (::UnityEngine::Audio::AudioMixerSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_CURRENTSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSnapShot(::UnityEngine::Audio::AudioMixerSnapshot* arg)
		{
			((::System::Void(*)(::UnityEngine::Audio::AudioMixerSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_CURRENTSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_IsInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InitialPoolCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GET_INITIALPOOLCOUNT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void SetBackgroundSound(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SETBACKGROUNDSOUND_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnAudioConfigurationChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_ONAUDIOCONFIGURATIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoInitialize()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void ApplyUserVolumes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_APPLYUSERVOLUMES_OFFSET))(nullptr);
		}

		::System::Void RevertToDefaultUISourceOrigin(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_REVERTTODEFAULTUISOURCEORIGIN_OFFSET))(arg, nullptr);
		}

		::System::Void PlayUISound(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYUISOUND_OFFSET))(str, nullptr);
		}

		::System::Void Play3DSound(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAY3DSOUND_OFFSET))(arg, nullptr);
		}

		::System::Void PlayScenarioSound(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYSCENARIOSOUND_OFFSET))(str, arg, nullptr);
		}

		::System::Void StopScenarioSounds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_STOPSCENARIOSOUNDS_OFFSET))(nullptr);
		}

		::System::Void SetVolume(::System::String* str, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SETVOLUME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddVolume(::System::String* str, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_ADDVOLUME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Single CalcDecibel(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_CALCDECIBEL_OFFSET))(arg, nullptr);
		}

		::System::Single CalcDecibelToRatio(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_CALCDECIBELTORATIO_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMixerVolumeRatio(::System::String* str, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GETMIXERVOLUMERATIO_OFFSET))(str, arg, nullptr);
		}

		::System::Single GetVolumeRatio(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_GETVOLUMERATIO_OFFSET))(str, nullptr);
		}

		::System::Single PlayVoice(::UnityEngine::AudioClip* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::AudioClip*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYVOICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single PlayOperatorVoice(::UnityEngine::AudioClip* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::AudioClip*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYOPERATORVOICE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single PlayVoice(::UnityEngine::AudioSource* arg, ::UnityEngine::AudioClip* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioClip*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYVOICE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single PlayVoice(::MX::Audio::VoicePlayInfoSimple* arg)
		{
			return (return (::System::Single(*)(::MX::Audio::VoicePlayInfoSimple*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYVOICE_OFFSET))(arg, nullptr);
		}

		::System::Single PlayOperatorVoice(::MX::Audio::VoicePlayInfoSimple* arg, ::FlatData::CharacterVoiceOverridePriority* arg)
		{
			return (return (::System::Single(*)(::MX::Audio::VoicePlayInfoSimple*, ::FlatData::CharacterVoiceOverridePriority*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYOPERATORVOICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckCharacterVoicePlaying(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_CHECKCHARACTERVOICEPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* coPlayVoiceAndWait(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COPLAYVOICEANDWAIT_OFFSET))(str, arg, nullptr);
		}

		::System::Void StopVoice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_STOPVOICE_OFFSET))(arg, nullptr);
		}

		::System::Void FadeOutOperatorVoice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_FADEOUTOPERATORVOICE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFadeOutOperatorVoice()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COFADEOUTOPERATORVOICE_OFFSET))(nullptr);
		}

		::System::Void SetSnapShot(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SETSNAPSHOT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetSnapShot(::UnityEngine::Audio::AudioMixerSnapshot* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Audio::AudioMixerSnapshot*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_SETSNAPSHOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TransitionToCurrentSnapShot(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_TRANSITIONTOCURRENTSNAPSHOT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* PlayByAudioData(::MX::Audio::AudioSourceData* arg, ::System::Single arg, ::System::Action* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::MX::Audio::AudioSourceData*, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYBYAUDIODATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayByAudioData(::MX::Audio::AudioSourceData* arg, ::System::Single arg, ::System::Action* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Audio::AudioSourceData*, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COPLAYBYAUDIODATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Coroutine* PlaySkillCutinVoice(::MX::Audio::AudioSourceData* arg, ::System::Single arg, ::UnityEngine::AudioClip* arg, ::System::Action* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::MX::Audio::AudioSourceData*, ::System::Single, ::UnityEngine::AudioClip*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_PLAYSKILLCUTINVOICE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlaySkillCutinVoice(::MX::Audio::AudioSourceData* arg, ::System::Single arg, ::UnityEngine::AudioClip* arg, ::System::Action* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Audio::AudioSourceData*, ::System::Single, ::UnityEngine::AudioClip*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COPLAYSKILLCUTINVOICE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayDefaultUISource(::UnityEngine::AudioSource* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COPLAYDEFAULTUISOURCE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoChangeVolume(::UnityEngine::AudioSource* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::AudioSource*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COCHANGEVOLUME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoChangeVolume(::UnityEngine::AudioSource* arg, ::System::Single arg, Il2CppObject* arg, ::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::AudioSource*, ::System::Single, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COCHANGEVOLUME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Coroutine* CrossFadeVolume(::UnityEngine::AudioSource* arg, ::UnityEngine::AudioSource* arg, ::System::Single arg, ::UnityEngine::AnimationCurve* arg)
		{
			return (return (::UnityEngine::Coroutine*(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioSource*, ::System::Single, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_CROSSFADEVOLUME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CoCrossFadeVolume(::UnityEngine::AudioSource* arg, ::UnityEngine::AudioSource* arg, ::System::Single arg, ::UnityEngine::AnimationCurve* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::AudioSource*, ::UnityEngine::AudioSource*, ::System::Single, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_COCROSSFADEVOLUME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitializePool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_INITIALIZEPOOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _PlayUISound_b__64_0(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SOUNDMANAGER__PLAYUISOUND_B__64_0_OFFSET))(arg, nullptr);
		}

	};
}

