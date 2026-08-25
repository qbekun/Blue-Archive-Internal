#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering { class CommandBuffer; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphParameters_TypeDefinitionIndex = 33831;

	class RenderGraphParameters : public Il2CppObject
	{
	public:
		::System::String* executionName; // 0x10
		::System::Int32 currentFrameIndex; // 0x18
		::System::Boolean rendererListCulling; // 0x1C
		::UnityEngine::Rendering::ScriptableRenderContext* scriptableRenderContext; // 0x20
		::UnityEngine::Rendering::CommandBuffer* commandBuffer; // 0x28

	};
}

