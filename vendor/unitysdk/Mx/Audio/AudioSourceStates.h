#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioSourceStates; }

namespace MX::Audio
{
	inline static constexpr unsigned int AudioSourceStates_TypeDefinitionIndex = 20166;

	class AudioSourceStates : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Audio::AudioSourceStates* None; // 0x0
		::MX::Audio::AudioSourceStates* Delay; // 0x0
		::MX::Audio::AudioSourceStates* Playing; // 0x0
		::MX::Audio::AudioSourceStates* FadeOut; // 0x0

	};
}

