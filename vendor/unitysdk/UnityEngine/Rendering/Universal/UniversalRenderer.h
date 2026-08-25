#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal { class DepthOnlyPass; }
namespace UnityEngine::Rendering::Universal::Internal { class DepthNormalOnlyPass; }
namespace UnityEngine::Rendering::Universal::Internal { class CopyDepthPass; }
namespace UnityEngine::Rendering::Universal::Internal { class MotionVectorRenderPass; }
namespace UnityEngine::Rendering::Universal::Internal { class MainLightShadowCasterPass; }
namespace UnityEngine::Rendering::Universal::Internal { class AdditionalLightsShadowCasterPass; }
namespace UnityEngine::Rendering::Universal::Internal { class GBufferPass; }
namespace UnityEngine::Rendering::Universal::Internal { class TileDepthRangePass; }
namespace UnityEngine::Rendering::Universal::Internal { class DeferredPass; }
namespace UnityEngine::Rendering::Universal::Internal { class DrawObjectsPass; }
namespace UnityEngine::Rendering::Universal { class DrawSkyboxPass; }
namespace UnityEngine::Rendering::Universal::Internal { class CopyColorPass; }
namespace UnityEngine::Rendering::Universal { class TransparentSettingsPass; }
namespace UnityEngine::Rendering::Universal { class InvokeOnRenderObjectCallbackPass; }
namespace UnityEngine::Rendering::Universal::Internal { class FinalBlitPass; }
namespace UnityEngine::Rendering::Universal { class CapturePass; }
namespace UnityEngine::Rendering::Universal { class XROcclusionMeshPass; }
namespace UnityEngine::Rendering::Universal::Internal { class RenderTargetBufferSystem; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine::Rendering::Universal::Internal { class ForwardLights; }
namespace UnityEngine::Rendering::Universal::Internal { class DeferredLights; }
namespace UnityEngine::Rendering::Universal { class RenderingMode; }
namespace UnityEngine::Rendering::Universal { class DepthPrimingMode; }
namespace UnityEngine::Rendering { class StencilState; }
namespace UnityEngine::Rendering::Universal { class LightCookieManager; }
namespace UnityEngine::Rendering::Universal { class IntermediateTextureMode; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class PostProcessPasses; }
namespace UnityEngine::Rendering::Universal { class UniversalRendererData; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters&; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class PostProcessPass; }
namespace UnityEngine::Rendering::Universal::Internal { class ColorGradingLutPass; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SET_RENDERWIDTH_OFFSET UNITYSDK_OFFSET(0xA0788E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA078930)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_COLORGRADINGLUT_OFFSET UNITYSDK_OFFSET(0xA07A350)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SETUPFINALPASSDEBUG_OFFSET UNITYSDK_OFFSET(0xA07A380)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_ACCURATEGBUFFERNORMALS_OFFSET UNITYSDK_OFFSET(0xA07A6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0xA07A6E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_ENQUEUEDEFERRED_OFFSET UNITYSDK_OFFSET(0xA07AC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_DEPTHPRIMINGMODE_OFFSET UNITYSDK_OFFSET(0xA07B000)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0xA07B010)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_POSTPROCESSPASS_OFFSET UNITYSDK_OFFSET(0xA07B250)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SET_DEPTHPRIMINGMODE_OFFSET UNITYSDK_OFFSET(0xA07B260)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_COLORGRADINGLUTPASS_OFFSET UNITYSDK_OFFSET(0xA07B270)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_DEFERREDLIGHTS_OFFSET UNITYSDK_OFFSET(0xA07B280)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0xA07B290)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GETCAMERACOLORFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0xA07B330)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_ACTUALRENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xA07AB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_CREATECAMERARENDERTARGET_OFFSET UNITYSDK_OFFSET(0xA07B3B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_ENABLESWAPBUFFERMSAA_OFFSET UNITYSDK_OFFSET(0xA07BE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA07BEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_RENDERWIDTH_OFFSET UNITYSDK_OFFSET(0xA07BFE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_REQUIRESINTERMEDIATECOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0xA07C030)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GETRENDERPASSINPUTS_OFFSET UNITYSDK_OFFSET(0xA07C480)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SWAPCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0xA07C650)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SUPPORTEDCAMERASTACKINGTYPES_OFFSET UNITYSDK_OFFSET(0xA07C9E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_CANCOPYDEPTH_OFFSET UNITYSDK_OFFSET(0xA07CA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_ISGLESDEVICE_OFFSET UNITYSDK_OFFSET(0xA07BE40)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_PLATFORMREQUIRESEXPLICITMSAARESOLVE_OFFSET UNITYSDK_OFFSET(0xA07C2C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA07CAC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SETUP_OFFSET UNITYSDK_OFFSET(0xA07CBF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_RENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xA07FFE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SET_RENDERHEIGHT_OFFSET UNITYSDK_OFFSET(0xA07FFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_RENDERHEIGHT_OFFSET UNITYSDK_OFFSET(0xA080040)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_FINALPOSTPROCESSPASS_OFFSET UNITYSDK_OFFSET(0xA07FFD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderer_TypeDefinitionIndex = 32785;

	class UniversalRenderer : public Il2CppObject
	{
	public:
		::System::Int32 k_DepthStencilBufferBits; // 0x0
		Il2CppObject* k_DepthNormalsOnly; // 0x0
		::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* m_DepthPrepass; // 0x190
		::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* m_DepthNormalPrepass; // 0x198
		::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_PrimedDepthCopyPass; // 0x1A0
		::UnityEngine::Rendering::Universal::Internal::MotionVectorRenderPass* m_MotionVectorPass; // 0x1A8
		::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* m_MainLightShadowCasterPass; // 0x1B0
		::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass; // 0x1B8
		::UnityEngine::Rendering::Universal::Internal::GBufferPass* m_GBufferPass; // 0x1C0
		::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_GBufferCopyDepthPass; // 0x1C8
		::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* m_TileDepthRangePass; // 0x1D0
		::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* m_TileDepthRangeExtraPass; // 0x1D8
		::UnityEngine::Rendering::Universal::Internal::DeferredPass* m_DeferredPass; // 0x1E0
		::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardOnlyPass; // 0x1E8
		::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardPass; // 0x1F0
		::UnityEngine::Rendering::Universal::DrawSkyboxPass* m_DrawSkyboxPass; // 0x1F8
		::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_CopyDepthPass; // 0x200
		::UnityEngine::Rendering::Universal::Internal::CopyColorPass* m_CopyColorPass; // 0x208
		::UnityEngine::Rendering::Universal::TransparentSettingsPass* m_TransparentSettingsPass; // 0x210
		::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderTransparentForwardPass; // 0x218
		::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* m_OnRenderObjectCallbackPass; // 0x220
		::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_FinalBlitPass; // 0x228
		::UnityEngine::Rendering::Universal::CapturePass* m_CapturePass; // 0x230
		::UnityEngine::Rendering::Universal::XROcclusionMeshPass* m_XROcclusionMeshPass; // 0x238
		::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_XRCopyDepthPass; // 0x240
		::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderHairForwardPass; // 0x248
		::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_AfterPostProcessTransparentPass; // 0x250
		::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* m_ColorBufferSystem; // 0x258
		::System::Int32 _RenderWidth_k__BackingField; // 0x8
		::System::Int32 _RenderHeight_k__BackingField; // 0xC
		::UnityEngine::Rendering::Universal::RenderTargetHandle* uiTargetHandle; // 0x260
		::System::Boolean ignoreGameResolution; // 0x290
		::System::Boolean ignoreGamePP; // 0x291
		::UnityEngine::FilterMode* bufferFilterMode; // 0x294
		::System::Single renderScale; // 0x298
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_ActiveCameraColorAttachment; // 0x2A0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_ColorFrontBuffer; // 0x2D0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_ActiveCameraDepthAttachment; // 0x300
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_CameraDepthAttachment; // 0x330
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_DepthTexture; // 0x360
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_NormalsTexture; // 0x390
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_OpaqueColor; // 0x3C0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_DepthInfoTexture; // 0x3F0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_TileDepthInfoTexture; // 0x420
		::UnityEngine::Rendering::Universal::Internal::ForwardLights* m_ForwardLights; // 0x450
		::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights; // 0x458
		::UnityEngine::Rendering::Universal::RenderingMode* m_RenderingMode; // 0x460
		::UnityEngine::Rendering::Universal::DepthPrimingMode* m_DepthPrimingMode; // 0x464
		::System::Boolean m_DepthPrimingRecommended; // 0x468
		::UnityEngine::Rendering::StencilState* m_DefaultStencilState; // 0x469
		::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager; // 0x478
		::UnityEngine::Rendering::Universal::IntermediateTextureMode* m_IntermediateTextureMode; // 0x480
		::UnityEngine::Material* m_BlitMaterial; // 0x488
		::UnityEngine::Material* m_CopyDepthMaterial; // 0x490
		::UnityEngine::Material* m_SamplingMaterial; // 0x498
		::UnityEngine::Material* m_TileDepthInfoMaterial; // 0x4A0
		::UnityEngine::Material* m_TileDeferredMaterial; // 0x4A8
		::UnityEngine::Material* m_StencilDeferredMaterial; // 0x4B0
		::UnityEngine::Material* m_CameraMotionVecMaterial; // 0x4B8
		::UnityEngine::Material* m_ObjectMotionVecMaterial; // 0x4C0
		::UnityEngine::Rendering::Universal::PostProcessPasses* m_PostProcessPasses; // 0x4C8

		::System::Void set_RenderWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SET_RENDERWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRendererData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderTargetHandle* get_colorGradingLut()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderTargetHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_COLORGRADINGLUT_OFFSET))(nullptr);
		}

		::System::Void SetupFinalPassDebug(::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SETUPFINALPASSDEBUG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_accurateGbufferNormals()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_ACCURATEGBUFFERNORMALS_OFFSET))(nullptr);
		}

		::System::Void SetupCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters&* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableCullingParameters&*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SETUPCULLINGPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnqueueDeferred(::UnityEngine::Rendering::Universal::RenderingData&* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_ENQUEUEDEFERRED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DepthPrimingMode* get_depthPrimingMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DepthPrimingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_DEPTHPRIMINGMODE_OFFSET))(nullptr);
		}

		::System::Void FinishRendering(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_FINISHRENDERING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_postProcessPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::PostProcessPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_POSTPROCESSPASS_OFFSET))(nullptr);
		}

		::System::Void set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DepthPrimingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SET_DEPTHPRIMINGMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_COLORGRADINGLUTPASS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::DeferredLights* get_deferredLights()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::DeferredLights*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_DEFERREDLIGHTS_OFFSET))(nullptr);
		}

		::System::Void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SETUPLIGHTS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GETCAMERACOLORFRONTBUFFER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderingMode* get_actualRenderingMode()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_ACTUALRENDERINGMODE_OFFSET))(nullptr);
		}

		::System::Void CreateCameraRenderTarget(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::CameraData&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_CREATECAMERARENDERTARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EnableSwapBufferMSAA(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_ENABLESWAPBUFFERMSAA_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_RenderWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_RENDERWIDTH_OFFSET))(nullptr);
		}

		::System::Boolean RequiresIntermediateColorTexture(::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_REQUIRESINTERMEDIATECOLORTEXTURE_OFFSET))(arg, nullptr);
		}

		RenderPassInputSummary* GetRenderPassInputs(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			return (return (RenderPassInputSummary*(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GETRENDERPASSINPUTS_OFFSET))(arg, nullptr);
		}

		::System::Void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SWAPCOLORBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Int32 SupportedCameraStackingTypes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SUPPORTEDCAMERASTACKINGTYPES_OFFSET))(nullptr);
		}

		::System::Boolean CanCopyDepth(::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_CANCOPYDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGLESDevice()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_ISGLESDEVICE_OFFSET))(nullptr);
		}

		::System::Boolean PlatformRequiresExplicitMsaaResolve()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_PLATFORMREQUIRESEXPLICITMSAARESOLVE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderingMode* get_renderingMode()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_RENDERINGMODE_OFFSET))(nullptr);
		}

		::System::Void set_RenderHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_SET_RENDERHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RenderHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_RENDERHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Internal::PostProcessPass* get_finalPostProcessPass()
		{
			return (return (::UnityEngine::Rendering::Universal::Internal::PostProcessPass*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERER_GET_FINALPOSTPROCESSPASS_OFFSET))(nullptr);
		}

	};
}

