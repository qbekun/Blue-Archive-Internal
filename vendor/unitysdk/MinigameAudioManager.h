#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class DeviceOption; }
class PlayOptions;
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AudioClip; }
namespace E7::Native { class NativeAudioPointer; }
namespace MX::MinigameRhythm { class MinigameSFXType; }

#define MINIGAMEAUDIOMANAGER_GETCURRENTMUSICTIMEFROMAUDIO_OFFSET UNITYSDK_OFFSET(0xD13D60)
#define MINIGAMEAUDIOMANAGER_INITIALPLAYAUDIO_OFFSET UNITYSDK_OFFSET(0xD13D80)
#define MINIGAMEAUDIOMANAGER_GETAUDIOLENGTH_OFFSET UNITYSDK_OFFSET(0xD13F00)
#define MINIGAMEAUDIOMANAGER_SETPLAYOPTIONS_OFFSET UNITYSDK_OFFSET(0xD13F30)
#define MINIGAMEAUDIOMANAGER_LOADNATIVEAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0xD14000)
#define MINIGAMEAUDIOMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD14150)
#define MINIGAMEAUDIOMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0xD14160)
#define MINIGAMEAUDIOMANAGER_STOPAUDIO_OFFSET UNITYSDK_OFFSET(0xD142D0)
#define MINIGAMEAUDIOMANAGER_RESUME_OFFSET UNITYSDK_OFFSET(0xD14300)
#define MINIGAMEAUDIOMANAGER_UNLOADNATIVEAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0xD144D0)
#define MINIGAMEAUDIOMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD14610)
#define MINIGAMEAUDIOMANAGER_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xD146C0)
#define MINIGAMEAUDIOMANAGER_ISAUDIOPLAYING_OFFSET UNITYSDK_OFFSET(0xD14810)
#define MINIGAMEAUDIOMANAGER_PLAYSFXINNATIVESOURCE_OFFSET UNITYSDK_OFFSET(0xD14830)
#define MINIGAMEAUDIOMANAGER_STOPSFXINNATIVESOURCE_OFFSET UNITYSDK_OFFSET(0xD14280)
#define MINIGAMEAUDIOMANAGER_WAITANDPLAY_OFFSET UNITYSDK_OFFSET(0xD13E80)

	inline static constexpr unsigned int MinigameAudioManager_TypeDefinitionIndex = 655;

	class MinigameAudioManager : public Il2CppObject
	{
	public:
		::MX::SaveData::DeviceOption* deviceOption; // 0x18
		PlayOptions* sfxPlayOption; // 0x20
		PlayOptions* longPlayOption; // 0x30
		PlayOptions* bgmPlayOption; // 0x40
		::UnityEngine::AudioSource* audioSource; // 0x50
		::UnityEngine::AudioClip* EmptyHitSFX; // 0x58
		::UnityEngine::AudioClip* SingleHitSFX; // 0x60
		::UnityEngine::AudioClip* DoubleHitSFX; // 0x68
		::UnityEngine::AudioClip* FlickHitSFX; // 0x70
		::UnityEngine::AudioClip* LongHitSFX; // 0x78
		::E7::Native::NativeAudioPointer* nativeAudioBGM; // 0x80
		::E7::Native::NativeAudioPointer* nativeAudioEmptyHit; // 0x88
		::E7::Native::NativeAudioPointer* nativeAudioSingleHit; // 0x90
		::E7::Native::NativeAudioPointer* nativeAudioDoubleHit; // 0x98
		::E7::Native::NativeAudioPointer* nativeAudioFlickHit; // 0xA0
		::E7::Native::NativeAudioPointer* nativeAudioLongHit; // 0xA8
		::System::Single nativeAudioBgmPlaybackTime; // 0xB0

		::System::Single GetCurrentMusicTimeFromAudio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_GETCURRENTMUSICTIMEFROMAUDIO_OFFSET))(nullptr);
		}

		::System::Void InitialPlayAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_INITIALPLAYAUDIO_OFFSET))(nullptr);
		}

		::System::Single GetAudioLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_GETAUDIOLENGTH_OFFSET))(nullptr);
		}

		::System::Void SetPlayOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_SETPLAYOPTIONS_OFFSET))(nullptr);
		}

		::System::Void LoadNativeAudioSource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_LOADNATIVEAUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_PAUSE_OFFSET))(nullptr);
		}

		::System::Void StopAudio()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_STOPAUDIO_OFFSET))(nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_RESUME_OFFSET))(nullptr);
		}

		::System::Void UnloadNativeAudioSource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_UNLOADNATIVEAUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Initialize(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_INITIALIZE_OFFSET))(str, nullptr);
		}

		::System::Void UnsubscribeEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_UNSUBSCRIBEEVENT_OFFSET))(nullptr);
		}

		::System::Boolean IsAudioPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_ISAUDIOPLAYING_OFFSET))(nullptr);
		}

		::System::Void PlaySFXinNativeSource(::MX::MinigameRhythm::MinigameSFXType* arg)
		{
			((::System::Void(*)(::MX::MinigameRhythm::MinigameSFXType*, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_PLAYSFXINNATIVESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void StopSFXinNativeSource()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_STOPSFXINNATIVESOURCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitAndPlay(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEAUDIOMANAGER_WAITANDPLAY_OFFSET))(arg, nullptr);
		}

	};

