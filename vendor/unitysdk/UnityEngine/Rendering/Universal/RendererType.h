#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class RendererType; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RendererType_TypeDefinitionIndex = 32518;

	class RendererType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::RendererType* Custom; // 0x0
		::UnityEngine::Rendering::Universal::RendererType* UniversalRenderer; // 0x0
		::UnityEngine::Rendering::Universal::RendererType* _2DRenderer; // 0x0
		::UnityEngine::Rendering::Universal::RendererType* ForwardRenderer; // 0x0

	};
}

