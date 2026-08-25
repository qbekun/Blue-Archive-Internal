#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph; }

#define ONEXECUTIONREGISTEREDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9F9A740)
#define ONEXECUTIONREGISTEREDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9A750)
#define ONEXECUTIONREGISTEREDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9F9A860)
#define ONEXECUTIONREGISTEREDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9F9A870)

	inline static constexpr unsigned int OnExecutionRegisteredDelegate_TypeDefinitionIndex = 33843;

	class OnExecutionRegisteredDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONEXECUTIONREGISTEREDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONEXECUTIONREGISTEREDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ONEXECUTIONREGISTEREDDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONEXECUTIONREGISTEREDDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};

