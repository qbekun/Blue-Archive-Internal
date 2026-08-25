#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MXBlurEffect; }
namespace UnityEngine::Rendering::Universal { class MXGlitch; }
namespace UnityEngine::Rendering::Universal { class MXSpeedline; }
namespace UnityEngine::Rendering::Universal { class MXThreshold; }
namespace UnityEngine::Rendering::Universal { class MXInverse; }
namespace UnityEngine::Rendering::Universal { class MXChromaticAberration; }
namespace UnityEngine::Rendering::Universal { class MXVignette; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }
namespace UnityEngine::Rendering::Universal { class Bloom; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }
namespace UnityEngine::Rendering::Universal { class Vignette; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }
namespace UnityEngine::Rendering::Universal { class Tonemapping; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class VolumeStack&; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer&; }
namespace UnityEngine::Rendering { class CommandBuffer&; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier&; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderPassEvent; }
namespace UnityEngine { class RenderTextureDescriptor&; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle&; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering::Universal { class CameraData; }
namespace UnityEngine::Rendering { class BuiltinRenderTextureType; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXPOSTPROCESSVOLUMECHECK_OFFSET UNITYSDK_OFFSET(0xA0C6C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXSWAP_OFFSET UNITYSDK_OFFSET(0xA0C6DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXGETDESTINATION_OFFSET UNITYSDK_OFFSET(0xA0C6F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXBLURPROCESS_OFFSET UNITYSDK_OFFSET(0xA0C7450)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXGLITCHPROCESS_OFFSET UNITYSDK_OFFSET(0xA0C80B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXSPEEDLINEPROCESS_OFFSET UNITYSDK_OFFSET(0xA0C88C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXUBERPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xA0C9280)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBLUREFFECT_OFFSET UNITYSDK_OFFSET(0xA0C7700)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGLITCH_OFFSET UNITYSDK_OFFSET(0xA0C8360)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSPEEDLINE_OFFSET UNITYSDK_OFFSET(0xA0C8B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_INITMXUBERPOST_OFFSET UNITYSDK_OFFSET(0xA0C9570)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPMXUBERPOST_OFFSET UNITYSDK_OFFSET(0xA0CA3C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0xA0C95B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET UNITYSDK_OFFSET(0xA0C9AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA0C97C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPINVERSE_OFFSET UNITYSDK_OFFSET(0xA0C9A10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMXUBERPOST_OFFSET UNITYSDK_OFFSET(0xA0C9E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0CA3D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA0CAAD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0CABE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET UNITYSDK_OFFSET(0xA0CAD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFINALPASS_OFFSET UNITYSDK_OFFSET(0xA0CAF20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA0CAFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA0CB270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RESETHISTORY_OFFSET UNITYSDK_OFFSET(0xA0CB3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CANRUNONTILE_OFFSET UNITYSDK_OFFSET(0xA0CB3B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0CB3C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOMPATIBLEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA0C73A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOMPATIBLEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA0D0C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_REQUIRESRGBCONVERSIONBLITTOBACKBUFFER_OFFSET UNITYSDK_OFFSET(0xA0D0CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLIT_OFFSET UNITYSDK_OFFSET(0xA0CA0A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWFULLSCREENMESH_OFFSET UNITYSDK_OFFSET(0xA0D0D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDER_OFFSET UNITYSDK_OFFSET(0xA0CCEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLITDSTDISCARDCONTENT_OFFSET UNITYSDK_OFFSET(0xA0C9FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSUBPIXELMORPHOLOGICALANTIALIASING_OFFSET UNITYSDK_OFFSET(0xA0D14F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0xA0D21B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0xA0D5E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPAREBOKEHKERNEL_OFFSET UNITYSDK_OFFSET(0xA0D7C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET UNITYSDK_OFFSET(0xA0D86C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBOKEHDEPTHOFFIELD_OFFSET UNITYSDK_OFFSET(0xA0D6F60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETLENSFLARELIGHTATTENUATION_OFFSET UNITYSDK_OFFSET(0xA0D86E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOLENSFLAREDATADRIVEN_OFFSET UNITYSDK_OFFSET(0xA0D3340)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMOTIONBLUR_OFFSET UNITYSDK_OFFSET(0xA0D2330)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPANINIPROJECTION_OFFSET UNITYSDK_OFFSET(0xA0D2E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCVIEWEXTENTS_OFFSET UNITYSDK_OFFSET(0xA0D8910)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCCROPEXTENTS_OFFSET UNITYSDK_OFFSET(0xA0D8980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPBLOOM_OFFSET UNITYSDK_OFFSET(0xA0D3B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDISTORTION_OFFSET UNITYSDK_OFFSET(0xA0D4F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0xA0D5430)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET UNITYSDK_OFFSET(0xA0D5560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCOLORGRADING_OFFSET UNITYSDK_OFFSET(0xA0D57F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGRAIN_OFFSET UNITYSDK_OFFSET(0xA0D5CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDITHERING_OFFSET UNITYSDK_OFFSET(0xA0D5D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDERFINALPASS_OFFSET UNITYSDK_OFFSET(0xA0CB940)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0D8A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETSOURCE|85_0_OFFSET UNITYSDK_OFFSET(0xA0D0EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETDESTINATION|85_1_OFFSET UNITYSDK_OFFSET(0xA0D0F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__SWAP|85_2_OFFSET UNITYSDK_OFFSET(0xA0D13A0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_TypeDefinitionIndex = 32886;

	class PostProcessPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::MXBlurEffect* MXBlurEffectStack; // 0xD8
		::UnityEngine::Rendering::Universal::MXGlitch* MXGlitchStack; // 0xE0
		::UnityEngine::Rendering::Universal::MXSpeedline* MXSpeedlineStack; // 0xE8
		::UnityEngine::Rendering::Universal::MXThreshold* MXThresholdStack; // 0xF0
		::UnityEngine::Rendering::Universal::MXInverse* MXInverseStack; // 0xF8
		::UnityEngine::Rendering::Universal::MXChromaticAberration* MXChromaticAberrationStack; // 0x100
		::UnityEngine::Rendering::Universal::MXVignette* MXVignetteStack; // 0x108
		::System::Boolean m_UseMXUberPost; // 0x110
		::UnityEngine::RenderTextureDescriptor* m_Descriptor; // 0x114
		::UnityEngine::Rendering::RenderTargetIdentifier* m_Source; // 0x148
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_Destination; // 0x170
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_Depth; // 0x1A0
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_InternalLut; // 0x1D0
		::System::String* k_RenderPostProcessingTag; // 0x0
		::System::String* k_RenderFinalPostProcessingTag; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingRenderPostProcessing; // 0x0
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingRenderFinalPostProcessing; // 0x8
		MaterialLibrary* m_Materials; // 0x200
		::UnityEngine::Rendering::Universal::PostProcessData* m_Data; // 0x208
		::UnityEngine::Rendering::Universal::DepthOfField* m_DepthOfField; // 0x210
		::UnityEngine::Rendering::Universal::MotionBlur* m_MotionBlur; // 0x218
		::UnityEngine::Rendering::Universal::PaniniProjection* m_PaniniProjection; // 0x220
		::UnityEngine::Rendering::Universal::Bloom* m_Bloom; // 0x228
		::UnityEngine::Rendering::Universal::LensDistortion* m_LensDistortion; // 0x230
		::UnityEngine::Rendering::Universal::ChromaticAberration* m_ChromaticAberration; // 0x238
		::UnityEngine::Rendering::Universal::Vignette* m_Vignette; // 0x240
		::UnityEngine::Rendering::Universal::ColorLookup* m_ColorLookup; // 0x248
		::UnityEngine::Rendering::Universal::ColorAdjustments* m_ColorAdjustments; // 0x250
		::UnityEngine::Rendering::Universal::Tonemapping* m_Tonemapping; // 0x258
		::UnityEngine::Rendering::Universal::FilmGrain* m_FilmGrain; // 0x260
		::System::Int32 k_MaxPyramidSize; // 0x0
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_DefaultHDRFormat; // 0x268
		::System::Boolean m_UseRGBM; // 0x26C
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_SMAAEdgeFormat; // 0x270
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_GaussianCoCFormat; // 0x274
		::Il2CppArray<::System::Object*>* m_PrevViewProjM; // 0x278
		::System::Boolean m_ResetHistory; // 0x280
		::System::Int32 m_DitheringTextureIndex; // 0x284
		::Il2CppArray<::System::Object*>* m_MRT2; // 0x288
		::Il2CppArray<::System::Object*>* m_BokehKernel; // 0x290
		::System::Int32 m_BokehHash; // 0x298
		::System::Single m_BokehMaxRadius; // 0x29C
		::System::Single m_BokehRCPAspect; // 0x2A0
		::System::Boolean m_IsFinalPass; // 0x2A4
		::System::Boolean m_HasFinalPass; // 0x2A5
		::System::Boolean m_EnableSRGBConversionIfNeeded; // 0x2A6
		::System::Boolean m_UseDrawProcedural; // 0x2A7
		::System::Boolean m_UseFastSRGBLinearConversion; // 0x2A8
		::System::Boolean m_ResolveToScreen; // 0x2A9
		::System::Boolean m_UseSwapBuffer; // 0x2AA
		::System::Boolean m_hasExternalPostPasses; // 0x2AB
		::UnityEngine::Material* m_BlitMaterial; // 0x2B0
		::Il2CppArray<::System::Object*>* viewProjMatrixStereo; // 0x10

		::System::Void MXPostProcessVolumeCheck(::UnityEngine::Rendering::VolumeStack&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::VolumeStack&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXPOSTPROCESSVOLUMECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void MXSwap(::UnityEngine::Rendering::Universal::ScriptableRenderer&* arg, ::UnityEngine::Rendering::CommandBuffer&* arg, int32_t&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer&*, ::UnityEngine::Rendering::CommandBuffer&*, int32_t&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXSWAP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* MXGetDestination(::UnityEngine::Rendering::CommandBuffer&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, bool&* arg, bool&* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::UnityEngine::Rendering::CommandBuffer&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXGETDESTINATION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MXBlurProcess(::UnityEngine::Rendering::Universal::ScriptableRenderer&* arg, ::UnityEngine::Rendering::CommandBuffer&* arg, int32_t&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, bool&* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer&*, ::UnityEngine::Rendering::CommandBuffer&*, int32_t&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXBLURPROCESS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MXGlitchProcess(::UnityEngine::Rendering::Universal::ScriptableRenderer&* arg, ::UnityEngine::Rendering::CommandBuffer&* arg, int32_t&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, bool&* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer&*, ::UnityEngine::Rendering::CommandBuffer&*, int32_t&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXGLITCHPROCESS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MXSpeedlineProcess(::UnityEngine::Rendering::Universal::ScriptableRenderer&* arg, ::UnityEngine::Rendering::CommandBuffer&* arg, int32_t&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, bool&* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer&*, ::UnityEngine::Rendering::CommandBuffer&*, int32_t&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXSPEEDLINEPROCESS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MXUberPostProcess(::UnityEngine::Rendering::Universal::ScriptableRenderer&* arg, ::UnityEngine::Rendering::CommandBuffer&* arg, int32_t&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, ::UnityEngine::Rendering::RenderTargetIdentifier&* arg, bool&* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer&*, ::UnityEngine::Rendering::CommandBuffer&*, int32_t&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, ::UnityEngine::Rendering::RenderTargetIdentifier&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_MXUBERPOSTPROCESS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DoBlurEffect(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::Universal::ScriptableRenderer&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::Universal::ScriptableRenderer&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBLUREFFECT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DoGlitch(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGLITCH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DoSpeedline(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSPEEDLINE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitMXUberPost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_INITMXUBERPOST_OFFSET))(nullptr);
		}

		::System::Void SetupMXUberPost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPMXUBERPOST_OFFSET))(nullptr);
		}

		::System::Void SetupChromaticAberration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET))(nullptr);
		}

		::System::Void SetupVignette()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET))(nullptr);
		}

		::System::Void SetupThreshold()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void SetupInverse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPINVERSE_OFFSET))(nullptr);
		}

		::System::Void DoMXUberPost(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMXUBERPOST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::RenderPassEvent* arg, ::UnityEngine::Rendering::Universal::PostProcessData* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderPassEvent*, ::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor&* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor&*, ::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::System::Boolean, ::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor&* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg, ::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor&*, ::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::UnityEngine::Rendering::Universal::RenderTargetHandle*, ::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUP_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetupFinalPass(::UnityEngine::Rendering::Universal::RenderTargetHandle&* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderTargetHandle&*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPFINALPASS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void ResetHistory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RESETHISTORY_OFFSET))(nullptr);
		}

		::System::Boolean CanRunOnTile()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CANRUNONTILE_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* GetCompatibleDescriptor()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOMPATIBLEDESCRIPTOR_OFFSET))(nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* GetCompatibleDescriptor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETCOMPATIBLEDESCRIPTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean RequireSRGBConversionBlitToBackBuffer(::UnityEngine::Rendering::Universal::CameraData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::CameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_REQUIRESRGBCONVERSIONBLITTOBACKBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void Blit(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawFullscreenMesh(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DRAWFULLSCREENMESH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Render(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::BuiltinRenderTextureType* BlitDstDiscardContent(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			return (return (::UnityEngine::Rendering::BuiltinRenderTextureType*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_BLITDSTDISCARDCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoSubpixelMorphologicalAntialiasing(::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOSUBPIXELMORPHOLOGICALANTIALIASING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DoDepthOfField(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DODEPTHOFFIELD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DoGaussianDepthOfField(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOGAUSSIANDEPTHOFFIELD_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareBokehKernel(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_PREPAREBOKEHKERNEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetMaxBokehRadiusInPixels(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETMAXBOKEHRADIUSINPIXELS_OFFSET))(arg, nullptr);
		}

		::System::Void DoBokehDepthOfField(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOBOKEHDEPTHOFFIELD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single GetLensFlareLightAttenuation(::UnityEngine::Light* arg, ::UnityEngine::Camera* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_GETLENSFLARELIGHTATTENUATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DoLensFlareDatadriven(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::System::Boolean, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOLENSFLAREDATADRIVEN_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DoMotionBlur(::UnityEngine::Rendering::Universal::CameraData* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOMOTIONBLUR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DoPaniniProjection(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_DOPANINIPROJECTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* CalcViewExtents(::UnityEngine::Camera* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCVIEWEXTENTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* CalcCropExtents(::UnityEngine::Camera* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Camera*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_CALCCROPEXTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupBloom(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPBLOOM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetupLensDistortion(::UnityEngine::Material* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPLENSDISTORTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupChromaticAberration(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCHROMATICABERRATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetupVignette(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPVIGNETTE_OFFSET))(arg, nullptr);
		}

		::System::Void SetupColorGrading(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPCOLORGRADING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetupGrain(::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPGRAIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupDithering(::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_SETUPDITHERING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenderFinalPass(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_RENDERFINALPASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* _Render_g__GetSource|85_0(<>c__DisplayClass85_0&* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(<>c__DisplayClass85_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETSOURCE|85_0_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* _Render_g__GetDestination|85_1(<>c__DisplayClass85_0&* arg)
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(<>c__DisplayClass85_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__GETDESTINATION|85_1_OFFSET))(arg, nullptr);
		}

		::System::Void _Render_g__Swap|85_2(::UnityEngine::Rendering::Universal::ScriptableRenderer&* arg, <>c__DisplayClass85_0&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ScriptableRenderer&*, <>c__DisplayClass85_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS__RENDER_G__SWAP|85_2_OFFSET))(arg, arg, nullptr);
		}

	};
}

