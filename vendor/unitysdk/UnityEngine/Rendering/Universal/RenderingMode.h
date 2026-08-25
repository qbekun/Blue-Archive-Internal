#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RenderingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RenderingMode_TypeDefinitionIndex = 32780;

	class RenderingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::RenderingMode* Forward; // 0x0
		::UnityEngine::Rendering::Universal::RenderingMode* Deferred; // 0x0

	};
}

