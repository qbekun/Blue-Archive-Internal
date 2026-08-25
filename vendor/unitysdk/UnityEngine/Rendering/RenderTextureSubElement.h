#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderTextureSubElement; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTextureSubElement_TypeDefinitionIndex = 31521;

	class RenderTextureSubElement : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::RenderTextureSubElement* Color; // 0x0
		::UnityEngine::Rendering::RenderTextureSubElement* Depth; // 0x0
		::UnityEngine::Rendering::RenderTextureSubElement* Stencil; // 0x0
		::UnityEngine::Rendering::RenderTextureSubElement* Default; // 0x0

	};
}

