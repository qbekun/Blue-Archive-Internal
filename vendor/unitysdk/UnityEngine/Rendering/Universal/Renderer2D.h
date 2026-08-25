#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class Render2DLightingPass; }
namespace UnityEngine::Rendering::Universal { class PixelPerfectBackgroundPass; }
namespace UnityEngine::Rendering::Universal::Internal { class FinalBlitPass; }
namespace UnityEngine::Rendering::Universal { class Light2DCullResult; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class Renderer2DData; }
namespace UnityEngine::Rendering::Universal { class PostProcessPasses; }
namespace UnityEngine::Rendering::Universal::Internal { class PostProcessPass; }
namespace UnityEngine::Rendering::Universal::Internal { class ColorGradingLutPass; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle&; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0228D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_CREATECOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0xA022CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_FINALPOSTPROCESSPASS_OFFSET UNITYSDK_OFFSET(0xA022CC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_COLORGRADINGLUTPASS_OFFSET UNITYSDK_OFFSET(0xA022CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA022CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_COLORGRADINGLUTHANDLE_OFFSET UNITYSDK_OFFSET(0xA022D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_CREATERENDERTEXTURES_OFFSET UNITYSDK_OFFSET(0xA022DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_AFTERPOSTPROCESSCOLORHANDLE_OFFSET UNITYSDK_OFFSET(0xA023320)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GETRENDERER2DDATA_OFFSET UNITYSDK_OFFSET(0xA023350)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA023360)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_POSTPROCESSPASS_OFFSET UNITYSDK_OFFSET(0xA023370)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_CREATEDEPTHTEXTURE_OFFSET UNITYSDK_OFFSET(0xA023380)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_SUPPORTEDCAMERASTACKINGTYPES_OFFSET UNITYSDK_OFFSET(0xA023390)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0xA0233A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0xA023450)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_SETUP_OFFSET UNITYSDK_OFFSET(0xA023500)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Renderer2D_TypeDefinitionIndex = 32491;

	class Renderer2D : public Il2CppObject
	{
	public:
		::System::Int32 k_DepthBufferBits; // 0x0
		::UnityEngine::Rendering::Universal::Render2DLightingPass* m_Render2DLightingPass; // 0x190
		::UnityEngine::Rendering::Universal::PixelPerfectBackgroundPass* m_PixelPerfectBackgroundPass; // 0x198
		::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_FinalBlitPass; // 0x1A0
		::UnityEngine::Rendering::Universal::Light2DCullResult* m_LightCullResult; // 0x1A8
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x0
		::System::Boolean m_UseDepthStencilBuffer; // 0x1B0
		::System::Boolean m_CreateColorTexture; // 0x1B1
		::System::Boolean m_CreateDepthTexture; // 0x1B2
		::UnityEngine::Rendering::Universal::RenderTargetHandle* k_ColorTextureHandle; // 0x1B8
		::UnityEngine::Rendering::Universal::RenderTargetHandle* k_DepthTextureHandle; // 0x1E8
		::UnityEngine::Material* m_BlitMaterial; // 0x218
		::UnityEngine::Material* m_SamplingMaterial; // 0x220
		::UnityEngine::Rendering::Universal::Renderer2DData* m_Renderer2DData; // 0x228
		::UnityEngine::Rendering::Universal::PostProcessPasses* m_PostProcessPasses; // 0x230

		::System::Void .ctor(::UnityEngine::Rendering::Universal::Renderer2DData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_createColorTexture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_CREATECOLORTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_finalPostProcessPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::PostProcessPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_FINALPOSTPROCESSPASS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_COLORGRADINGLUTPASS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_colorGradingLutHandle()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_COLORGRADINGLUTHANDLE_OFFSET))(nullptr);
		}

		::System::Void CreateRenderTextures(::UnityEngine::Rendering::Universal::CameraData&* arg, ::System::Boolean arg, ::UnityEngine::FilterMode* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::System::Boolean, ::UnityEngine::FilterMode*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_CREATERENDERTEXTURES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_afterPostProcessColorHandle()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_AFTERPOSTPROCESSCOLORHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Renderer2DData* GetRenderer2DData()
		{
			return (return (::UnityEngine::Rendering::Universal::Renderer2DData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GETRENDERER2DDATA_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_DISPOSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_postProcessPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::PostProcessPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_POSTPROCESSPASS_OFFSET))(nullptr);
		}

		::System::Boolean get_createDepthTexture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_GET_CREATEDEPTHTEXTURE_OFFSET))(nullptr);
		}

		::System::Int32 SupportedCameraStackingTypes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_SUPPORTEDCAMERASTACKINGTYPES_OFFSET))(nullptr);
		}

		::System::Void SetupCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters&* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_SETUPCULLINGPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishRendering(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_FINISHRENDERING_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2D_SETUP_OFFSET))(arg, arg, nullptr);
		}

	};
}

