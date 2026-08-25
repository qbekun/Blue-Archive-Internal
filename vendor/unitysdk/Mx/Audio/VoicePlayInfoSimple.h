#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AudioClip; }
namespace MX::Audio { class VoicePlayInfoSimple; }
namespace MX::Data::Excel { class CharacterVoiceExcel; }
namespace MX::Data::Excel { class VoiceExcel; }
namespace MX::Data::Excel { class VoiceTimelineExcel; }

#define MX_AUDIO_VOICEPLAYINFOSIMPLE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1D3BC00)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1D3BC10)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_GET_AUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x1D3BC20)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_SET_AUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x1D3BC30)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1D3BC40)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1D3BC50)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1D3BC60)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1D3BC70)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BC80)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BCF0)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BD70)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BDF0)
#define MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BE70)

namespace MX::Audio
{
	inline static constexpr unsigned int VoicePlayInfoSimple_TypeDefinitionIndex = 20100;

	class VoicePlayInfoSimple : public Il2CppObject
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10
		::UnityEngine::AudioClip* _AudioClip_k__BackingField; // 0x18
		::System::Single _Volume_k__BackingField; // 0x20
		::System::Single _Delay_k__BackingField; // 0x24

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_SET_PATH_OFFSET))(str, nullptr);
		}

		::UnityEngine::AudioClip* get_AudioClip()
		{
			return (return (::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_GET_AUDIOCLIP_OFFSET))(nullptr);
		}

		::System::Void set_AudioClip(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_SET_AUDIOCLIP_OFFSET))(arg, nullptr);
		}

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Void set_Volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Single get_Delay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Audio::VoicePlayInfoSimple* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfoSimple*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterVoiceExcel* arg, ::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterVoiceExcel*, ::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::VoiceExcel* arg, ::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::VoiceExcel*, ::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::VoiceTimelineExcel* arg, ::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::VoiceTimelineExcel*, ::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFOSIMPLE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

