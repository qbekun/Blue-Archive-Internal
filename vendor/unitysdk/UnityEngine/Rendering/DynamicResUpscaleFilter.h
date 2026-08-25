#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DynamicResUpscaleFilter; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResUpscaleFilter_TypeDefinitionIndex = 33908;

	class DynamicResUpscaleFilter : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::UnityEngine::Rendering::DynamicResUpscaleFilter* Bilinear; // 0x0
		::UnityEngine::Rendering::DynamicResUpscaleFilter* CatmullRom; // 0x0
		::UnityEngine::Rendering::DynamicResUpscaleFilter* Lanczos; // 0x0
		::UnityEngine::Rendering::DynamicResUpscaleFilter* ContrastAdaptiveSharpen; // 0x0
		::UnityEngine::Rendering::DynamicResUpscaleFilter* EdgeAdaptiveScalingUpres; // 0x0
		::UnityEngine::Rendering::DynamicResUpscaleFilter* TAAU; // 0x0

	};
}

