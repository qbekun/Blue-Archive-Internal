#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal { class DeferredLights; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0BE6D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA0BE780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0BE8D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0BE900)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DeferredPass_TypeDefinitionIndex = 32870;

	class DeferredPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights; // 0xD8

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::Universal::Internal::DeferredLights* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::Universal::Internal::DeferredLights*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DEFERREDPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

