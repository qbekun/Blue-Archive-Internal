#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DrawRendererFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DrawRendererFlags_TypeDefinitionIndex = 31553;

	class DrawRendererFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::DrawRendererFlags* None; // 0x0
		::UnityEngine::Rendering::DrawRendererFlags* EnableDynamicBatching; // 0x0
		::UnityEngine::Rendering::DrawRendererFlags* EnableInstancing; // 0x0

	};
}

