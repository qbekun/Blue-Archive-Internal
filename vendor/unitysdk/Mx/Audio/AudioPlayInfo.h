#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class AudioClip; }
namespace MX::Data::Excel { class AudioAnimatorExcel; }
namespace MX::Data::Excel { class MiniGameAudioAnimatorExcel; }
namespace MX::Audio { class AudioSourceData; }

#define MX_AUDIO_AUDIOPLAYINFO_GET_ADDRESSKEY_OFFSET UNITYSDK_OFFSET(0x1D3C040)
#define MX_AUDIO_AUDIOPLAYINFO_SET_ADDRESSKEY_OFFSET UNITYSDK_OFFSET(0x1D3C050)
#define MX_AUDIO_AUDIOPLAYINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1D3C060)
#define MX_AUDIO_AUDIOPLAYINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1D3C070)
#define MX_AUDIO_AUDIOPLAYINFO_GET_IGNOREINTERRUPTDELAY_OFFSET UNITYSDK_OFFSET(0x1D3C080)
#define MX_AUDIO_AUDIOPLAYINFO_SET_IGNOREINTERRUPTDELAY_OFFSET UNITYSDK_OFFSET(0x1D3C090)
#define MX_AUDIO_AUDIOPLAYINFO_GET_IGNOREINTERRUPTPLAY_OFFSET UNITYSDK_OFFSET(0x1D3C0A0)
#define MX_AUDIO_AUDIOPLAYINFO_SET_IGNOREINTERRUPTPLAY_OFFSET UNITYSDK_OFFSET(0x1D3C0B0)
#define MX_AUDIO_AUDIOPLAYINFO_GET_IGNOREVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D3C0C0)
#define MX_AUDIO_AUDIOPLAYINFO_SET_IGNOREVELOCITY_OFFSET UNITYSDK_OFFSET(0x1D3C0D0)
#define MX_AUDIO_AUDIOPLAYINFO_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1D3C0E0)
#define MX_AUDIO_AUDIOPLAYINFO_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1D3C0F0)
#define MX_AUDIO_AUDIOPLAYINFO_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1D3C100)
#define MX_AUDIO_AUDIOPLAYINFO_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x1D3C110)
#define MX_AUDIO_AUDIOPLAYINFO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1D3C120)
#define MX_AUDIO_AUDIOPLAYINFO_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1D3C130)
#define MX_AUDIO_AUDIOPLAYINFO_GET_RANDOMPITCHMINMAX_OFFSET UNITYSDK_OFFSET(0x1D3C140)
#define MX_AUDIO_AUDIOPLAYINFO_SET_RANDOMPITCHMINMAX_OFFSET UNITYSDK_OFFSET(0x1D3C150)
#define MX_AUDIO_AUDIOPLAYINFO_GET_AUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x1D3C160)
#define MX_AUDIO_AUDIOPLAYINFO_SET_AUDIOCLIP_OFFSET UNITYSDK_OFFSET(0x1D3C170)
#define MX_AUDIO_AUDIOPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C180)
#define MX_AUDIO_AUDIOPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C250)
#define MX_AUDIO_AUDIOPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C2F0)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioPlayInfo_TypeDefinitionIndex = 20102;

	class AudioPlayInfo : public Il2CppObject
	{
	public:
		::System::String* _AddressKey_k__BackingField; // 0x10
		::System::Int32 _GroupId_k__BackingField; // 0x18
		::System::Boolean _IgnoreInterruptDelay_k__BackingField; // 0x1C
		::System::Boolean _IgnoreInterruptPlay_k__BackingField; // 0x1D
		::System::Boolean _IgnoreVelocity_k__BackingField; // 0x1E
		::System::Single _Volume_k__BackingField; // 0x20
		::System::Single _Delay_k__BackingField; // 0x24
		::System::Int32 _Priority_k__BackingField; // 0x28
		::UnityEngine::Vector2Int* _RandomPitchMinMax_k__BackingField; // 0x2C
		::UnityEngine::AudioClip* _AudioClip_k__BackingField; // 0x38

		::System::String* get_AddressKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_ADDRESSKEY_OFFSET))(nullptr);
		}

		::System::Void set_AddressKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_ADDRESSKEY_OFFSET))(str, nullptr);
		}

		::System::Int32 get_GroupId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreInterruptDelay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_IGNOREINTERRUPTDELAY_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreInterruptDelay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_IGNOREINTERRUPTDELAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreInterruptPlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_IGNOREINTERRUPTPLAY_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreInterruptPlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_IGNOREINTERRUPTPLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreVelocity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_IGNOREVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreVelocity(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_IGNOREVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Void set_Volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Single get_Delay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_Priority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_PRIORITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2Int* get_RandomPitchMinMax()
		{
			return (return (::UnityEngine::Vector2Int*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_RANDOMPITCHMINMAX_OFFSET))(nullptr);
		}

		::System::Void set_RandomPitchMinMax(::UnityEngine::Vector2Int* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_RANDOMPITCHMINMAX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioClip* get_AudioClip()
		{
			return (return (::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_GET_AUDIOCLIP_OFFSET))(nullptr);
		}

		::System::Void set_AudioClip(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_SET_AUDIOCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AudioAnimatorExcel* arg, ::UnityEngine::AudioClip* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::Excel::AudioAnimatorExcel*, ::UnityEngine::AudioClip*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::MiniGameAudioAnimatorExcel* arg, ::UnityEngine::AudioClip* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameAudioAnimatorExcel*, ::UnityEngine::AudioClip*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor(::MX::Audio::AudioSourceData* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

