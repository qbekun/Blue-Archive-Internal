#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphObjectPool; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphDefaultResources; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8FF20)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphContext_TypeDefinitionIndex = 33830;

	class RenderGraphContext : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ScriptableRenderContext* renderContext; // 0x10
		::UnityEngine::Rendering::CommandBuffer* cmd; // 0x18
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* renderGraphPool; // 0x20
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHCONTEXT_.CTOR_OFFSET))(nullptr);
		}

	};
}

