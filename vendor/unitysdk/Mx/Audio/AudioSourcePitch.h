#pragma once
#include "../../unitysdk.h"

#define MX_AUDIO_AUDIOSOURCEPITCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D4C190)
#define MX_AUDIO_AUDIOSOURCEPITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C270)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioSourcePitch_TypeDefinitionIndex = 20173;

	class AudioSourcePitch : public Il2CppObject
	{
	public:
		::System::Single pitch; // 0x18
		::System::Int32 randomPitchMin; // 0x1C
		::System::Int32 randomPitchMax; // 0x20

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEPITCH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSOURCEPITCH_.CTOR_OFFSET))(nullptr);
		}

	};
}

