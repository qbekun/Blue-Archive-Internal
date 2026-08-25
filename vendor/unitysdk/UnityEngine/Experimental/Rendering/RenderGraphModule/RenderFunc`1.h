#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphContext; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERFUNC`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERFUNC`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERFUNC`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERFUNC`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderFunc`1_TypeDefinitionIndex = 33835;

	class RenderFunc`1 : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERFUNC`1_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERFUNC`1_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERFUNC`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERFUNC`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

