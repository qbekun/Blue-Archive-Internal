#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class PostProcessData; }
namespace UnityEngine::Rendering::Universal { class XRSystemData; }
namespace UnityEngine { class LayerMask; }
namespace UnityEngine::Rendering::Universal { class StencilStateData; }
namespace UnityEngine::Rendering::Universal { class RenderingMode; }
namespace UnityEngine::Rendering::Universal { class DepthPrimingMode; }
namespace UnityEngine::Rendering::Universal { class TileSize; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_SHADOWTRANSPARENTRECEIVE_OFFSET UNITYSDK_OFFSET(0xA0596D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_ACCURATEGBUFFERNORMALS_OFFSET UNITYSDK_OFFSET(0xA059730)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_TRANSPARENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA059790)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_TRANSPARENTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA0597F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_SHADOWTRANSPARENTRECEIVE_OFFSET UNITYSDK_OFFSET(0xA059850)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_DEFAULTSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA0598B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_ACCURATEGBUFFERNORMALS_OFFSET UNITYSDK_OFFSET(0xA059910)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_OPAQUELAYERMASK_OFFSET UNITYSDK_OFFSET(0xA059970)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_RENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xA0599D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA059A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA059A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_DEFAULTSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0xA059AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_OPAQUELAYERMASK_OFFSET UNITYSDK_OFFSET(0xA059B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_RENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xA059B90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_TypeDefinitionIndex = 32643;

	class ForwardRendererData : public Il2CppObject
	{
	public:
		::System::String* k_ErrorMessage; // 0x0
		ShaderResources* shaders; // 0x40
		::UnityEngine::Rendering::Universal::PostProcessData* postProcessData; // 0x48
		::UnityEngine::Rendering::Universal::XRSystemData* xrSystemData; // 0x50
		::UnityEngine::LayerMask* m_OpaqueLayerMask; // 0x58
		::UnityEngine::LayerMask* m_TransparentLayerMask; // 0x5C
		::UnityEngine::Rendering::Universal::StencilStateData* m_DefaultStencilState; // 0x60
		::System::Boolean m_ShadowTransparentReceive; // 0x68
		::UnityEngine::Rendering::Universal::RenderingMode* m_RenderingMode; // 0x6C
		::UnityEngine::Rendering::Universal::DepthPrimingMode* m_DepthPrimingMode; // 0x70
		::System::Boolean m_AccurateGbufferNormals; // 0x74
		::System::Boolean m_ClusteredRendering; // 0x75
		::UnityEngine::Rendering::Universal::TileSize* m_TileSize; // 0x78

		::System::Boolean get_shadowTransparentReceive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_SHADOWTRANSPARENTRECEIVE_OFFSET))(nullptr);
		}

		::System::Void set_accurateGbufferNormals(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_ACCURATEGBUFFERNORMALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LayerMask* get_transparentLayerMask()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_TRANSPARENTLAYERMASK_OFFSET))(nullptr);
		}

		::System::Void set_transparentLayerMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_TRANSPARENTLAYERMASK_OFFSET))(arg, nullptr);
		}

		::System::Void set_shadowTransparentReceive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_SHADOWTRANSPARENTRECEIVE_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::StencilStateData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_DEFAULTSTENCILSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_accurateGbufferNormals()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_ACCURATEGBUFFERNORMALS_OFFSET))(nullptr);
		}

		::UnityEngine::LayerMask* get_opaqueLayerMask()
		{
			return (return (::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_OPAQUELAYERMASK_OFFSET))(nullptr);
		}

		::System::Void set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::RenderingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_RENDERINGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::ScriptableRenderer* Create()
		{
			return (return (::UnityEngine::Rendering::Universal::ScriptableRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_CREATE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::StencilStateData* get_defaultStencilState()
		{
			return (return (::UnityEngine::Rendering::Universal::StencilStateData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_DEFAULTSTENCILSTATE_OFFSET))(nullptr);
		}

		::System::Void set_opaqueLayerMask(::UnityEngine::LayerMask* arg)
		{
			((::System::Void(*)(::UnityEngine::LayerMask*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SET_OPAQUELAYERMASK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::RenderingMode* get_renderingMode()
		{
			return (return (::UnityEngine::Rendering::Universal::RenderingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_GET_RENDERINGMODE_OFFSET))(nullptr);
		}

	};
}

