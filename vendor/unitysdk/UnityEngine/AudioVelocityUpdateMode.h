#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AudioVelocityUpdateMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int AudioVelocityUpdateMode_TypeDefinitionIndex = 37461;

	class AudioVelocityUpdateMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AudioVelocityUpdateMode* Auto; // 0x0
		::UnityEngine::AudioVelocityUpdateMode* Fixed; // 0x0
		::UnityEngine::AudioVelocityUpdateMode* Dynamic; // 0x0

	};
}

