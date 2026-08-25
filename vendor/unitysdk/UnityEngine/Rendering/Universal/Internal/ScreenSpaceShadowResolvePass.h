#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0D9D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0D9DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0D9E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA0DA5E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0DA730)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ScreenSpaceShadowResolvePass_TypeDefinitionIndex = 32887;

	class ScreenSpaceShadowResolvePass : public Il2CppObject
	{
	public:
		::UnityEngine::Material* m_ScreenSpaceShadowsMaterial; // 0xD8
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_ScreenSpaceShadowmap; // 0xE0
		::UnityEngine::RenderTextureDescriptor* m_RenderTextureDescriptor; // 0x110

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_SCREENSPACESHADOWRESOLVEPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

