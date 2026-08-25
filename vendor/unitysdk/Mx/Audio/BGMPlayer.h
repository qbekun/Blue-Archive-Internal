#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class BGMPlayInfo; }
namespace UnityEngine { class Coroutine; }
namespace MX::Audio { class EXSKillBGMController; }
namespace MX::Audio { class EXSkillBGMData; }
namespace UnityEngine { class AudioClip; }

#define MX_AUDIO_BGMPLAYER_GET_AUDIOSOURCES_OFFSET UNITYSDK_OFFSET(0x1D4C280)
#define MX_AUDIO_BGMPLAYER_SET_AUDIOSOURCES_OFFSET UNITYSDK_OFFSET(0x1D4C290)
#define MX_AUDIO_BGMPLAYER_GET_CURRENTBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D4C2A0)
#define MX_AUDIO_BGMPLAYER_GET_EXSKILLBGMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D4C2C0)
#define MX_AUDIO_BGMPLAYER_SET_EXSKILLBGMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D4C2D0)
#define MX_AUDIO_BGMPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D4C2E0)
#define MX_AUDIO_BGMPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D4C350)
#define MX_AUDIO_BGMPLAYER_ONAUDIOCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D4C3F0)
#define MX_AUDIO_BGMPLAYER_CO_CHANGEDDEVICE_OFFSET UNITYSDK_OFFSET(0x1D4C4B0)
#define MX_AUDIO_BGMPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D4C540)
#define MX_AUDIO_BGMPLAYER_INITEXSKILLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D4C750)
#define MX_AUDIO_BGMPLAYER_PLAYEXSKILLBGM_OFFSET UNITYSDK_OFFSET(0x1D4CA80)
#define MX_AUDIO_BGMPLAYER_STOPEXSKILLBGM_OFFSET UNITYSDK_OFFSET(0x1D4CD00)
#define MX_AUDIO_BGMPLAYER_PAUSEEXSKILLBGM_OFFSET UNITYSDK_OFFSET(0x1D4CEA0)
#define MX_AUDIO_BGMPLAYER_FORCESTOPEXSKILLBGM_OFFSET UNITYSDK_OFFSET(0x1D4D0A0)
#define MX_AUDIO_BGMPLAYER_CLEAREXSKILLBGMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1D4C800)
#define MX_AUDIO_BGMPLAYER_PLAYEXSKILLCUTINBGM_OFFSET UNITYSDK_OFFSET(0x1D4D1A0)
#define MX_AUDIO_BGMPLAYER_STOPEXSKILLCUTINBGM_OFFSET UNITYSDK_OFFSET(0x1D4D330)
#define MX_AUDIO_BGMPLAYER_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1D4D460)
#define MX_AUDIO_BGMPLAYER_CO_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1D4D4F0)
#define MX_AUDIO_BGMPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1D4D5A0)
#define MX_AUDIO_BGMPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1D4D6A0)
#define MX_AUDIO_BGMPLAYER_PLAYPRELOADEDMAINBGM_OFFSET UNITYSDK_OFFSET(0x1D4DD20)
#define MX_AUDIO_BGMPLAYER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D4DBE0)
#define MX_AUDIO_BGMPLAYER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D4C2B0)
#define MX_AUDIO_BGMPLAYER_CO_CHANGE_OFFSET UNITYSDK_OFFSET(0x1D4DC20)
#define MX_AUDIO_BGMPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1D4DD80)
#define MX_AUDIO_BGMPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1D4DE40)
#define MX_AUDIO_BGMPLAYER_CO_STOP_OFFSET UNITYSDK_OFFSET(0x1D4DE90)
#define MX_AUDIO_BGMPLAYER_CO_FADEINOUT_OFFSET UNITYSDK_OFFSET(0x1D4DF30)
#define MX_AUDIO_BGMPLAYER_STOPALLAUDIOSOURCES_OFFSET UNITYSDK_OFFSET(0x1D4D8D0)
#define MX_AUDIO_BGMPLAYER_CO_PLAY_OFFSET UNITYSDK_OFFSET(0x1D4DFE0)
#define MX_AUDIO_BGMPLAYER_TRYUSEPRELOADED_OFFSET UNITYSDK_OFFSET(0x1D4E0E0)
#define MX_AUDIO_BGMPLAYER_CLEARPRELOADED_OFFSET UNITYSDK_OFFSET(0x1D4E260)
#define MX_AUDIO_BGMPLAYER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1D4E380)
#define MX_AUDIO_BGMPLAYER_CLEARPRELOADED_OFFSET UNITYSDK_OFFSET(0x1D4E3A0)
#define MX_AUDIO_BGMPLAYER_GETREQUIREDAUDIOCLIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1D4E5D0)
#define MX_AUDIO_BGMPLAYER_GETORCREATEPRELOADAUDIOCLIPARRAY_OFFSET UNITYSDK_OFFSET(0x1D4E600)
#define MX_AUDIO_BGMPLAYER_LOADAUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x1D4E6F0)
#define MX_AUDIO_BGMPLAYER_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1D4E7B0)
#define MX_AUDIO_BGMPLAYER_SETVOLUMEFORPRODUCTION_OFFSET UNITYSDK_OFFSET(0x1D4E9B0)
#define MX_AUDIO_BGMPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EA00)

namespace MX::Audio
{
	inline static constexpr unsigned int BGMPlayer_TypeDefinitionIndex = 20185;

	class BGMPlayer : public ::ToyWebViewShared::Messages::Message
	{
	public:
		::Il2CppArray<::System::Object*>* _AudioSources_k__BackingField; // 0x20
		::MX::Data::BGMPlayInfo* lastBGMPlayInfo; // 0x28
		::UnityEngine::Coroutine* playBGMCoroutine; // 0x30
		::System::Int32 curIndex; // 0x38
		::MX::Data::BGMPlayInfo* preloadedMainBGM; // 0x40
		Il2CppObject* preloadedAudioClips; // 0x48
		::MX::Audio::EXSKillBGMController* _eXSkillBGMController_k__BackingField; // 0x50
		::UnityEngine::Coroutine* ChangeDeviceCoroutine; // 0x58
		::System::Single resumeStartTime; // 0x60

		::Il2CppArray<::System::Object*>* get_AudioSources()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_GET_AUDIOSOURCES_OFFSET))(nullptr);
		}

		::System::Void set_AudioSources(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_SET_AUDIOSOURCES_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* get_CurrentBGMPlayInfo()
		{
			return (return (::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_GET_CURRENTBGMPLAYINFO_OFFSET))(nullptr);
		}

		::MX::Audio::EXSKillBGMController* get_eXSkillBGMController()
		{
			return (return (::MX::Audio::EXSKillBGMController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_GET_EXSKILLBGMCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_eXSkillBGMController(::MX::Audio::EXSKillBGMController* arg)
		{
			((::System::Void(*)(::MX::Audio::EXSKillBGMController*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_SET_EXSKILLBGMCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnAudioConfigurationChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_ONAUDIOCONFIGURATIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_ChangedDevice()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CO_CHANGEDDEVICE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitEXSkillController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_INITEXSKILLCONTROLLER_OFFSET))(nullptr);
		}

		::MX::Audio::EXSkillBGMData* PlayEXSkillBGM(::UnityEngine::AudioClip* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::MX::Audio::EXSkillBGMData*(*)(::UnityEngine::AudioClip*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_PLAYEXSKILLBGM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StopExSkillBGM(::MX::Audio::EXSkillBGMData* arg)
		{
			((::System::Void(*)(::MX::Audio::EXSkillBGMData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_STOPEXSKILLBGM_OFFSET))(arg, nullptr);
		}

		::System::Void PauseExSkillBGM(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_PAUSEEXSKILLBGM_OFFSET))(arg, nullptr);
		}

		::System::Void ForceStopExSkillBGM()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_FORCESTOPEXSKILLBGM_OFFSET))(nullptr);
		}

		::System::Void ClearEXSkillBGMController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CLEAREXSKILLBGMCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void PlayEXSkillCutinBGM(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_PLAYEXSKILLCUTINBGM_OFFSET))(arg, nullptr);
		}

		::System::Void StopEXSkillCutinBGM()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_STOPEXSKILLCUTINBGM_OFFSET))(nullptr);
		}

		::System::Void Preload(::MX::Data::BGMPlayInfo* arg)
		{
			((::System::Void(*)(::MX::Data::BGMPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_PRELOAD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Preload(::MX::Data::BGMPlayInfo* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Data::BGMPlayInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CO_PRELOAD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Play(::System::Int64 arg, ::System::Single arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_PLAY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Play(::MX::Data::BGMPlayInfo* arg, ::System::Single arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::Data::BGMPlayInfo*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_PLAY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PlayPreloadedMainBGM()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_PLAYPRELOADEDMAINBGM_OFFSET))(nullptr);
		}

		::System::Boolean IsPlaying(::MX::Data::BGMPlayInfo* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::BGMPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Change(::MX::Data::BGMPlayInfo* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Data::BGMPlayInfo*, ::System::Single, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CO_CHANGE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Pause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_PAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_STOP_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Stop(::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CO_STOP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_FadeInOut(::System::Boolean arg, ::System::Single arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CO_FADEINOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StopAllAudioSources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_STOPALLAUDIOSOURCES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Play(::MX::Data::BGMPlayInfo* arg, ::System::Single arg, ::System::Single arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Data::BGMPlayInfo*, ::System::Single, ::System::Single, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CO_PLAY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryUsePreloaded(::MX::Data::BGMPlayInfo* arg, ::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::BGMPlayInfo*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_TRYUSEPRELOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearPreloaded(::System::Int64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CLEARPRELOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void ClearPreloaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_CLEARPRELOADED_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRequiredAudioClipCount(::MX::Data::BGMPlayInfo* arg)
		{
			return (return (::System::Int32(*)(::MX::Data::BGMPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_GETREQUIREDAUDIOCLIPCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOrCreatePreloadAudioClipArray(::MX::Data::BGMPlayInfo* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::MX::Data::BGMPlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_GETORCREATEPRELOADAUDIOCLIPARRAY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* LoadAudioClip(::MX::Data::BGMPlayInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Data::BGMPlayInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_LOADAUDIOCLIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetVolume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_SETVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void SetVolumeForProduction(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_SETVOLUMEFORPRODUCTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BGMPLAYER_.CTOR_OFFSET))(nullptr);
		}

	};
}

