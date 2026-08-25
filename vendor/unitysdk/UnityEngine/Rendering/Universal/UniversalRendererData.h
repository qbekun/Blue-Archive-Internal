#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine::Rendering::Universal { class XRSystemData; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::Rendering::Universal { class StencilStateData; }
namespace UnityEngine::Rendering::Universal { class RenderingMode; }
namespace UnityEngine::Rendering::Universal { class DepthPrimingMode; }
namespace UnityEngine::Rendering::Universal { class TileSize; }
namespace UnityEngine::Rendering::Universal { class IntermediateTextureMode; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_DEPTHPRIMINGMODE_OFFSET UNITYSDK_OFFSET(0xA0801E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_INTERMEDIATETEXTUREMODE_OFFSET UNITYSDK_OFFSET(0xA0801F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_SHADOWTRANSPARENTRECEIVE_OFFSET UNITYSDK_OFFSET(0xA080210)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_DEFAULTRENDERSHADERTAGIDSTRINGS_OFFSET UNITYSDK_OFFSET(0xA080230)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA080240)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA0805F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_INTERMEDIATETEXTUREMODE_OFFSET UNITYSDK_OFFSET(0xA080610)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xA080620)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_IGNOREGAMERESOLUTION_OFFSET UNITYSDK_OFFSET(0xA080650)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_TRANSPARENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA080660)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_RENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xA080680)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_TILESIZE_OFFSET UNITYSDK_OFFSET(0xA0806A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_DEFAULTSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA0806B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0xA0806C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_TRANSPARENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA0806D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_BUFFERFILTERMODE_OFFSET UNITYSDK_OFFSET(0xA0806E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_ACCURATEGBUFFERNORMALS_OFFSET UNITYSDK_OFFSET(0xA0806F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_SHADOWTRANSPARENTRECEIVE_OFFSET UNITYSDK_OFFSET(0xA080710)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_DEFAULTSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA080720)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_CLUSTEREDRENDERING_OFFSET UNITYSDK_OFFSET(0xA080750)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_OPAQUELAYERMASK_OFFSET UNITYSDK_OFFSET(0xA080770)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA080780)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_ACCURATEGBUFFERNORMALS_OFFSET UNITYSDK_OFFSET(0xA0807A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_DEPTHPRIMINGMODE_OFFSET UNITYSDK_OFFSET(0xA0807B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_CLUSTEREDRENDERING_OFFSET UNITYSDK_OFFSET(0xA0807D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA0807E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA080840)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_IGNOREGAMEPP_OFFSET UNITYSDK_OFFSET(0xA080850)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_RENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xA080860)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_OPAQUELAYERMASK_OFFSET UNITYSDK_OFFSET(0xA080870)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_TILESIZE_OFFSET UNITYSDK_OFFSET(0xA080890)
#define UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_RELOADALLNULLPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA080790)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UniversalRendererData_TypeDefinitionIndex = 32787;

	class UniversalRendererData : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::PostProcessData* postProcessData; // 0x40
		::UnityEngine::Rendering::Universal::XRSystemData* xrSystemData; // 0x48
		ShaderResources* shaders; // 0x50
		::System::Int32 k_LatestAssetVersion; // 0x0
		::System::Int32 m_AssetVersion; // 0x58
		::UnityEngine::LayerMask* m_OpaqueLayerMask; // 0x5C
		::UnityEngine::LayerMask* m_TransparentLayerMask; // 0x60
		::UnityEngine::Rendering::Universal::StencilStateData* m_DefaultStencilState; // 0x68
		::System::Boolean m_ShadowTransparentReceive; // 0x70
		::UnityEngine::Rendering::Universal::RenderingMode* m_RenderingMode; // 0x74
		::UnityEngine::Rendering::Universal::DepthPrimingMode* m_DepthPrimingMode; // 0x78
		::System::Boolean m_AccurateGbufferNormals; // 0x7C
		::System::Boolean m_ClusteredRendering; // 0x7D
		::UnityEngine::Rendering::Universal::TileSize* k_DefaultTileSize; // 0x0
		::UnityEngine::Rendering::Universal::TileSize* m_TileSize; // 0x80
		::UnityEngine::Rendering::Universal::IntermediateTextureMode* m_IntermediateTextureMode; // 0x84
		::System::Boolean m_ignoreGameResolution; // 0x88
		::System::Boolean m_ignoreGamePP; // 0x89
		::UnityEngine::FilterMode* m_bufferFilterMode; // 0x8C
		::System::Single m_renderScale; // 0x90
		Il2CppObject* m_defaultRenderShaderTagIdStrings; // 0x98

		::UnityEngine::Rendering::Universal::DepthPrimingMode* get_depthPrimingMode()
		{
			return (return (::UnityEngine::Rendering::Universal::DepthPrimingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_DEPTHPRIMINGMODE_OFFSET))(nullptr);
		}

		::System::Void set_intermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IntermediateTextureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_INTERMEDIATETEXTUREMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_shadowTransparentReceive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_SHADOWTRANSPARENTRECEIVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultRenderShaderTagIdStrings()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_DEFAULTRENDERSHADERTAGIDSTRINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::IntermediateTextureMode* get_intermediateTextureMode()
		{
			return (return (::UnityEngine::Rendering::Universal::IntermediateTextureMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_INTERMEDIATETEXTUREMODE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreGameResolution()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_IGNOREGAMERESOLUTION_OFFSET))(nullptr);
		}

		::System::Void set_transparentLayerMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_TRANSPARENTLAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_RENDERINGMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::TileSize* get_tileSize()
		{
			return (return (::UnityEngine::Rendering::Universal::TileSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_TILESIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::StencilStateData* get_defaultStencilState()
		{
			return (return (::UnityEngine::Rendering::Universal::StencilStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_DEFAULTSTENCILSTATE_OFFSET))(nullptr);
		}

		::System::Single get_RenderScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_RENDERSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::LayerMask* get_transparentLayerMask()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_TRANSPARENTLAYERMASK_OFFSET))(nullptr);
		}

		::UnityEngine::FilterMode* get_BufferFilterMode()
		{
			return (return (::UnityEngine::FilterMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_BUFFERFILTERMODE_OFFSET))(nullptr);
		}

		::System::Void set_accurateGbufferNormals(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_ACCURATEGBUFFERNORMALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_shadowTransparentReceive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_SHADOWTRANSPARENTRECEIVE_OFFSET))(nullptr);
		}

		::System::Void set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::StencilStateData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_DEFAULTSTENCILSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_clusteredRendering(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_CLUSTEREDRENDERING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LayerMask* get_opaqueLayerMask()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_OPAQUELAYERMASK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_accurateGbufferNormals()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_ACCURATEGBUFFERNORMALS_OFFSET))(nullptr);
		}

		::System::Void set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DepthPrimingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_DEPTHPRIMINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_clusteredRendering()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_CLUSTEREDRENDERING_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::ScriptableRenderer* Create()
		{
			return (return (::UnityEngine::Rendering::Universal::ScriptableRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_CREATE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreGamePP()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_IGNOREGAMEPP_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderingMode* get_renderingMode()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_GET_RENDERINGMODE_OFFSET))(nullptr);
		}

		::System::Void set_opaqueLayerMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_OPAQUELAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_tileSize(::UnityEngine::Rendering::Universal::TileSize* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TileSize*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_SET_TILESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ReloadAllNullProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNIVERSALRENDERERDATA_RELOADALLNULLPROPERTIES_OFFSET))(nullptr);
		}

	};
}

