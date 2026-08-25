#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class VoiceSourceObject; }
namespace UnityEngine { class AudioSource; }
namespace MX::Audio { class VoicePlayInfo; }

#define MX_AUDIO_VOICEPLAYER_ADDSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D583D0)
#define MX_AUDIO_VOICEPLAYER_GET_VOLUMERATE_OFFSET UNITYSDK_OFFSET(0x1D58490)
#define MX_AUDIO_VOICEPLAYER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D584A0)
#define MX_AUDIO_VOICEPLAYER_FADEOUTVOICE_OFFSET UNITYSDK_OFFSET(0x1D56BA0)
#define MX_AUDIO_VOICEPLAYER_SET_VOLUMERATE_OFFSET UNITYSDK_OFFSET(0x1D58660)
#define MX_AUDIO_VOICEPLAYER_COFADEOUT_OFFSET UNITYSDK_OFFSET(0x1D585F0)
#define MX_AUDIO_VOICEPLAYER_LOADDEFAULTAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D58690)
#define MX_AUDIO_VOICEPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D58720)
#define MX_AUDIO_VOICEPLAYER_FINDROWPRIORITYOBJECTONPLAY_OFFSET UNITYSDK_OFFSET(0x1D58760)
#define MX_AUDIO_VOICEPLAYER_CANPLAY_OFFSET UNITYSDK_OFFSET(0x1D58870)
#define MX_AUDIO_VOICEPLAYER_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x1D58A40)
#define MX_AUDIO_VOICEPLAYER_TURNDOWNVOLUME_OFFSET UNITYSDK_OFFSET(0x1D569E0)
#define MX_AUDIO_VOICEPLAYER_GET_DEFAULTLOADCOUNT_OFFSET UNITYSDK_OFFSET(0x1D58C80)

namespace MX::Audio
{
	inline static constexpr unsigned int VoicePlayer_TypeDefinitionIndex = 20213;

	class VoicePlayer : public <>c
	{
	public:
		::System::Single _VolumeRate_k__BackingField; // 0x40

		::MX::Audio::VoiceSourceObject* AddSourceObject(::System::Boolean arg)
		{
			return (return (::MX::Audio::VoiceSourceObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_ADDSOURCEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Single get_VolumeRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_GET_VOLUMERATE_OFFSET))(nullptr);
		}

		::System::Boolean IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void FadeOutVoice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_FADEOUTVOICE_OFFSET))(nullptr);
		}

		::System::Void set_VolumeRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_SET_VOLUMERATE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoFadeOut()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_COFADEOUT_OFFSET))(nullptr);
		}

		::UnityEngine::AudioSource* LoadDefaultAudioSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_LOADDEFAULTAUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::MX::Audio::VoiceSourceObject* FindRowPriorityObjectOnPlay(::MX::Audio::VoicePlayInfo* arg)
		{
			return (return (::MX::Audio::VoiceSourceObject*(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_FINDROWPRIORITYOBJECTONPLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanPlay(::MX::Audio::VoicePlayInfo* arg)
		{
			return (return (::System::Boolean(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_CANPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void PlayVoice(::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_PLAYVOICE_OFFSET))(arg, nullptr);
		}

		::System::Void TurnDownVolume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_TURNDOWNVOLUME_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultLoadCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYER_GET_DEFAULTLOADCOUNT_OFFSET))(nullptr);
		}

	};
}

