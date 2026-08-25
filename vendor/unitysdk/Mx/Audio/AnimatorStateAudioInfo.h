#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioPlayInfo&; }

#define MX_AUDIO_ANIMATORSTATEAUDIOINFO_RELEASEADDRESSBLE_OFFSET UNITYSDK_OFFSET(0x1D3AD50)
#define MX_AUDIO_ANIMATORSTATEAUDIOINFO_GET_AUDIOPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1D3BBB0)
#define MX_AUDIO_ANIMATORSTATEAUDIOINFO_TRYGETRANDOMAUDIOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3B0E0)
#define MX_AUDIO_ANIMATORSTATEAUDIOINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BBC0)
#define MX_AUDIO_ANIMATORSTATEAUDIOINFO_SET_AUDIOPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1D3BBF0)

namespace MX::Audio
{
	inline static constexpr unsigned int AnimatorStateAudioInfo_TypeDefinitionIndex = 20099;

	class AnimatorStateAudioInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _AudioPlayInfos_k__BackingField; // 0x10

		::System::Void ReleaseAddressble()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEAUDIOINFO_RELEASEADDRESSBLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_AudioPlayInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEAUDIOINFO_GET_AUDIOPLAYINFOS_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRandomAudioPlayInfo(::MX::Audio::AudioPlayInfo&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Audio::AudioPlayInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEAUDIOINFO_TRYGETRANDOMAUDIOPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEAUDIOINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_AudioPlayInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEAUDIOINFO_SET_AUDIOPLAYINFOS_OFFSET))(arg, nullptr);
		}

	};
}

