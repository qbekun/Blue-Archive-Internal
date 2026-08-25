#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8FF30)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHEXECUTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F8FF40)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphExecution_TypeDefinitionIndex = 33832;

	class RenderGraphExecution : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph; // 0x10

		::System::Void .ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHEXECUTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHEXECUTION_DISPOSE_OFFSET))(nullptr);
		}

	};
}

