#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class SharedDecalEntityManager; }
namespace UnityEngine::Rendering::Universal { class DecalSettings; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering::Universal { class DecalTechnique; }
namespace UnityEngine::Rendering::Universal { class DBufferSettings; }
namespace UnityEngine::Rendering::Universal { class DecalScreenSpaceSettings; }
namespace UnityEngine::Rendering::Universal::Internal { class CopyDepthPass; }
namespace UnityEngine::Rendering::Universal { class DecalPreviewPass; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering::Universal { class DecalUpdateCachedSystem; }
namespace UnityEngine::Rendering::Universal { class DecalUpdateCullingGroupSystem; }
namespace UnityEngine::Rendering::Universal { class DecalUpdateCulledSystem; }
namespace UnityEngine::Rendering::Universal { class DecalCreateDrawCallSystem; }
namespace UnityEngine::Rendering::Universal { class DecalDrawErrorSystem; }
namespace UnityEngine::Rendering::Universal { class DBufferRenderPass; }
namespace UnityEngine::Rendering::Universal { class DecalForwardEmissivePass; }
namespace UnityEngine::Rendering::Universal { class DecalDrawDBufferSystem; }
namespace UnityEngine::Rendering::Universal { class DecalDrawFowardEmissiveSystem; }
namespace UnityEngine::Rendering::Universal { class DecalScreenSpaceRenderPass; }
namespace UnityEngine::Rendering::Universal { class DecalDrawScreenSpaceSystem; }
namespace UnityEngine::Rendering::Universal { class DecalSkipCulledSystem; }
namespace UnityEngine::Rendering::Universal { class DecalGBufferRenderPass; }
namespace UnityEngine::Rendering::Universal { class DecalDrawGBufferSystem; }
namespace UnityEngine::Rendering::Universal::Internal { class DeferredLights; }
namespace UnityEngine::Rendering::Universal { class ScriptableRendererData; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GET_SHAREDDECALENTITYMANAGER_OFFSET UNITYSDK_OFFSET(0xA068800)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GET_INTERMEDIATERENDERING_OFFSET UNITYSDK_OFFSET(0xA068850)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_CREATE_OFFSET UNITYSDK_OFFSET(0xA068860)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETDBUFFERSETTINGS_OFFSET UNITYSDK_OFFSET(0xA0688D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETSCREENSPACESETTINGS_OFFSET UNITYSDK_OFFSET(0xA068950)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETTECHNIQUE_OFFSET UNITYSDK_OFFSET(0xA0689D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETTECHNIQUE_OFFSET UNITYSDK_OFFSET(0xA068C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETTECHNIQUE_OFFSET UNITYSDK_OFFSET(0xA068AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_ISAUTOMATICDBUFFER_OFFSET UNITYSDK_OFFSET(0xA068CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_RECREATESYSTEMSIFNEEDED_OFFSET UNITYSDK_OFFSET(0xA068D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_ONCAMERAPRECULL_OFFSET UNITYSDK_OFFSET(0xA069600)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0xA0696F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_SUPPORTSNATIVERENDERPASS_OFFSET UNITYSDK_OFFSET(0xA069C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA069C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_CHANGEADAPTIVEPERFORMANCEDRAWDISTANCES_OFFSET UNITYSDK_OFFSET(0xA069DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA069DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA069E50)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalRendererFeature_TypeDefinitionIndex = 32729;

	class DecalRendererFeature : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::SharedDecalEntityManager* _sharedDecalEntityManager_k__BackingField; // 0x0
		::UnityEngine::Rendering::Universal::DecalSettings* m_Settings; // 0x20
		::UnityEngine::Shader* m_CopyDepthPS; // 0x28
		::UnityEngine::Shader* m_DBufferClear; // 0x30
		::UnityEngine::Rendering::Universal::DecalTechnique* m_Technique; // 0x38
		::UnityEngine::Rendering::Universal::DBufferSettings* m_DBufferSettings; // 0x40
		::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* m_ScreenSpaceSettings; // 0x48
		::System::Boolean m_RecreateSystems; // 0x50
		::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_CopyDepthPass; // 0x58
		::UnityEngine::Rendering::Universal::DecalPreviewPass* m_DecalPreviewPass; // 0x60
		::UnityEngine::Material* m_CopyDepthMaterial; // 0x68
		::UnityEngine::Rendering::Universal::DecalEntityManager* m_DecalEntityManager; // 0x70
		::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* m_DecalUpdateCachedSystem; // 0x78
		::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* m_DecalUpdateCullingGroupSystem; // 0x80
		::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* m_DecalUpdateCulledSystem; // 0x88
		::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* m_DecalCreateDrawCallSystem; // 0x90
		::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* m_DrawErrorSystem; // 0x98
		::UnityEngine::Rendering::Universal::DBufferRenderPass* m_DBufferRenderPass; // 0xA0
		::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* m_ForwardEmissivePass; // 0xA8
		::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* m_DecalDrawDBufferSystem; // 0xB0
		::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* m_DecalDrawForwardEmissiveSystem; // 0xB8
		::UnityEngine::Material* m_DBufferClearMaterial; // 0xC0
		::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* m_ScreenSpaceDecalRenderPass; // 0xC8
		::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* m_DecalDrawScreenSpaceSystem; // 0xD0
		::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* m_DecalSkipCulledSystem; // 0xD8
		::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* m_GBufferRenderPass; // 0xE0
		::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* m_DrawGBufferSystem; // 0xE8
		::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights; // 0xF0

		::UnityEngine::Rendering::Universal::SharedDecalEntityManager* get_sharedDecalEntityManager()
		{
			return (return (::UnityEngine::Rendering::Universal::SharedDecalEntityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GET_SHAREDDECALENTITYMANAGER_OFFSET))(nullptr);
		}

		::System::Boolean get_intermediateRendering()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GET_INTERMEDIATERENDERING_OFFSET))(nullptr);
		}

		::System::Void Create()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DBufferSettings* GetDBufferSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DBufferSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETDBUFFERSETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* GetScreenSpaceSettings()
		{
			return (return (::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETSCREENSPACESETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalTechnique* GetTechnique(::UnityEngine::Rendering::Universal::ScriptableRendererData* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::DecalTechnique*(*)(::UnityEngine::Rendering::Universal::ScriptableRendererData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETTECHNIQUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalTechnique* GetTechnique(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::DecalTechnique*(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETTECHNIQUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalTechnique* GetTechnique(::System::Boolean arg)
		{
			return (return (::UnityEngine::Rendering::Universal::DecalTechnique*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_GETTECHNIQUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAutomaticDBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_ISAUTOMATICDBUFFER_OFFSET))(nullptr);
		}

		::System::Void RecreateSystemsIfNeeded(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_RECREATESYSTEMSIFNEEDED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_ONCAMERAPRECULL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_ADDRENDERPASSES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SupportsNativeRenderPass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_SUPPORTSNATIVERENDERPASS_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeAdaptivePerformanceDrawDistances()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_CHANGEADAPTIVEPERFORMANCEDRAWDISTANCES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALRENDERERFEATURE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

