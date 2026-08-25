#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class Renderer2DData; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class FilteringSettings&; }
namespace UnityEngine::Rendering { class DrawingSettings&; }
namespace UnityEngine { class RenderTextureDescriptor&; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class SortingSettings&; }
namespace UnityEngine::Rendering::Universal { class RenderingData; }
namespace UnityEngine::Rendering { class RenderBufferStoreAction; }
namespace UnityEngine::Rendering { class DrawingSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_DRAWLAYERBATCHES_OFFSET UNITYSDK_OFFSET(0xA0178E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_GETTRANSPARENCYSORTINGMODE_OFFSET UNITYSDK_OFFSET(0xA01B5D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_COPYCAMERASORTINGLAYERRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA01A7C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_RENDER_OFFSET UNITYSDK_OFFSET(0xA01A540)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_UNITYENGINE.RENDERING.UNIVERSAL.IRENDERPASS2D.GET_RENDERERDATA_OFFSET UNITYSDK_OFFSET(0xA01B890)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA01B8A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_DETERMINEWHENTORESOLVE_OFFSET UNITYSDK_OFFSET(0xA01A000)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA01BE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_GETCAMERASORTINGLAYERBOUNDSINDEX_OFFSET UNITYSDK_OFFSET(0xA01A440)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA01BED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA01DA40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Render2DLightingPass_TypeDefinitionIndex = 32481;

	class Render2DLightingPass : public Il2CppObject
	{
	public:
		::System::Int32 k_HDREmulationScaleID; // 0x0
		::System::Int32 k_InverseHDREmulationScaleID; // 0x4
		::System::Int32 k_UseSceneLightingID; // 0x8
		::System::Int32 k_RendererColorID; // 0xC
		::System::Int32 k_CameraSortingLayerTextureID; // 0x10
		::Il2CppArray<::System::Object*>* k_ShapeLightTextureIDs; // 0x18
		::UnityEngine::Rendering::ShaderTagId* k_CombinedRenderingPassName; // 0x20
		::UnityEngine::Rendering::ShaderTagId* k_NormalsRenderingPassName; // 0x24
		::UnityEngine::Rendering::ShaderTagId* k_LegacyPassName; // 0x28
		Il2CppObject* k_ShaderTags; // 0x30
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDrawLights; // 0x38
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDrawLightTextures; // 0x40
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDrawRenderers; // 0x48
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingDrawLayerBatch; // 0x50
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerUnlit; // 0x58
		::UnityEngine::Material* m_BlitMaterial; // 0xD8
		::UnityEngine::Material* m_SamplingMaterial; // 0xE0
		::UnityEngine::Rendering::Universal::Renderer2DData* m_Renderer2DData; // 0xE8
		::System::Boolean m_NeedsDepth; // 0xF0
		::System::Int16 m_CameraSortingLayerBoundsIndex; // 0xF2

		::System::Int32 DrawLayerBatches(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::Rendering::DrawingSettings&* arg, ::UnityEngine::RenderTextureDescriptor&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::Rendering::DrawingSettings&*, ::UnityEngine::RenderTextureDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_DRAWLAYERBATCHES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetTransparencySortingMode(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::SortingSettings&* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::SortingSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_GETTRANSPARENCYSORTINGMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CopyCameraSortingLayerRenderTexture(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_COPYCAMERASORTINGLAYERRENDERTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Rendering::FilteringSettings&* arg, ::UnityEngine::Rendering::DrawingSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Rendering::FilteringSettings&*, ::UnityEngine::Rendering::DrawingSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_RENDER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Renderer2DData* UnityEngine.Rendering.Universal.IRenderPass2D.get_rendererData()
		{
			return (return (::UnityEngine::Rendering::Universal::Renderer2DData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_UNITYENGINE.RENDERING.UNIVERSAL.IRENDERPASS2D.GET_RENDERERDATA_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void DetermineWhenToResolve(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_DETERMINEWHENTORESOLVE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::Renderer2DData* arg, ::UnityEngine::Material* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int16 GetCameraSortingLayerBoundsIndex()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_GETCAMERASORTINGLAYERBOUNDSINDEX_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Setup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDER2DLIGHTINGPASS_SETUP_OFFSET))(arg, nullptr);
		}

	};
}

