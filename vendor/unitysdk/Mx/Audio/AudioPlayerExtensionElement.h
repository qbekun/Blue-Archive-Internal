#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioSourceObject; }

#define MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D49570)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_ONREGISTER_OFFSET UNITYSDK_OFFSET(0x1D495F0)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_REGISTER_OFFSET UNITYSDK_OFFSET(0x1D48E50)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1D496A0)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_GETAUDIOSOURCEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D49870)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioPlayerExtensionElement_TypeDefinitionIndex = 20162;

	class AudioPlayerExtensionElement : public Il2CppObject
	{
	public:
		Il2CppObject* audioSourceObjects; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnRegister(::MX::Audio::AudioSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_ONREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Register(::MX::Audio::AudioSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Unregister(::MX::Audio::AudioSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_UNREGISTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAudioSourceObjects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONELEMENT_GETAUDIOSOURCEOBJECTS_OFFSET))(nullptr);
		}

	};
}

