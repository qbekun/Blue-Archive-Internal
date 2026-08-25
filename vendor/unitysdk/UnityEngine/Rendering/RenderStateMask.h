#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderStateMask; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderStateMask_TypeDefinitionIndex = 31566;

	class RenderStateMask : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::RenderStateMask* Nothing; // 0x0
		::UnityEngine::Rendering::RenderStateMask* Blend; // 0x0
		::UnityEngine::Rendering::RenderStateMask* Raster; // 0x0
		::UnityEngine::Rendering::RenderStateMask* Depth; // 0x0
		::UnityEngine::Rendering::RenderStateMask* Stencil; // 0x0
		::UnityEngine::Rendering::RenderStateMask* Everything; // 0x0

	};
}

