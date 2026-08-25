#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class StencilOp; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int StencilOp_TypeDefinitionIndex = 31494;

	class StencilOp : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::StencilOp* Keep; // 0x0
		::UnityEngine::Rendering::StencilOp* Zero; // 0x0
		::UnityEngine::Rendering::StencilOp* Replace; // 0x0
		::UnityEngine::Rendering::StencilOp* IncrementSaturate; // 0x0
		::UnityEngine::Rendering::StencilOp* DecrementSaturate; // 0x0
		::UnityEngine::Rendering::StencilOp* Invert; // 0x0
		::UnityEngine::Rendering::StencilOp* IncrementWrap; // 0x0
		::UnityEngine::Rendering::StencilOp* DecrementWrap; // 0x0

	};
}

