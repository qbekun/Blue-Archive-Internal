#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ClearFlag; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClearFlag_TypeDefinitionIndex = 33885;

	class ClearFlag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ClearFlag* None; // 0x0
		::UnityEngine::Rendering::ClearFlag* Color; // 0x0
		::UnityEngine::Rendering::ClearFlag* Depth; // 0x0
		::UnityEngine::Rendering::ClearFlag* Stencil; // 0x0
		::UnityEngine::Rendering::ClearFlag* DepthStencil; // 0x0
		::UnityEngine::Rendering::ClearFlag* ColorStencil; // 0x0
		::UnityEngine::Rendering::ClearFlag* All; // 0x0

	};
}

