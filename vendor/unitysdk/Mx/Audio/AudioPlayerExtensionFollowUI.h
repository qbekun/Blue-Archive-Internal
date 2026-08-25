#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioSourceObject; }

#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOWUI_ONREGISTER_OFFSET UNITYSDK_OFFSET(0x1D49D90)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOWUI_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1D49E30)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOWUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A610)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOWUI_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D4A620)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioPlayerExtensionFollowUI_TypeDefinitionIndex = 20164;

	class AudioPlayerExtensionFollowUI : public DebuggerProxy
	{
	public:
		::System::Single distanceToAudioListener; // 0x20

		::System::Void OnRegister(::MX::Audio::AudioSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOWUI_ONREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOWUI_SETPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOWUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOWUI_LATEUPDATE_OFFSET))(nullptr);
		}

	};
}

