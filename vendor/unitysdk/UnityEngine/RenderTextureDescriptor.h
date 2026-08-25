#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine::Rendering { class ShadowSamplingMode; }
namespace UnityEngine { class VRTextureUsage; }
namespace UnityEngine { class RenderTextureCreationFlags; }
namespace UnityEngine { class RenderTextureMemoryless; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine { class RenderTextureReadWrite; }

#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA21BE10)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA21BE20)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA21BE30)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA21BE40)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MSAASAMPLES_OFFSET UNITYSDK_OFFSET(0xA21BE50)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MSAASAMPLES_OFFSET UNITYSDK_OFFSET(0xA21BE60)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0xA21BE70)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0xA21BE80)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MIPCOUNT_OFFSET UNITYSDK_OFFSET(0xA21BE90)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MIPCOUNT_OFFSET UNITYSDK_OFFSET(0xA21BEA0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA21B370)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA21BEB0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA21C0B0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DEPTHSTENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA21C0C0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DEPTHSTENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA21C0D0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_COLORFORMAT_OFFSET UNITYSDK_OFFSET(0xA21C0E0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_COLORFORMAT_OFFSET UNITYSDK_OFFSET(0xA21C160)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SRGB_OFFSET UNITYSDK_OFFSET(0xA21C240)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SRGB_OFFSET UNITYSDK_OFFSET(0xA21C290)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DEPTHBUFFERBITS_OFFSET UNITYSDK_OFFSET(0xA21BFE0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DEPTHBUFFERBITS_OFFSET UNITYSDK_OFFSET(0xA21C030)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xA21C3F0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xA21C400)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SHADOWSAMPLINGMODE_OFFSET UNITYSDK_OFFSET(0xA21C410)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SHADOWSAMPLINGMODE_OFFSET UNITYSDK_OFFSET(0xA21C420)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0xA21C430)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0xA21C440)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MEMORYLESS_OFFSET UNITYSDK_OFFSET(0xA21C450)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21C460)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21C4E0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21C570)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21C630)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21C600)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21C790)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21C6C0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21B610)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21C930)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SETORCLEARRENDERTEXTURECREATIONFLAG_OFFSET UNITYSDK_OFFSET(0xA21BFC0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0xA21C9B0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0xA21C9D0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0xA21C9F0)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_BINDMS_OFFSET UNITYSDK_OFFSET(0xA21CA10)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_CREATEDFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0xA21B420)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA21CA30)
#define UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA21B6E0)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureDescriptor_TypeDefinitionIndex = 31076;

	class RenderTextureDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 _width_k__BackingField; // 0x10
		::System::Int32 _height_k__BackingField; // 0x14
		::System::Int32 _msaaSamples_k__BackingField; // 0x18
		::System::Int32 _volumeDepth_k__BackingField; // 0x1C
		::System::Int32 _mipCount_k__BackingField; // 0x20
		::UnityEngine::Experimental::Rendering::GraphicsFormat* _graphicsFormat; // 0x24
		::UnityEngine::Experimental::Rendering::GraphicsFormat* _stencilFormat_k__BackingField; // 0x28
		::UnityEngine::Experimental::Rendering::GraphicsFormat* _depthStencilFormat_k__BackingField; // 0x2C
		::UnityEngine::Rendering::TextureDimension* _dimension_k__BackingField; // 0x30
		::UnityEngine::Rendering::ShadowSamplingMode* _shadowSamplingMode_k__BackingField; // 0x34
		::UnityEngine::VRTextureUsage* _vrUsage_k__BackingField; // 0x38
		::UnityEngine::RenderTextureCreationFlags* _flags; // 0x3C
		::UnityEngine::RenderTextureMemoryless* _memoryless_k__BackingField; // 0x40

		::System::Int32 get_width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_msaaSamples()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MSAASAMPLES_OFFSET))(nullptr);
		}

		::System::Void set_msaaSamples(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MSAASAMPLES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_volumeDepth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VOLUMEDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_volumeDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VOLUMEDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_mipCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_MIPCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_mipCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MIPCOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* get_graphicsFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_GRAPHICSFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_GRAPHICSFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void set_stencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_STENCILFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* get_depthStencilFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DEPTHSTENCILFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DEPTHSTENCILFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureFormat* get_colorFormat()
		{
			return (return (::UnityEngine::RenderTextureFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_COLORFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_colorFormat(::UnityEngine::RenderTextureFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_COLORFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_sRGB()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SRGB_OFFSET))(nullptr);
		}

		::System::Void set_sRGB(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SRGB_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_depthBufferBits()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DEPTHBUFFERBITS_OFFSET))(nullptr);
		}

		::System::Void set_depthBufferBits(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DEPTHBUFFERBITS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::TextureDimension* get_dimension()
		{
			return (return (::UnityEngine::Rendering::TextureDimension*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_DIMENSION_OFFSET))(nullptr);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::TextureDimension*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_DIMENSION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::ShadowSamplingMode* get_shadowSamplingMode()
		{
			return (return (::UnityEngine::Rendering::ShadowSamplingMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_SHADOWSAMPLINGMODE_OFFSET))(nullptr);
		}

		::System::Void set_shadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShadowSamplingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_SHADOWSAMPLINGMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::VRTextureUsage* get_vrUsage()
		{
			return (return (::UnityEngine::VRTextureUsage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_VRUSAGE_OFFSET))(nullptr);
		}

		::System::Void set_vrUsage(::UnityEngine::VRTextureUsage* arg)
		{
			((::System::Void(*)(::UnityEngine::VRTextureUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_VRUSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_memoryless(::UnityEngine::RenderTextureMemoryless* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureMemoryless*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_MEMORYLESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureReadWrite* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureReadWrite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetOrClearRenderTextureCreationFlag(::System::Boolean arg, ::UnityEngine::RenderTextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::RenderTextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SETORCLEARRENDERTEXTURECREATIONFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_useMipMap(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEMIPMAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_autoGenerateMips(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_AUTOGENERATEMIPS_OFFSET))(arg, nullptr);
		}

		::System::Void set_enableRandomWrite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_ENABLERANDOMWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void set_bindMS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_BINDMS_OFFSET))(arg, nullptr);
		}

		::System::Void set_createdFromScript(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_CREATEDFROMSCRIPT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useDynamicScale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_GET_USEDYNAMICSCALE_OFFSET))(nullptr);
		}

		::System::Void set_useDynamicScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTUREDESCRIPTOR_SET_USEDYNAMICSCALE_OFFSET))(arg, nullptr);
		}

	};
}

