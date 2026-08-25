#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DefaultReflectionMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DefaultReflectionMode_TypeDefinitionIndex = 31496;

	class DefaultReflectionMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::DefaultReflectionMode* Skybox; // 0x0
		::UnityEngine::Rendering::DefaultReflectionMode* Custom; // 0x0

	};
}

