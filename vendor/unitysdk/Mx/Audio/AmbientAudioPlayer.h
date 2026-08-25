#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AmbientAudioEvent; }
namespace UnityEngine { class AudioSource; }

#define MX_AUDIO_AMBIENTAUDIOPLAYER_COADJUSTSOURCEVALUES_OFFSET UNITYSDK_OFFSET(0x1D43B40)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D43C00)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_STOPPREVCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D43C10)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_ADVANCECURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x1D43C70)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D43C90)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1D43CA0)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_PARKPLAYER_OFFSET UNITYSDK_OFFSET(0x1D43DD0)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D440E0)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D443C0)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1D44420)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_COADJUSTVOLUME_OFFSET UNITYSDK_OFFSET(0x1D44010)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_ADJUSTPLAYER_OFFSET UNITYSDK_OFFSET(0x1D44750)
#define MX_AUDIO_AMBIENTAUDIOPLAYER_STARTPLAYER_OFFSET UNITYSDK_OFFSET(0x1D44860)

namespace MX::Audio
{
	inline static constexpr unsigned int AmbientAudioPlayer_TypeDefinitionIndex = 20140;

	class AmbientAudioPlayer : public Button
	{
	public:
		::System::Int32 poolCount; // 0x0
		::Il2CppArray<::System::Object*>* players; // 0x20
		::System::Boolean _IsInitialized_k__BackingField; // 0x28
		::System::Int32 currentIndex; // 0x2C
		::MX::Audio::AmbientAudioEvent* currentEvent; // 0x30

		::System::Collections::IEnumerator* CoAdjustSourceValues(::UnityEngine::AudioSource* arg, ::MX::Audio::AmbientAudioEvent* arg, ::System::Action* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::AudioSource*, ::MX::Audio::AmbientAudioEvent*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_COADJUSTSOURCEVALUES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_IsInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void StopPrevCoroutine(Player* arg)
		{
			((::System::Void(*)(Player*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_STOPPREVCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void AdvanceCurrentIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_ADVANCECURRENTINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void Stop(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_STOP_OFFSET))(arg, nullptr);
		}

		::System::Void ParkPlayer(Player* arg, ::System::Single arg)
		{
			((::System::Void(*)(Player*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_PARKPLAYER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Play(::MX::Audio::AmbientAudioEvent* arg)
		{
			((::System::Void(*)(::MX::Audio::AmbientAudioEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoAdjustVolume(::UnityEngine::AudioSource* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Action* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::AudioSource*, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_COADJUSTVOLUME_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AdjustPlayer(Player* arg, ::MX::Audio::AmbientAudioEvent* arg)
		{
			((::System::Void(*)(Player*, ::MX::Audio::AmbientAudioEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_ADJUSTPLAYER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPlayer(Player* arg, ::MX::Audio::AmbientAudioEvent* arg)
		{
			((::System::Void(*)(Player*, ::MX::Audio::AmbientAudioEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOPLAYER_STARTPLAYER_OFFSET))(arg, arg, nullptr);
		}

	};
}

