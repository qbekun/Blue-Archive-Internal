#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugValidationMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugValidationMode_TypeDefinitionIndex = 38088;

	class DebugValidationMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DebugValidationMode* None; // 0x0
		::UnityEngine::Rendering::Universal::DebugValidationMode* HighlightNanInfNegative; // 0x0
		::UnityEngine::Rendering::Universal::DebugValidationMode* HighlightOutsideOfRange; // 0x0

	};
}

