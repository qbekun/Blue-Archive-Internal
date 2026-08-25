#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class FormatUsage; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int FormatUsage_TypeDefinitionIndex = 31652;

	class FormatUsage : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::FormatUsage* Sample; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* Linear; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* Sparse; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* Render; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* Blend; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* GetPixels; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* SetPixels; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* SetPixels32; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* ReadPixels; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* LoadStore; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* MSAA2x; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* MSAA4x; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* MSAA8x; // 0x0
		::UnityEngine::Experimental::Rendering::FormatUsage* StencilSampling; // 0x0

	};
}

