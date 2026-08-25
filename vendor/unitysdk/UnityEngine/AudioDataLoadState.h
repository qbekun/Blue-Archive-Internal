#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AudioDataLoadState; }

namespace UnityEngine
{
	inline static constexpr unsigned int AudioDataLoadState_TypeDefinitionIndex = 37459;

	class AudioDataLoadState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AudioDataLoadState* Unloaded; // 0x0
		::UnityEngine::AudioDataLoadState* Loading; // 0x0
		::UnityEngine::AudioDataLoadState* Loaded; // 0x0
		::UnityEngine::AudioDataLoadState* Failed; // 0x0

	};
}

