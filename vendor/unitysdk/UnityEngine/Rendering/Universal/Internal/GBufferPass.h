#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal::Internal { class DeferredLights; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class RenderStateBlock; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine::Rendering { class RenderQueueRange; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::Rendering { class StencilState; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA0C24F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0C2850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0C29D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0C2ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0C36B0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int GBufferPass_TypeDefinitionIndex = 32876;

	class GBufferPass : public Il2CppObject
	{
	public:
		::System::Int32 s_CameraNormalsTextureID; // 0x0
		::UnityEngine::Rendering::ShaderTagId* s_ShaderTagLit; // 0x4
		::UnityEngine::Rendering::ShaderTagId* s_ShaderTagSimpleLit; // 0x8
		::UnityEngine::Rendering::ShaderTagId* s_ShaderTagUnlit; // 0xC
		::UnityEngine::Rendering::ShaderTagId* s_ShaderTagUniversalGBuffer; // 0x10
		::UnityEngine::Rendering::ShaderTagId* s_ShaderTagUniversalMaterialType; // 0x14
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0xD8
		::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights; // 0xE0
		::Il2CppArray<::System::Object*>* m_ShaderTagValues; // 0xE8
		::Il2CppArray<::System::Object*>* m_RenderStateBlocks; // 0xF0
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xF8
		::UnityEngine::Rendering::RenderStateBlock* m_RenderStateBlock; // 0x110

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::RenderQueueRange* arg, ::UnityEngine::LayerMask* arg, ::UnityEngine::Rendering::StencilState* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::Internal::DeferredLights* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::RenderQueueRange*, ::UnityEngine::LayerMask*, ::UnityEngine::Rendering::StencilState*, ::System::Int32, ::UnityEngine::Rendering::Universal::Internal::DeferredLights*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_GBUFFERPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

	};
}

