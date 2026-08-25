#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AudioClipLoadType; }

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClipLoadType_TypeDefinitionIndex = 37460;

	class AudioClipLoadType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AudioClipLoadType* DecompressOnLoad; // 0x0
		::UnityEngine::AudioClipLoadType* CompressedInMemory; // 0x0
		::UnityEngine::AudioClipLoadType* Streaming; // 0x0

	};
}

