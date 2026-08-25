#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DecalDrawGBufferSystem; }
namespace UnityEngine::Rendering::Universal { class DecalScreenSpaceSettings; }
namespace UnityEngine::Rendering::Universal::Internal { class DeferredLights; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA044A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA044FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA045360)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA045380)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA045F90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalGBufferRenderPass_TypeDefinitionIndex = 32623;

	class DecalGBufferRenderPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::FilteringSettings* m_FilteringSettings; // 0xD8
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0xF0
		Il2CppObject* m_ShaderTagIdList; // 0xF8
		::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* m_DrawSystem; // 0x100
		::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* m_Settings; // 0x108
		::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights; // 0x110
		::Il2CppArray<::System::Object*>* m_GbufferAttachments; // 0x118

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::Universal::Internal::DeferredLights* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::DeferredLights*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_SETUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* arg, ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*, ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALGBUFFERRENDERPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

	};
}

