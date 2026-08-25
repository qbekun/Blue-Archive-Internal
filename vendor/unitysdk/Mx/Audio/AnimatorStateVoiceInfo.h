#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class VoicePlayInfo&; }

#define MX_AUDIO_ANIMATORSTATEVOICEINFO_TRYGETRANDOMVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3B180)
#define MX_AUDIO_ANIMATORSTATEVOICEINFO_SET_VOICEPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1D3BB80)
#define MX_AUDIO_ANIMATORSTATEVOICEINFO_GET_VOICEPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1D3BB90)
#define MX_AUDIO_ANIMATORSTATEVOICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BBA0)

namespace MX::Audio
{
	inline static constexpr unsigned int AnimatorStateVoiceInfo_TypeDefinitionIndex = 20098;

	class AnimatorStateVoiceInfo : public Il2CppObject
	{
	public:
		Il2CppObject* _VoicePlayInfos_k__BackingField; // 0x10

		::System::Boolean TryGetRandomVoicePlayInfo(::MX::Audio::VoicePlayInfo&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Audio::VoicePlayInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEVOICEINFO_TRYGETRANDOMVOICEPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_VoicePlayInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEVOICEINFO_SET_VOICEPLAYINFOS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_VoicePlayInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEVOICEINFO_GET_VOICEPLAYINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATORSTATEVOICEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

