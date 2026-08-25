#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RendererOverrideOption; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RendererOverrideOption_TypeDefinitionIndex = 32769;

	class RendererOverrideOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::RendererOverrideOption* Custom; // 0x0
		::UnityEngine::Rendering::Universal::RendererOverrideOption* UsePipelineSettings; // 0x0

	};
}

