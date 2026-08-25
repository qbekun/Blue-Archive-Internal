#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class UpscalingFilterSelection; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UpscalingFilterSelection_TypeDefinitionIndex = 32522;

	class UpscalingFilterSelection : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::UpscalingFilterSelection* Auto; // 0x0
		::UnityEngine::Rendering::Universal::UpscalingFilterSelection* Linear; // 0x0
		::UnityEngine::Rendering::Universal::UpscalingFilterSelection* Point; // 0x0
		::UnityEngine::Rendering::Universal::UpscalingFilterSelection* FSR; // 0x0

	};
}

