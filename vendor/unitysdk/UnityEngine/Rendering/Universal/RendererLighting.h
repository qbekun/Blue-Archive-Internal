#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering { class ShaderTagId; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering::Universal { class Light2D; }
namespace UnityEngine::Rendering::Universal { class IRenderPass2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class RenderingData; }
namespace UnityEngine::Rendering { class RenderTargetIdentifier; }
namespace UnityEngine::Rendering { class RenderBufferStoreAction; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class Renderer2DData; }
namespace UnityEngine::Rendering { class BlendMode; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Matrix4x4&; }
namespace UnityEngine::Rendering::Universal { class Downsampling; }
namespace UnityEngine::Rendering::Universal { class LayerBatch&; }
namespace UnityEngine { class RenderTextureDescriptor&; }
namespace UnityEngine::Rendering { class ScriptableRenderContext; }
namespace UnityEngine::Rendering { class DrawingSettings; }
namespace UnityEngine::Rendering { class FilteringSettings; }
namespace UnityEngine::Rendering::Universal { class LightStats; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CANCASTSHADOWS_OFFSET UNITYSDK_OFFSET(0xA01E870)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CLEARDIRTYLIGHTING_OFFSET UNITYSDK_OFFSET(0xA01E8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETNORMALIZEDINNERRADIUS_OFFSET UNITYSDK_OFFSET(0xA01EC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RENDERLIGHTVOLUMES_OFFSET UNITYSDK_OFFSET(0xA01ABC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CREATENORMALMAPRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA01F5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_DISABLEALLKEYWORDS_OFFSET UNITYSDK_OFFSET(0xA01D6D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CREATELIGHTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA01FBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_SETSHAPELIGHTSHADERGLOBALS_OFFSET UNITYSDK_OFFSET(0xA01CDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA01FAA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_SETBLENDMODES_OFFSET UNITYSDK_OFFSET(0xA020060)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETLIGHTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA01ECA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RELEASERENDERTEXTURES_OFFSET UNITYSDK_OFFSET(0xA01D790)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETBLENDSTYLERENDERTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0xA01D250)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_SETGENERALLIGHTSHADERGLOBALS_OFFSET UNITYSDK_OFFSET(0xA01ED90)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0202A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_SETPOINTLIGHTSHADERGLOBALS_OFFSET UNITYSDK_OFFSET(0xA01EEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_DRAWPOINTLIGHT_OFFSET UNITYSDK_OFFSET(0xA01F460)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETNORMALIZEDANGLE_OFFSET UNITYSDK_OFFSET(0xA020DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RENDERLIGHTSET_OFFSET UNITYSDK_OFFSET(0xA020DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETSCALEDLIGHTINVMATRIX_OFFSET UNITYSDK_OFFSET(0xA020C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CANCASTVOLUMETRICSHADOWS_OFFSET UNITYSDK_OFFSET(0xA01EC50)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CREATECAMERASORTINGLAYERRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA01B680)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_ENABLEBLENDSTYLE_OFFSET UNITYSDK_OFFSET(0xA01A370)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RENDERLIGHTS_OFFSET UNITYSDK_OFFSET(0xA019950)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETLIGHTMATERIALINDEX_OFFSET UNITYSDK_OFFSET(0xA020110)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RENDERNORMALS_OFFSET UNITYSDK_OFFSET(0xA019080)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RendererLighting_TypeDefinitionIndex = 32487;

	class RendererLighting : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler; // 0x0
		::UnityEngine::Rendering::ShaderTagId* k_NormalsRenderingPassName; // 0x8
		::UnityEngine::Color* k_NormalClearColor; // 0xC
		::System::String* k_SpriteLightKeyword; // 0x20
		::System::String* k_UsePointLightCookiesKeyword; // 0x28
		::System::String* k_LightQualityFastKeyword; // 0x30
		::System::String* k_UseNormalMap; // 0x38
		::System::String* k_UseAdditiveBlendingKeyword; // 0x40
		::Il2CppArray<::System::Object*>* k_UseBlendStyleKeywords; // 0x48
		::Il2CppArray<::System::Object*>* k_BlendFactorsPropIDs; // 0x50
		::Il2CppArray<::System::Object*>* k_MaskFilterPropIDs; // 0x58
		::Il2CppArray<::System::Object*>* k_InvertedFilterPropIDs; // 0x60
		::UnityEngine::Experimental::Rendering::GraphicsFormat* s_RenderTextureFormatToUse; // 0x68
		::System::Boolean s_HasSetupRenderTextureFormatToUse; // 0x6C
		::System::Int32 k_SrcBlendID; // 0x70
		::System::Int32 k_DstBlendID; // 0x74
		::System::Int32 k_FalloffIntensityID; // 0x78
		::System::Int32 k_FalloffDistanceID; // 0x7C
		::System::Int32 k_LightColorID; // 0x80
		::System::Int32 k_VolumeOpacityID; // 0x84
		::System::Int32 k_CookieTexID; // 0x88
		::System::Int32 k_FalloffLookupID; // 0x8C
		::System::Int32 k_LightPositionID; // 0x90
		::System::Int32 k_LightInvMatrixID; // 0x94
		::System::Int32 k_InnerRadiusMultID; // 0x98
		::System::Int32 k_OuterAngleID; // 0x9C
		::System::Int32 k_InnerAngleMultID; // 0xA0
		::System::Int32 k_LightLookupID; // 0xA4
		::System::Int32 k_IsFullSpotlightID; // 0xA8
		::System::Int32 k_LightZDistanceID; // 0xAC
		::System::Int32 k_PointLightCookieTexID; // 0xB0

		::System::Boolean CanCastShadows(::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::Light2D*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CANCASTSHADOWS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearDirtyLighting(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CLEARDIRTYLIGHTING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single GetNormalizedInnerRadius(::UnityEngine::Rendering::Universal::Light2D* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Rendering::Universal::Light2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETNORMALIZEDINNERRADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void RenderLightVolumes(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::UnityEngine::Rendering::RenderBufferStoreAction* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::UnityEngine::Rendering::RenderBufferStoreAction*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RENDERLIGHTVOLUMES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CreateNormalMapRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CREATENORMALMAPRENDERTEXTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DisableAllKeywords(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_DISABLEALLKEYWORDS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* CreateLightMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* arg, ::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::UnityEngine::Rendering::Universal::Light2D*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CREATELIGHTMATERIAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetShapeLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_SETSHAPELIGHTSHADERGLOBALS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetRenderTextureFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETRENDERTEXTUREFORMAT_OFFSET))(nullptr);
		}

		::System::Void SetBlendModes(::UnityEngine::Material* arg, ::UnityEngine::Rendering::BlendMode* arg, ::UnityEngine::Rendering::BlendMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Rendering::BlendMode*, ::UnityEngine::Rendering::BlendMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_SETBLENDMODES_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Material* GetLightMaterial(::UnityEngine::Rendering::Universal::Renderer2DData* arg, ::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::Renderer2DData*, ::UnityEngine::Rendering::Universal::Light2D*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETLIGHTMATERIAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ReleaseRenderTextures(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RELEASERENDERTEXTURES_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* GetBlendStyleRenderTextureDesc(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg)
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETBLENDSTYLERENDERTEXTUREDESC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetGeneralLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::Light2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_SETGENERALLIGHTSHADERGLOBALS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetPointLightShaderGlobals(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::Light2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_SETPOINTLIGHTSHADERGLOBALS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawPointLight(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::Light2D* arg, ::UnityEngine::Mesh* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Light2D*, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_DRAWPOINTLIGHT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single GetNormalizedAngle(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETNORMALIZEDANGLE_OFFSET))(arg, nullptr);
		}

		::System::Void RenderLightSet(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::System::Int32 arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RENDERLIGHTSET_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetScaledLightInvMatrix(::UnityEngine::Rendering::Universal::Light2D* arg, ::UnityEngine::Matrix4x4&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::Light2D*, ::UnityEngine::Matrix4x4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETSCALEDLIGHTINVMATRIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanCastVolumetricShadows(::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::Light2D*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CANCASTVOLUMETRICSHADOWS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateCameraSortingLayerRenderTexture(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::Downsampling* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::Downsampling*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_CREATECAMERASORTINGLAYERRENDERTEXTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EnableBlendStyle(::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_ENABLEBLENDSTYLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RenderLights(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::LayerBatch&* arg, ::UnityEngine::RenderTextureDescriptor&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::UnityEngine::Rendering::Universal::LayerBatch&*, ::UnityEngine::RenderTextureDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RENDERLIGHTS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 GetLightMaterialIndex(::UnityEngine::Rendering::Universal::Light2D* arg, ::System::Boolean arg)
		{
			return (return (::System::UInt32(*)(::UnityEngine::Rendering::Universal::Light2D*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_GETLIGHTMATERIALINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RenderNormals(::UnityEngine::Rendering::Universal::IRenderPass2D* arg, ::UnityEngine::Rendering::ScriptableRenderContext* arg, ::UnityEngine::Rendering::Universal::RenderingData* arg, ::UnityEngine::Rendering::DrawingSettings* arg, ::UnityEngine::Rendering::FilteringSettings* arg, ::UnityEngine::Rendering::RenderTargetIdentifier* arg, ::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::LightStats* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IRenderPass2D*, ::UnityEngine::Rendering::ScriptableRenderContext*, ::UnityEngine::Rendering::Universal::RenderingData*, ::UnityEngine::Rendering::DrawingSettings*, ::UnityEngine::Rendering::FilteringSettings*, ::UnityEngine::Rendering::RenderTargetIdentifier*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::LightStats*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERERLIGHTING_RENDERNORMALS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

