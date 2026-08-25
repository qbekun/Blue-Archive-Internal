#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBufferExecutionFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBufferExecutionFlags_TypeDefinitionIndex = 31519;

	class CommandBufferExecutionFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::CommandBufferExecutionFlags* None; // 0x0
		::UnityEngine::Rendering::CommandBufferExecutionFlags* AsyncCompute; // 0x0

	};
}

