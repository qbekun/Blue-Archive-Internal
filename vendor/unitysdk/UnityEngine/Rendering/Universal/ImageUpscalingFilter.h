#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ImageUpscalingFilter; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ImageUpscalingFilter_TypeDefinitionIndex = 32797;

	class ImageUpscalingFilter : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ImageUpscalingFilter* Linear; // 0x0
		::UnityEngine::Rendering::Universal::ImageUpscalingFilter* Point; // 0x0
		::UnityEngine::Rendering::Universal::ImageUpscalingFilter* FSR; // 0x0

	};
}

