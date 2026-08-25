#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class RenderStateBlock; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering::Universal { class UIRenderPassSettings; }
namespace UnityEngine::Rendering::Universal { class MXBloomSettings; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine { class RenderTextureReadWrite; }
namespace UnityEngine { class FilterMode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GET_DEFAULTHDRRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA05EAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0xA05EAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_BLITSCREEN_OFFSET UNITYSDK_OFFSET(0xA05ED70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA05F320)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GETPROJECTIONMATRIXBYASPECT_OFFSET UNITYSDK_OFFSET(0xA05F350)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_RENDERBLOOM_OFFSET UNITYSDK_OFFSET(0xA05F480)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA0604F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_ONCAMERASETUP_OFFSET UNITYSDK_OFFSET(0xA060520)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_SET_DESTINATION_OFFSET UNITYSDK_OFFSET(0xA060540)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_EXP2_OFFSET UNITYSDK_OFFSET(0xA0604E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA060570)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_ONCAMERACLEANUP_OFFSET UNITYSDK_OFFSET(0xA061C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GETSCREENSPACETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0xA060390)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GET_DESTINATION_OFFSET UNITYSDK_OFFSET(0xA061D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_EXECUTESCREENSHOTCAPTURE_OFFSET UNITYSDK_OFFSET(0xA061A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_CREATECULLINGPLANES_OFFSET UNITYSDK_OFFSET(0xA061DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GET_FULLSCREENTRIANGLE_OFFSET UNITYSDK_OFFSET(0xA05EFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA05DAD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UIRenderPass_TypeDefinitionIndex = 32663;

	class UIRenderPass : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::RenderTargetIdentifier* _source_k__BackingField; // 0xD8
		::UnityEngine::Rendering::RenderTargetIdentifier* _destination_k__BackingField; // 0x100
		::System::Int32 uiRenderTarget; // 0x128
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_TempUIRTHandle; // 0x130
		::UnityEngine::Rendering::Universal::RenderTargetHandle* m_OutputTextureHandle; // 0x160
		::UnityEngine::RenderTextureDescriptor* m_UIRTDescriptor; // 0x190
		::UnityEngine::Rendering::ProfilingSampler* m_PreBlitProfiler; // 0x1C8
		::UnityEngine::Rendering::ProfilingSampler* m_BloomProfiler; // 0x1D0
		Il2CppObject* m_ShaderTagIdList; // 0x1D8
		::UnityEngine::Rendering::RenderStateBlock* m_RenderStateBlock; // 0x1E0
		::UnityEngine::Rendering::RenderStateBlock* m_ZAlwaysRenderStateBlock; // 0x24C
		::System::Int32 uiLayer; // 0x2B8
		::System::Int32 uiAlwaysVisibleLayer; // 0x2BC
		::System::Int32 letterBoxLayer; // 0x2C0
		::System::Int32 uiMask; // 0x2C4
		::System::Int32 uiAlwaysVisibleMask; // 0x2C8
		::System::Int32 letterBoxMask; // 0x2CC
		::UnityEngine::Rendering::FilteringSettings* opaqueFilteringSettings; // 0x2D0
		::UnityEngine::Rendering::FilteringSettings* uiFilteringSettings; // 0x2E8
		::UnityEngine::Rendering::FilteringSettings* letterBoxFilteringSettings; // 0x300
		::UnityEngine::Rendering::Universal::UIRenderPassSettings* m_PassSettings; // 0x318
		::UnityEngine::Rendering::Universal::MXBloomSettings* m_BloomSettings; // 0x320
		::System::Int32 screenWidth; // 0x328
		::System::Int32 screenHeight; // 0x32C
		::System::Single screenAspectRatio; // 0x330
		::System::Boolean isGameView; // 0x334
		::UnityEngine::Matrix4x4* defaultViewMatrix; // 0x338
		::UnityEngine::Rendering::Universal::RenderTargetHandle* beforeUIColorTexture; // 0x378
		::System::Boolean isGrabbed; // 0x3A8
		::Il2CppArray<::System::Object*>* cullingPlanes; // 0x3B0
		::Il2CppArray<::System::Object*>* vectorPlanes; // 0x3B8
		::Il2CppArray<::System::Object*>* m_Pyramid; // 0x3C0
		::System::Int32 k_MaxPyramidSize; // 0x0
		::System::Int32 bloomBufferNameID; // 0x3C8
		::System::Int32 mainTexID; // 0x3CC
		::System::Int32 sampleScaleID; // 0x3D0
		::System::Int32 thresholdID; // 0x3D4
		::System::Int32 paramsID; // 0x3D8
		::System::Int32 bloomTexID; // 0x3DC
		::System::Int32 bloomSettingsID; // 0x3E0
		::System::Int32 bloomColorID; // 0x3E4
		::System::Int32 uvTransformID; // 0x3E8
		::UnityEngine::RenderTextureFormat* sourceFormat; // 0x3EC
		::UnityEngine::Material* bloomMaterial; // 0x3F0
		::UnityEngine::MaterialPropertyBlock* bloomProperties; // 0x3F8
		::UnityEngine::MaterialPropertyBlock* bloomFinalProperties; // 0x400
		::UnityEngine::Mesh* s_FullscreenTriangle; // 0x0

		::UnityEngine::RenderTextureFormat* get_defaultHDRRenderTextureFormat()
		{
			return (return (::UnityEngine::RenderTextureFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GET_DEFAULTHDRRENDERTEXTUREFORMAT_OFFSET))(nullptr);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_CONFIGURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BlitScreen(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Material* arg, ::UnityEngine::MaterialPropertyBlock* arg, ::System::Int32 arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_BLITSCREEN_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void set_source(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_SET_SOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void GetProjectionMatrixByAspect(::UnityEngine::Matrix4x4&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GETPROJECTIONMATRIXBYASPECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenderBloom(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_RENDERBLOOM_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_source()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_ONCAMERASETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_destination(::UnityEngine::Rendering::RenderTargetIdentifier* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_SET_DESTINATION_OFFSET))(arg, nullptr);
		}

		::System::Single Exp2(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_EXP2_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_ONCAMERACLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void GetScreenSpaceTemporaryRT(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg, ::UnityEngine::FilterMode* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::UnityEngine::FilterMode*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GETSCREENSPACETEMPORARYRT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier* get_destination()
		{
			return (return (::UnityEngine::Rendering::RenderTargetIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GET_DESTINATION_OFFSET))(nullptr);
		}

		::System::Void ExecuteScreenshotCapture(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_EXECUTESCREENSHOTCAPTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateCullingPlanes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_CREATECULLINGPLANES_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_fullscreenTriangle()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_GET_FULLSCREENTRIANGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(UIRenderPipelineSettings* arg)
		{
			((::System::Void(*)(UIRenderPipelineSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UIRENDERPASS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

