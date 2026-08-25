#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioSourceData; }

#define MX_AUDIO_ANIMATIONAUDIOEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D45260)

namespace MX::Audio
{
	inline static constexpr unsigned int AnimationAudioEvent_TypeDefinitionIndex = 20142;

	class AnimationAudioEvent : public Il2CppObject
	{
	public:
		::MX::Audio::AudioSourceData* AudioData; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ANIMATIONAUDIOEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

