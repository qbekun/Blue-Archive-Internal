#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class LightRenderingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightRenderingMode_TypeDefinitionIndex = 32515;

	class LightRenderingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::LightRenderingMode* Disabled; // 0x0
		::UnityEngine::Rendering::Universal::LightRenderingMode* PerVertex; // 0x0
		::UnityEngine::Rendering::Universal::LightRenderingMode* PerPixel; // 0x0

	};
}

