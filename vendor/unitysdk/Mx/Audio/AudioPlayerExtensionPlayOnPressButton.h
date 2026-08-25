#pragma once
#include "../../unitysdk.h"

#define MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D4A630)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D4A6C0)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D4A710)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_ONPRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x1D4A850)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A960)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioPlayerExtensionPlayOnPressButton_TypeDefinitionIndex = 20165;

	class AudioPlayerExtensionPlayOnPressButton : public ::Unity::Mathematics::float3x3
	{
	public:
		MXButton* button; // 0x18
		EventDelegate* eventDelegate; // 0x20

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnPressButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_ONPRESSBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONPLAYONPRESSBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};
}

