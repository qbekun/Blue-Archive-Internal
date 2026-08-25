#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphContext; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphObjectPool; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_HASRENDERFUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphPass`1_TypeDefinitionIndex = 33855;

	class RenderGraphPass`1 : public Il2CppObject
	{
	public:
		Il2CppObject* data; // 0x0
		Il2CppObject* renderFunc; // 0x0

		::System::Void Initialize(::System::Int32 arg, Il2CppObject* arg, ::System::String* str, ::UnityEngine::Rendering::ProfilingSampler* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::String*, ::UnityEngine::Rendering::ProfilingSampler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_INITIALIZE_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasRenderFunc()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_HASRENDERFUNC_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHPASS`1_RELEASE_OFFSET))(arg, nullptr);
		}

	};
}

