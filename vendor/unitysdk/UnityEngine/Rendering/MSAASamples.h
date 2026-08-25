#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class MSAASamples; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MSAASamples_TypeDefinitionIndex = 34021;

	class MSAASamples : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::MSAASamples* None; // 0x0
		::UnityEngine::Rendering::MSAASamples* MSAA2x; // 0x0
		::UnityEngine::Rendering::MSAASamples* MSAA4x; // 0x0
		::UnityEngine::Rendering::MSAASamples* MSAA8x; // 0x0

	};
}

