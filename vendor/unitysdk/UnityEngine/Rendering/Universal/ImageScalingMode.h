#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ImageScalingMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ImageScalingMode_TypeDefinitionIndex = 32796;

	class ImageScalingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ImageScalingMode* None; // 0x0
		::UnityEngine::Rendering::Universal::ImageScalingMode* Upscaling; // 0x0
		::UnityEngine::Rendering::Universal::ImageScalingMode* Downscaling; // 0x0

	};
}

