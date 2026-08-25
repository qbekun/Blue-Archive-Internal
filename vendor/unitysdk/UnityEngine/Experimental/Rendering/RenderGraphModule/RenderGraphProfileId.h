#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphProfileId; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphProfileId_TypeDefinitionIndex = 33856;

	class RenderGraphProfileId : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId* CompileRenderGraph; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId* ExecuteRenderGraph; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId* RenderGraphClear; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphProfileId* RenderGraphClearDebug; // 0x0

	};
}

