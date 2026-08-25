#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugPostProcessingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugPostProcessingMode_TypeDefinitionIndex = 38087;

	class DebugPostProcessingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DebugPostProcessingMode* Disabled; // 0x0
		::UnityEngine::Rendering::Universal::DebugPostProcessingMode* Auto; // 0x0
		::UnityEngine::Rendering::Universal::DebugPostProcessingMode* Enabled; // 0x0

	};
}

