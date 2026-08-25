#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphContext; }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class IRenderGraphResource; }

#define RESOURCECREATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9FA3160)
#define RESOURCECREATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9FA3190)
#define RESOURCECREATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9FA31A0)
#define RESOURCECREATECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA0430)

	inline static constexpr unsigned int ResourceCreateCallback_TypeDefinitionIndex = 33865;

	class ResourceCreateCallback : public Il2CppObject
	{
	public:
		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCECREATECALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCECREATECALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* arg, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCECREATECALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RESOURCECREATECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

