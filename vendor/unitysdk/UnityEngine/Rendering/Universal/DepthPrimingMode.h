#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DepthPrimingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthPrimingMode_TypeDefinitionIndex = 32781;

	class DepthPrimingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DepthPrimingMode* Disabled; // 0x0
		::UnityEngine::Rendering::Universal::DepthPrimingMode* Auto; // 0x0
		::UnityEngine::Rendering::Universal::DepthPrimingMode* Forced; // 0x0

	};
}

