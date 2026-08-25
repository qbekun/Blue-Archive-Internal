#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class XRSystem; }
namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsUI; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineGlobalSettings; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::Rendering { class RenderPipelineGlobalSettings; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class CameraData; }
namespace UnityEngine::Rendering { class ScriptableCullingParameters&; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }
namespace UnityEngine::Rendering { class CullingResults&; }
namespace UnityEngine::Rendering::Universal { class RenderingData&; }
namespace UnityEngine::Rendering::Universal { class ShadowData&; }
namespace UnityEngine::Rendering::Universal { class PostProcessingData&; }
namespace UnityEngine::Rendering::Universal { class LightData&; }
namespace UnityEngine::Rendering::Universal { class XRPass; }
namespace UnityEngine::Rendering { class PerObjectData; }
namespace UnityEngine::Rendering::Universal { class ImageUpscalingFilter; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::Rendering::Universal { class UpscalingFilterSelection; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class LightType; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Vector4&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXSHADOWBIAS_OFFSET UNITYSDK_OFFSET(0xA0808C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MINRENDERSCALE_OFFSET UNITYSDK_OFFSET(0xA0808D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXRENDERSCALE_OFFSET UNITYSDK_OFFSET(0xA0808E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXPEROBJECTLIGHTS_OFFSET UNITYSDK_OFFSET(0xA0808F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXVISIBLEADDITIONALLIGHTS_OFFSET UNITYSDK_OFFSET(0xA07AB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_LIGHTSPERTILE_OFFSET UNITYSDK_OFFSET(0xA080910)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXZBINS_OFFSET UNITYSDK_OFFSET(0xA080960)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXTILEVEC4S_OFFSET UNITYSDK_OFFSET(0xA080970)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0xA080980)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA080990)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0811B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDER_OFFSET UNITYSDK_OFFSET(0xA081420)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDER_OFFSET UNITYSDK_OFFSET(0xA0814B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERSINGLECAMERA_OFFSET UNITYSDK_OFFSET(0xA084890)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_TRYGETCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0xA085A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERSINGLECAMERA_OFFSET UNITYSDK_OFFSET(0xA084F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERCAMERASTACK_OFFSET UNITYSDK_OFFSET(0xA082300)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UPDATEVOLUMEFRAMEWORK_OFFSET UNITYSDK_OFFSET(0xA084590)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CHECKPOSTPROCESSFORDEPTH_OFFSET UNITYSDK_OFFSET(0xA0892A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETSUPPORTEDRENDERINGFEATURES_OFFSET UNITYSDK_OFFSET(0xA080F20)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZECAMERADATA_OFFSET UNITYSDK_OFFSET(0xA084A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZESTACKEDCAMERADATA_OFFSET UNITYSDK_OFFSET(0xA0893B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEADDITIONALCAMERADATA_OFFSET UNITYSDK_OFFSET(0xA087D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZERENDERINGDATA_OFFSET UNITYSDK_OFFSET(0xA085DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZESHADOWDATA_OFFSET UNITYSDK_OFFSET(0xA08AB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTPROCESSINGDATA_OFFSET UNITYSDK_OFFSET(0xA08B710)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZELIGHTDATA_OFFSET UNITYSDK_OFFSET(0xA08A860)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CLEANUPLIGHTDATA_OFFSET UNITYSDK_OFFSET(0xA086740)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UPDATECAMERASTEREOMATRICES_OFFSET UNITYSDK_OFFSET(0xA086C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETPEROBJECTLIGHTFLAGS_OFFSET UNITYSDK_OFFSET(0xA08B760)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETMAINLIGHTINDEX_OFFSET UNITYSDK_OFFSET(0xA08A4C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPPERFRAMESHADERCONSTANTS_OFFSET UNITYSDK_OFFSET(0xA081C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CHECKANDAPPLYDEBUGSETTINGS_OFFSET UNITYSDK_OFFSET(0xA08B8C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RESOLVEUPSCALINGFILTERSELECTION_OFFSET UNITYSDK_OFFSET(0xA08A270)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISGAMECAMERA_OFFSET UNITYSDK_OFFSET(0xA082230)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0xA08BCD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_ASSET_OFFSET UNITYSDK_OFFSET(0xA07A2E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISMULTIPASSSTEREOENABLED_OFFSET UNITYSDK_OFFSET(0xA08BDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SORTCAMERAS_OFFSET UNITYSDK_OFFSET(0xA0821C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_MAKERENDERTEXTUREGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA08BC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CREATERENDERTEXTUREDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA089C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETLIGHTATTENUATIONANDSPOTDIRECTION_OFFSET UNITYSDK_OFFSET(0xA08BE80)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZELIGHTCONSTANTS_COMMON_OFFSET UNITYSDK_OFFSET(0xA08C140)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA08C810)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRenderPipeline_TypeDefinitionIndex = 32794;

	class UniversalRenderPipeline : public Il2CppObject
	{
	public:
		::System::String* k_ShaderTagName; // 0x0
		::UnityEngine::Rendering::Universal::XRSystem* m_XRSystem; // 0x0
		::System::Int32 k_MaxVisibleAdditionalLightsMobileShaderLevelLessThan45; // 0x0
		::System::Int32 k_MaxVisibleAdditionalLightsMobile; // 0x0
		::System::Int32 k_MaxVisibleAdditionalLightsNonMobile; // 0x0
		::System::Int32 k_DefaultRenderingLayerMask; // 0x0
		::UnityEngine::Rendering::Universal::DebugDisplaySettingsUI* m_DebugDisplaySettingsUI; // 0x18
		::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings* m_GlobalSettings; // 0x20
		::UnityEngine::Vector4* k_DefaultLightPosition; // 0x8
		::UnityEngine::Vector4* k_DefaultLightColor; // 0x18
		::UnityEngine::Vector4* k_DefaultLightAttenuation; // 0x28
		::UnityEngine::Vector4* k_DefaultLightSpotDirection; // 0x38
		::UnityEngine::Vector4* k_DefaultLightsProbeChannel; // 0x48
		Il2CppObject* m_ShadowBiasData; // 0x58
		Il2CppObject* m_ShadowResolutionData; // 0x60
		Il2CppObject* cameraComparison; // 0x28
		RequestLightsDelegate* lightsDelegate; // 0x68

		::System::Single get_maxShadowBias()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXSHADOWBIAS_OFFSET))(nullptr);
		}

		::System::Single get_minRenderScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MINRENDERSCALE_OFFSET))(nullptr);
		}

		::System::Single get_maxRenderScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXRENDERSCALE_OFFSET))(nullptr);
		}

		::System::Int32 get_maxPerObjectLights()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXPEROBJECTLIGHTS_OFFSET))(nullptr);
		}

		::System::Int32 get_maxVisibleAdditionalLights()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXVISIBLEADDITIONALLIGHTS_OFFSET))(nullptr);
		}

		::System::Int32 get_lightsPerTile()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_LIGHTSPERTILE_OFFSET))(nullptr);
		}

		::System::Int32 get_maxZBins()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXZBINS_OFFSET))(nullptr);
		}

		::System::Int32 get_maxTileVec4s()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_MAXTILEVEC4S_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RenderPipelineGlobalSettings* get_defaultSettings()
		{
			return (return (::UnityEngine::Rendering::RenderPipelineGlobalSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_DEFAULTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERSINGLECAMERA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetCullingParameters(::UnityEngine::Rendering::Universal::CameraData* arg, ::UnityEngine::Rendering::ScriptableCullingParameters&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::CameraData*, ::UnityEngine::Rendering::ScriptableCullingParameters&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_TRYGETCULLINGPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::CameraData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::CameraData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERSINGLECAMERA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RenderCameraStack(::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RENDERCAMERASTACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateVolumeFramework(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UPDATEVOLUMEFRAMEWORK_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckPostProcessForDepth(::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CHECKPOSTPROCESSFORDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void SetSupportedRenderingFeatures()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETSUPPORTEDRENDERINGFEATURES_OFFSET))(nullptr);
		}

		::System::Void InitializeCameraData(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* arg, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::System::Boolean, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZECAMERADATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitializeStackedCameraData(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZESTACKEDCAMERADATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeAdditionalCameraData(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* arg, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::System::Boolean, ::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEADDITIONALCAMERADATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitializeRenderingData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* arg, ::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Rendering::CullingResults&* arg, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Rendering::CullingResults&*, ::System::Boolean, ::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZERENDERINGDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitializeShadowData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::Rendering::Universal::ShadowData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Rendering::Universal::ShadowData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZESHADOWDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitializePostProcessingData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* arg, ::UnityEngine::Rendering::Universal::PostProcessingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::UnityEngine::Rendering::Universal::PostProcessingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZEPOSTPROCESSINGDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeLightData(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* arg, Il2CppObject* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::LightData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, Il2CppObject*, ::System::Int32, ::UnityEngine::Rendering::Universal::LightData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZELIGHTDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CleanupLightData(::UnityEngine::Rendering::Universal::LightData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LightData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CLEANUPLIGHTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCameraStereoMatrices(::UnityEngine::Camera* arg, ::UnityEngine::Rendering::Universal::XRPass* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::XRPass*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_UPDATECAMERASTEREOMATRICES_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::PerObjectData* GetPerObjectLightFlags(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::PerObjectData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETPEROBJECTLIGHTFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMainLightIndex(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETMAINLIGHTINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupPerFrameShaderConstants()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SETUPPERFRAMESHADERCONSTANTS_OFFSET))(nullptr);
		}

		::System::Void CheckAndApplyDebugSettings(::UnityEngine::Rendering::Universal::RenderingData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CHECKANDAPPLYDEBUGSETTINGS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::ImageUpscalingFilter* ResolveUpscalingFilterSelection(::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::Rendering::Universal::UpscalingFilterSelection* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::ImageUpscalingFilter*(*)(::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::Rendering::Universal::UpscalingFilterSelection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_RESOLVEUPSCALINGFILTERSELECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsGameCamera(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISGAMECAMERA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStereoEnabled(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISSTEREOENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* get_asset()
		{
			return (return (::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GET_ASSET_OFFSET))(nullptr);
		}

		::System::Boolean IsMultiPassStereoEnabled(::UnityEngine::Camera* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_ISMULTIPASSSTEREOENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void SortCameras(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_SORTCAMERAS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* MakeRenderTextureGraphicsFormat(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_MAKERENDERTEXTUREGRAPHICSFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* CreateRenderTextureDescriptor(::UnityEngine::Camera* arg, ::System::Single arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::UnityEngine::Camera*, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_CREATERENDERTEXTUREDESCRIPTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetLightAttenuationAndSpotDirection(::UnityEngine::LightType* arg, ::System::Single arg, ::UnityEngine::Matrix4x4* arg, ::System::Single arg, Il2CppObject* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(::UnityEngine::LightType*, ::System::Single, ::UnityEngine::Matrix4x4*, ::System::Single, Il2CppObject*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_GETLIGHTATTENUATIONANDSPOTDIRECTION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void InitializeLightConstants_Common(Il2CppObject* arg, ::System::Int32 arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_INITIALIZELIGHTCONSTANTS_COMMON_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERPIPELINE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

