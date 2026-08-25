#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class VoicePlayInfoSimple; }
namespace MX::Data::Excel { class CharacterVoiceExcel; }
namespace UnityEngine { class AudioClip; }

#define MX_AUDIO_VOICEPLAYINFO_GET_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1D3BEC0)
#define MX_AUDIO_VOICEPLAYINFO_SET_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1D3BED0)
#define MX_AUDIO_VOICEPLAYINFO_GET_ONLYONE_OFFSET UNITYSDK_OFFSET(0x1D3BEE0)
#define MX_AUDIO_VOICEPLAYINFO_SET_ONLYONE_OFFSET UNITYSDK_OFFSET(0x1D3BEF0)
#define MX_AUDIO_VOICEPLAYINFO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1D3BF00)
#define MX_AUDIO_VOICEPLAYINFO_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1D3BF10)
#define MX_AUDIO_VOICEPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BF20)
#define MX_AUDIO_VOICEPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BF90)

namespace MX::Audio
{
	inline static constexpr unsigned int VoicePlayInfo_TypeDefinitionIndex = 20101;

	class VoicePlayInfo : public Il2CppObject
	{
	public:
		::System::UInt32 _VoiceHash_k__BackingField; // 0x28
		::System::Boolean _OnlyOne_k__BackingField; // 0x2C
		::System::Int32 _Priority_k__BackingField; // 0x30

		::System::UInt32 get_VoiceHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFO_GET_VOICEHASH_OFFSET))(nullptr);
		}

		::System::Void set_VoiceHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFO_SET_VOICEHASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OnlyOne()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFO_GET_ONLYONE_OFFSET))(nullptr);
		}

		::System::Void set_OnlyOne(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFO_SET_ONLYONE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFO_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_Priority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFO_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Audio::VoicePlayInfoSimple* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfoSimple*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CharacterVoiceExcel* arg, ::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterVoiceExcel*, ::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICEPLAYINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

