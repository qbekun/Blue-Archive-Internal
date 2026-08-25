#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraph; }

#define ONGRAPHREGISTEREDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9F9A5E0)
#define ONGRAPHREGISTEREDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9F9A5F0)
#define ONGRAPHREGISTEREDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9A600)
#define ONGRAPHREGISTEREDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9F9A710)

	inline static constexpr unsigned int OnGraphRegisteredDelegate_TypeDefinitionIndex = 33842;

	class OnGraphRegisteredDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONGRAPHREGISTEREDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::PVOID))((::PBYTE)hIl2Cpp + ONGRAPHREGISTEREDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONGRAPHREGISTEREDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONGRAPHREGISTEREDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

