#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AmbientAudioEvent; }

#define MX_AUDIO_AMBIENTAUDIOTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D450F0)
#define MX_AUDIO_AMBIENTAUDIOTRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D451A0)
#define MX_AUDIO_AMBIENTAUDIOTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D45250)

namespace MX::Audio
{
	inline static constexpr unsigned int AmbientAudioTrigger_TypeDefinitionIndex = 20141;

	class AmbientAudioTrigger : public Il2CppObject
	{
	public:
		::MX::Audio::AmbientAudioEvent* EventOnEnable; // 0x18
		::MX::Audio::AmbientAudioEvent* EventOnDisable; // 0x20

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOTRIGGER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOTRIGGER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AMBIENTAUDIOTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

