#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AudioRolloffMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int AudioRolloffMode_TypeDefinitionIndex = 37463;

	class AudioRolloffMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AudioRolloffMode* Logarithmic; // 0x0
		::UnityEngine::AudioRolloffMode* Linear; // 0x0
		::UnityEngine::AudioRolloffMode* Custom; // 0x0

	};
}

