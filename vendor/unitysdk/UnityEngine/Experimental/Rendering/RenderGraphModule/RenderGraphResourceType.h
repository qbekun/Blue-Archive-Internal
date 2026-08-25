#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphResourceType; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResourceType_TypeDefinitionIndex = 33871;

	class RenderGraphResourceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* Texture; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* ComputeBuffer; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType* Count; // 0x0

	};
}

