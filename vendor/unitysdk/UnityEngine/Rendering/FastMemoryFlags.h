#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class FastMemoryFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FastMemoryFlags_TypeDefinitionIndex = 31488;

	class FastMemoryFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::FastMemoryFlags* None; // 0x0
		::UnityEngine::Rendering::FastMemoryFlags* SpillTop; // 0x0
		::UnityEngine::Rendering::FastMemoryFlags* SpillBottom; // 0x0

	};
}

