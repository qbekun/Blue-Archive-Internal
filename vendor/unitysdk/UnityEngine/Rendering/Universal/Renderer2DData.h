#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class TransparencySortMode; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Rendering::Universal { class Downsampling; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class RenderTargetHandle; }
namespace UnityEngine::Rendering::Universal { class ILight2DCullResult; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA024380)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_PROJECTEDSHADOWSHADER_OFFSET UNITYSDK_OFFSET(0xA024460)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_NORMALSRENDERTARGETSCALE_OFFSET UNITYSDK_OFFSET(0xA024470)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_USEDEPTHSTENCILBUFFER_OFFSET UNITYSDK_OFFSET(0xA024480)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SHAPELIGHTSHADER_OFFSET UNITYSDK_OFFSET(0xA024490)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_LIGHTCULLRESULT_OFFSET UNITYSDK_OFFSET(0xA0244A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTMATERIALS_OFFSET UNITYSDK_OFFSET(0xA0244C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SHAPELIGHTVOLUMESHADER_OFFSET UNITYSDK_OFFSET(0xA0244D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_ISNORMALSRENDERTARGETVALID_OFFSET UNITYSDK_OFFSET(0xA0244E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_POINTLIGHTSHADER_OFFSET UNITYSDK_OFFSET(0xA0244F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_SPRITEUNSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA024500)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_CAMERASORTINGLAYERTEXTUREBOUND_OFFSET UNITYSDK_OFFSET(0xA024520)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTCULLRESULT_OFFSET UNITYSDK_OFFSET(0xA024530)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_POSTPROCESSDATA_OFFSET UNITYSDK_OFFSET(0xA024540)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_POSTPROCESSDATA_OFFSET UNITYSDK_OFFSET(0xA024550)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTRENDERTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0xA024570)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_USECAMERASORTINGLAYERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA024580)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_GEOMETRYUNSHADOWSHADER_OFFSET UNITYSDK_OFFSET(0xA024590)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_BLITSHADER_OFFSET UNITYSDK_OFFSET(0xA0245A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTBLENDSTYLES_OFFSET UNITYSDK_OFFSET(0xA0245B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_GEOMETRYUNSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0245C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_POINTLIGHTVOLUMESHADER_OFFSET UNITYSDK_OFFSET(0xA0245E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_SPRITESELFSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0245F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA024610)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SPRITESELFSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA024670)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SAMPLINGSHADER_OFFSET UNITYSDK_OFFSET(0xA024680)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_TRANSPARENCYSORTAXIS_OFFSET UNITYSDK_OFFSET(0xA024690)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_ISNORMALSRENDERTARGETVALID_OFFSET UNITYSDK_OFFSET(0xA0246B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_STENCILONLYSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0246C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_NORMALSRENDERTARGETSCALE_OFFSET UNITYSDK_OFFSET(0xA0246E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SHADOWRENDERTEXTUREMEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0xA0246F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA024700)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_GEOMETRYUNSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0248D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_PROJECTEDSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA0248E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_STENCILONLYSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA024900)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_PROJECTEDSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA024910)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SPRITESHADOWSHADER_OFFSET UNITYSDK_OFFSET(0xA024920)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_CAMERASORTINGLAYERDOWNSAMPLINGMETHOD_OFFSET UNITYSDK_OFFSET(0xA024930)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTRENDERTEXTUREMEMORYBUDGET_OFFSET UNITYSDK_OFFSET(0xA024940)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SPRITEUNSHADOWSHADER_OFFSET UNITYSDK_OFFSET(0xA024950)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_TRANSPARENCYSORTMODE_OFFSET UNITYSDK_OFFSET(0xA024960)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_HDREMULATIONSCALE_OFFSET UNITYSDK_OFFSET(0xA024970)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_FALLOFFLOOKUP_OFFSET UNITYSDK_OFFSET(0xA024980)
#define UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SPRITEUNSHADOWMATERIAL_OFFSET UNITYSDK_OFFSET(0xA024990)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Renderer2DData_TypeDefinitionIndex = 32493;

	class Renderer2DData : public Il2CppObject
	{
	public:
		::UnityEngine::TransparencySortMode* m_TransparencySortMode; // 0x40
		::UnityEngine::Vector3* m_TransparencySortAxis; // 0x44
		::System::Single m_HDREmulationScale; // 0x50
		::System::Single m_LightRenderTextureScale; // 0x54
		::Il2CppArray<::System::Object*>* m_LightBlendStyles; // 0x58
		::System::Boolean m_UseDepthStencilBuffer; // 0x60
		::System::Boolean m_UseCameraSortingLayersTexture; // 0x61
		::System::Int32 m_CameraSortingLayersTextureBound; // 0x64
		::UnityEngine::Rendering::Universal::Downsampling* m_CameraSortingLayerDownsamplingMethod; // 0x68
		::System::UInt32 m_MaxLightRenderTextureCount; // 0x6C
		::System::UInt32 m_MaxShadowRenderTextureCount; // 0x70
		::UnityEngine::Shader* m_ShapeLightShader; // 0x78
		::UnityEngine::Shader* m_ShapeLightVolumeShader; // 0x80
		::UnityEngine::Shader* m_PointLightShader; // 0x88
		::UnityEngine::Shader* m_PointLightVolumeShader; // 0x90
		::UnityEngine::Shader* m_BlitShader; // 0x98
		::UnityEngine::Shader* m_SamplingShader; // 0xA0
		::UnityEngine::Shader* m_ProjectedShadowShader; // 0xA8
		::UnityEngine::Shader* m_SpriteShadowShader; // 0xB0
		::UnityEngine::Shader* m_SpriteUnshadowShader; // 0xB8
		::UnityEngine::Shader* m_GeometryUnshadowShader; // 0xC0
		::UnityEngine::Shader* m_FallbackErrorShader; // 0xC8
		::UnityEngine::Rendering::Universal::PostProcessData* m_PostProcessData; // 0xD0
		::UnityEngine::Texture2D* m_FallOffLookup; // 0xD8
		Il2CppObject* _lightMaterials_k__BackingField; // 0xE0
		::Il2CppArray<::System::Object*>* _spriteSelfShadowMaterial_k__BackingField; // 0xE8
		::Il2CppArray<::System::Object*>* _spriteUnshadowMaterial_k__BackingField; // 0xF0
		::Il2CppArray<::System::Object*>* _geometryUnshadowMaterial_k__BackingField; // 0xF8
		::Il2CppArray<::System::Object*>* _projectedShadowMaterial_k__BackingField; // 0x100
		::Il2CppArray<::System::Object*>* _stencilOnlyShadowMaterial_k__BackingField; // 0x108
		::System::Boolean _isNormalsRenderTargetValid_k__BackingField; // 0x110
		::System::Single _normalsRenderTargetScale_k__BackingField; // 0x114
		::UnityEngine::Rendering::Universal::RenderTargetHandle* normalsRenderTarget; // 0x118
		::UnityEngine::Rendering::Universal::RenderTargetHandle* shadowsRenderTarget; // 0x148
		::UnityEngine::Rendering::Universal::RenderTargetHandle* cameraSortingLayerRenderTarget; // 0x178
		::UnityEngine::Rendering::Universal::ILight2DCullResult* _lightCullResult_k__BackingField; // 0x1A8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_projectedShadowShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_PROJECTEDSHADOWSHADER_OFFSET))(nullptr);
		}

		::System::Void set_normalsRenderTargetScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_NORMALSRENDERTARGETSCALE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useDepthStencilBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_USEDEPTHSTENCILBUFFER_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_shapeLightShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SHAPELIGHTSHADER_OFFSET))(nullptr);
		}

		::System::Void set_lightCullResult(::UnityEngine::Rendering::Universal::ILight2DCullResult* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::ILight2DCullResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_LIGHTCULLRESULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_lightMaterials()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTMATERIALS_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_shapeLightVolumeShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SHAPELIGHTVOLUMESHADER_OFFSET))(nullptr);
		}

		::System::Void set_isNormalsRenderTargetValid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_ISNORMALSRENDERTARGETVALID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Shader* get_pointLightShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_POINTLIGHTSHADER_OFFSET))(nullptr);
		}

		::System::Void set_spriteUnshadowMaterial(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_SPRITEUNSHADOWMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_cameraSortingLayerTextureBound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_CAMERASORTINGLAYERTEXTUREBOUND_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::ILight2DCullResult* get_lightCullResult()
		{
			return (return (::UnityEngine::Rendering::Universal::ILight2DCullResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTCULLRESULT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::PostProcessData* get_postProcessData()
		{
			return (return (::UnityEngine::Rendering::Universal::PostProcessData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_POSTPROCESSDATA_OFFSET))(nullptr);
		}

		::System::Void set_postProcessData(::UnityEngine::Rendering::Universal::PostProcessData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PostProcessData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_POSTPROCESSDATA_OFFSET))(arg, nullptr);
		}

		::System::Single get_lightRenderTextureScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTRENDERTEXTURESCALE_OFFSET))(nullptr);
		}

		::System::Boolean get_useCameraSortingLayerTexture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_USECAMERASORTINGLAYERTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_geometryUnshadowShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_GEOMETRYUNSHADOWSHADER_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_blitShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_BLITSHADER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_lightBlendStyles()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTBLENDSTYLES_OFFSET))(nullptr);
		}

		::System::Void set_geometryUnshadowMaterial(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_GEOMETRYUNSHADOWMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Shader* get_pointLightVolumeShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_POINTLIGHTVOLUMESHADER_OFFSET))(nullptr);
		}

		::System::Void set_spriteSelfShadowMaterial(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_SPRITESELFSHADOWMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::ScriptableRenderer* Create()
		{
			return (return (::UnityEngine::Rendering::Universal::ScriptableRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_CREATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_spriteSelfShadowMaterial()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SPRITESELFSHADOWMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_samplingShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SAMPLINGSHADER_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_transparencySortAxis()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_TRANSPARENCYSORTAXIS_OFFSET))(nullptr);
		}

		::System::Boolean get_isNormalsRenderTargetValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_ISNORMALSRENDERTARGETVALID_OFFSET))(nullptr);
		}

		::System::Void set_stencilOnlyShadowMaterial(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_STENCILONLYSHADOWMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_normalsRenderTargetScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_NORMALSRENDERTARGETSCALE_OFFSET))(nullptr);
		}

		::System::UInt32 get_shadowRenderTextureMemoryBudget()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SHADOWRENDERTEXTUREMEMORYBUDGET_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_ONENABLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_geometryUnshadowMaterial()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_GEOMETRYUNSHADOWMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_projectedShadowMaterial(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_SET_PROJECTEDSHADOWMATERIAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_stencilOnlyShadowMaterial()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_STENCILONLYSHADOWMATERIAL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_projectedShadowMaterial()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_PROJECTEDSHADOWMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_spriteShadowShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SPRITESHADOWSHADER_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::Downsampling* get_cameraSortingLayerDownsamplingMethod()
		{
			return (return (::UnityEngine::Rendering::Universal::Downsampling*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_CAMERASORTINGLAYERDOWNSAMPLINGMETHOD_OFFSET))(nullptr);
		}

		::System::UInt32 get_lightRenderTextureMemoryBudget()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_LIGHTRENDERTEXTUREMEMORYBUDGET_OFFSET))(nullptr);
		}

		::UnityEngine::Shader* get_spriteUnshadowShader()
		{
			return (return (::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SPRITEUNSHADOWSHADER_OFFSET))(nullptr);
		}

		::UnityEngine::TransparencySortMode* get_transparencySortMode()
		{
			return (return (::UnityEngine::TransparencySortMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_TRANSPARENCYSORTMODE_OFFSET))(nullptr);
		}

		::System::Single get_hdrEmulationScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_HDREMULATIONSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_fallOffLookup()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_FALLOFFLOOKUP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_spriteUnshadowMaterial()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RENDERER2DDATA_GET_SPRITEUNSHADOWMATERIAL_OFFSET))(nullptr);
		}

	};
}

