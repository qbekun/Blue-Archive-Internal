#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AudioSource; }
namespace MX::Audio { class SimpleVoiceSourceObject; }
namespace MX::Audio { class VoicePlayInfoSimple; }

#define MX_AUDIO_SIMPLEVOICEPLAYER_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D51370)
#define MX_AUDIO_SIMPLEVOICEPLAYER_LOADDEFAULTAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x1D514C0)
#define MX_AUDIO_SIMPLEVOICEPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D51550)
#define MX_AUDIO_SIMPLEVOICEPLAYER_COFADEOUT_OFFSET UNITYSDK_OFFSET(0x1D51590)
#define MX_AUDIO_SIMPLEVOICEPLAYER_TURNDOWNVOLUME_OFFSET UNITYSDK_OFFSET(0x1D51620)
#define MX_AUDIO_SIMPLEVOICEPLAYER_ADDSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D517C0)
#define MX_AUDIO_SIMPLEVOICEPLAYER_GET_DEFAULTLOADCOUNT_OFFSET UNITYSDK_OFFSET(0x1D51830)
#define MX_AUDIO_SIMPLEVOICEPLAYER_FADEOUTVOICE_OFFSET UNITYSDK_OFFSET(0x1D51840)
#define MX_AUDIO_SIMPLEVOICEPLAYER_PLAYVOICE_OFFSET UNITYSDK_OFFSET(0x1D518C0)

namespace MX::Audio
{
	inline static constexpr unsigned int SimpleVoicePlayer_TypeDefinitionIndex = 20191;

	class SimpleVoicePlayer : public <>c__DisplayClass112_0
	{
	public:
		::System::Boolean IsPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_ISPLAYING_OFFSET))(nullptr);
		}

		::UnityEngine::AudioSource* LoadDefaultAudioSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_LOADDEFAULTAUDIOSOURCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoFadeOut()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_COFADEOUT_OFFSET))(nullptr);
		}

		::System::Void TurnDownVolume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_TURNDOWNVOLUME_OFFSET))(nullptr);
		}

		::MX::Audio::SimpleVoiceSourceObject* AddSourceObject(::System::Boolean arg)
		{
			return (return (::MX::Audio::SimpleVoiceSourceObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_ADDSOURCEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DefaultLoadCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_GET_DEFAULTLOADCOUNT_OFFSET))(nullptr);
		}

		::System::Void FadeOutVoice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_FADEOUTVOICE_OFFSET))(nullptr);
		}

		::System::Void PlayVoice(::MX::Audio::VoicePlayInfoSimple* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfoSimple*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICEPLAYER_PLAYVOICE_OFFSET))(arg, nullptr);
		}

	};
}

