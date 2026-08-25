#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPROFILINGSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9A9A0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPROFILINGSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F9A9F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPROFILINGSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F9AA30)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphProfilingScope_TypeDefinitionIndex = 33846;

	class RenderGraphProfilingScope : public Il2CppObject
	{
	public:
		::System::Boolean m_Disposed; // 0x10
		::UnityEngine::Rendering::ProfilingSampler* m_Sampler; // 0x18
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph; // 0x20

		::System::Void .ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* arg, ::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPROFILINGSCOPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPROFILINGSCOPE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPROFILINGSCOPE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

