#pragma once
#include "../../unitysdk.h"

#define MX_AUDIO_AUDIOPLAYEREXTENSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D49560)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioPlayerExtension_TypeDefinitionIndex = 20161;

	class AudioPlayerExtension : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

