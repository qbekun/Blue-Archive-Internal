#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphContext; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class IRenderGraphResource; }

#define RESOURCECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA0540)
#define RESOURCECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9FA31E0)
#define RESOURCECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9FA31F0)
#define RESOURCECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9FA3230)

	inline static constexpr unsigned int ResourceCallback_TypeDefinitionIndex = 33866;

	class ResourceCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCECALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCECALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCECALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

