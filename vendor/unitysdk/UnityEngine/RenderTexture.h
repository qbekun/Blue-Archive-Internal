#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class VRTextureUsage; }
namespace UnityEngine { class RenderTextureMemoryless; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class RenderBuffer; }
namespace UnityEngine::Rendering { class ShadowSamplingMode; }
namespace UnityEngine { class RenderTextureDescriptor; }
namespace UnityEngine::Experimental::Rendering { class DefaultFormat; }
namespace UnityEngine { class RenderTextureReadWrite; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class RenderBuffer&; }
namespace UnityEngine { class RenderTextureDescriptor&; }

#define UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA2184D0)
#define UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA218510)
#define UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA218550)
#define UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA218590)
#define UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xA2185D0)
#define UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xA218610)
#define UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA218650)
#define UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA218690)
#define UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0xA2186D0)
#define UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET UNITYSDK_OFFSET(0xA218710)
#define UNITYENGINE_RENDERTEXTURE_GET_SRGB_OFFSET UNITYSDK_OFFSET(0xA218750)
#define UNITYENGINE_RENDERTEXTURE_GET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0xA218790)
#define UNITYENGINE_RENDERTEXTURE_SET_VRUSAGE_OFFSET UNITYSDK_OFFSET(0xA2187D0)
#define UNITYENGINE_RENDERTEXTURE_GET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0xA218810)
#define UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET UNITYSDK_OFFSET(0xA218850)
#define UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA218890)
#define UNITYENGINE_RENDERTEXTURE_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA218A30)
#define UNITYENGINE_RENDERTEXTURE_GET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA218AD0)
#define UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA218B10)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHSTENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA218B50)
#define UNITYENGINE_RENDERTEXTURE_SET_DEPTHSTENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA218B90)
#define UNITYENGINE_RENDERTEXTURE_GET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0xA218BD0)
#define UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET UNITYSDK_OFFSET(0xA218C10)
#define UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0xA218C50)
#define UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET UNITYSDK_OFFSET(0xA218C90)
#define UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0xA218CD0)
#define UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET UNITYSDK_OFFSET(0xA218D10)
#define UNITYENGINE_RENDERTEXTURE_GET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0xA218D50)
#define UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET UNITYSDK_OFFSET(0xA218D90)
#define UNITYENGINE_RENDERTEXTURE_GET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0xA218DD0)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0xA218E10)
#define UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA218E50)
#define UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0xA218E90)
#define UNITYENGINE_RENDERTEXTURE_GETISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0xA218ED0)
#define UNITYENGINE_RENDERTEXTURE_GET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0xA218F10)
#define UNITYENGINE_RENDERTEXTURE_SET_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0xA218F50)
#define UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET UNITYSDK_OFFSET(0xA218F60)
#define UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xA218FA0)
#define UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA218FE0)
#define UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA219020)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_OFFSET UNITYSDK_OFFSET(0xA219060)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0xA2190F0)
#define UNITYENGINE_RENDERTEXTURE_SETMIPMAPCOUNT_OFFSET UNITYSDK_OFFSET(0xA219180)
#define UNITYENGINE_RENDERTEXTURE_SETSHADOWSAMPLINGMODE_OFFSET UNITYSDK_OFFSET(0xA2191C0)
#define UNITYENGINE_RENDERTEXTURE_GET_COLORBUFFER_OFFSET UNITYSDK_OFFSET(0xA219200)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTHBUFFER_OFFSET UNITYSDK_OFFSET(0xA219260)
#define UNITYENGINE_RENDERTEXTURE_GETNATIVEDEPTHBUFFERPTR_OFFSET UNITYSDK_OFFSET(0xA2192C0)
#define UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET UNITYSDK_OFFSET(0xA219300)
#define UNITYENGINE_RENDERTEXTURE_MARKRESTOREEXPECTED_OFFSET UNITYSDK_OFFSET(0xA219350)
#define UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET UNITYSDK_OFFSET(0xA219390)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEAA_OFFSET UNITYSDK_OFFSET(0xA2193D0)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEAATO_OFFSET UNITYSDK_OFFSET(0xA219410)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET UNITYSDK_OFFSET(0xA219450)
#define UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET UNITYSDK_OFFSET(0xA219490)
#define UNITYENGINE_RENDERTEXTURE_SETGLOBALSHADERPROPERTY_OFFSET UNITYSDK_OFFSET(0xA2194D0)
#define UNITYENGINE_RENDERTEXTURE_CREATE_OFFSET UNITYSDK_OFFSET(0xA219510)
#define UNITYENGINE_RENDERTEXTURE_RELEASE_OFFSET UNITYSDK_OFFSET(0xA219550)
#define UNITYENGINE_RENDERTEXTURE_ISCREATED_OFFSET UNITYSDK_OFFSET(0xA219590)
#define UNITYENGINE_RENDERTEXTURE_GENERATEMIPS_OFFSET UNITYSDK_OFFSET(0xA2195D0)
#define UNITYENGINE_RENDERTEXTURE_CONVERTTOEQUIRECT_OFFSET UNITYSDK_OFFSET(0xA219610)
#define UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET UNITYSDK_OFFSET(0xA219660)
#define UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA2196A0)
#define UNITYENGINE_RENDERTEXTURE_SUPPORTSSTENCIL_OFFSET UNITYSDK_OFFSET(0xA2196E0)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA219720)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA2189B0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2197E0)
#define UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET UNITYSDK_OFFSET(0xA219860)
#define UNITYENGINE_RENDERTEXTURE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0xA2198A0)
#define UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0xA2198E0)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA219920)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2199D0)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA219FB0)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21A300)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21A6C0)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21A750)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21A470)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21AAC0)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21AB50)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21AE60)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21AFE0)
#define UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21AEF0)
#define UNITYENGINE_RENDERTEXTURE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA21AC50)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHSTENCILFORMATLEGACY_OFFSET UNITYSDK_OFFSET(0xA21AA50)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHSTENCILFORMATLEGACY_OFFSET UNITYSDK_OFFSET(0xA21B180)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHSTENCILFORMATLEGACY_OFFSET UNITYSDK_OFFSET(0xA21B260)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHSTENCILFORMATLEGACY_OFFSET UNITYSDK_OFFSET(0xA21B1F0)
#define UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA21A260)
#define UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA21B2D0)
#define UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET UNITYSDK_OFFSET(0xA219B40)
#define UNITYENGINE_RENDERTEXTURE_GETDEFAULTCOLORFORMAT_OFFSET UNITYSDK_OFFSET(0xA21A3C0)
#define UNITYENGINE_RENDERTEXTURE_GETDEFAULTDEPTHSTENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA21A3E0)
#define UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET UNITYSDK_OFFSET(0xA21B060)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21B380)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET UNITYSDK_OFFSET(0xA21B440)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21B700)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21B7D0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21B890)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21B950)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21B970)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21B990)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21BA70)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21BAC0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21BB10)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21BB50)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21BB90)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21BBD0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0xA21BC60)
#define UNITYENGINE_RENDERTEXTURE_GET_ISCUBEMAP_OFFSET UNITYSDK_OFFSET(0xA21BCF0)
#define UNITYENGINE_RENDERTEXTURE_SET_ISCUBEMAP_OFFSET UNITYSDK_OFFSET(0xA21BD10)
#define UNITYENGINE_RENDERTEXTURE_GET_ISVOLUME_OFFSET UNITYSDK_OFFSET(0xA21BD50)
#define UNITYENGINE_RENDERTEXTURE_SET_ISVOLUME_OFFSET UNITYSDK_OFFSET(0xA21BD70)
#define UNITYENGINE_RENDERTEXTURE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA21BDB0)
#define UNITYENGINE_RENDERTEXTURE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA21BDC0)
#define UNITYENGINE_RENDERTEXTURE_GETTEXELOFFSET_OFFSET UNITYSDK_OFFSET(0xA21BDD0)
#define UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2190B0)
#define UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA219140)
#define UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA219760)
#define UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2197A0)
#define UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA219820)

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTexture_TypeDefinitionIndex = 31074;

	class RenderTexture : public Il2CppObject
	{
	public:
		::System::Int32 get_width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::TextureDimension* get_dimension()
		{
			return (return (::UnityEngine::Rendering::TextureDimension*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DIMENSION_OFFSET))(nullptr);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::TextureDimension*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DIMENSION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* get_graphicsFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_GRAPHICSFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_GRAPHICSFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useMipMap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEMIPMAP_OFFSET))(nullptr);
		}

		::System::Void set_useMipMap(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEMIPMAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_sRGB()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_SRGB_OFFSET))(nullptr);
		}

		::UnityEngine::VRTextureUsage* get_vrUsage()
		{
			return (return (::UnityEngine::VRTextureUsage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_VRUSAGE_OFFSET))(nullptr);
		}

		::System::Void set_vrUsage(::UnityEngine::VRTextureUsage* arg)
		{
			((::System::Void(*)(::UnityEngine::VRTextureUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_VRUSAGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureMemoryless* get_memorylessMode()
		{
			return (return (::UnityEngine::RenderTextureMemoryless*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_MEMORYLESSMODE_OFFSET))(nullptr);
		}

		::System::Void set_memorylessMode(::UnityEngine::RenderTextureMemoryless* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureMemoryless*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_MEMORYLESSMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureFormat* get_format()
		{
			return (return (::UnityEngine::RenderTextureFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void set_format(::UnityEngine::RenderTextureFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_FORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* get_stencilFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_STENCILFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_stencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_STENCILFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* get_depthStencilFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTHSTENCILFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DEPTHSTENCILFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_autoGenerateMips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_AUTOGENERATEMIPS_OFFSET))(nullptr);
		}

		::System::Void set_autoGenerateMips(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_AUTOGENERATEMIPS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_volumeDepth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_VOLUMEDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_volumeDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_VOLUMEDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_antiAliasing()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ANTIALIASING_OFFSET))(nullptr);
		}

		::System::Void set_antiAliasing(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ANTIALIASING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_bindTextureMS()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_BINDTEXTUREMS_OFFSET))(nullptr);
		}

		::System::Void set_bindTextureMS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_BINDTEXTUREMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enableRandomWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ENABLERANDOMWRITE_OFFSET))(nullptr);
		}

		::System::Void set_enableRandomWrite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ENABLERANDOMWRITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useDynamicScale()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_USEDYNAMICSCALE_OFFSET))(nullptr);
		}

		::System::Void set_useDynamicScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_USEDYNAMICSCALE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetIsPowerOfTwo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETISPOWEROFTWO_OFFSET))(nullptr);
		}

		::System::Boolean get_isPowerOfTwo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISPOWEROFTWO_OFFSET))(nullptr);
		}

		::System::Void set_isPowerOfTwo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISPOWEROFTWO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetActive()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETACTIVE_OFFSET))(nullptr);
		}

		::System::Void SetActive(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* get_active()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_active(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ACTIVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderBuffer* GetColorBuffer()
		{
			return (return (::UnityEngine::RenderBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_OFFSET))(nullptr);
		}

		::UnityEngine::RenderBuffer* GetDepthBuffer()
		{
			return (return (::UnityEngine::RenderBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_OFFSET))(nullptr);
		}

		::System::Void SetMipMapCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETMIPMAPCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void SetShadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::ShadowSamplingMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETSHADOWSAMPLINGMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderBuffer* get_colorBuffer()
		{
			return (return (::UnityEngine::RenderBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_COLORBUFFER_OFFSET))(nullptr);
		}

		::UnityEngine::RenderBuffer* get_depthBuffer()
		{
			return (return (::UnityEngine::RenderBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTHBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 GetNativeDepthBufferPtr()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETNATIVEDEPTHBUFFERPTR_OFFSET))(nullptr);
		}

		::System::Void DiscardContents(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MarkRestoreExpected()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_MARKRESTOREEXPECTED_OFFSET))(nullptr);
		}

		::System::Void DiscardContents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_DISCARDCONTENTS_OFFSET))(nullptr);
		}

		::System::Void ResolveAA()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEAA_OFFSET))(nullptr);
		}

		::System::Void ResolveAATo(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEAATO_OFFSET))(arg, nullptr);
		}

		::System::Void ResolveAntiAliasedSurface()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET))(nullptr);
		}

		::System::Void ResolveAntiAliasedSurface(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RESOLVEANTIALIASEDSURFACE_OFFSET))(arg, nullptr);
		}

		::System::Void SetGlobalShaderProperty(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETGLOBALSHADERPROPERTY_OFFSET))(str, nullptr);
		}

		::System::Boolean Create()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_CREATE_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RELEASE_OFFSET))(nullptr);
		}

		::System::Boolean IsCreated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_ISCREATED_OFFSET))(nullptr);
		}

		::System::Void GenerateMips()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GENERATEMIPS_OFFSET))(nullptr);
		}

		::System::Void ConvertToEquirect(::UnityEngine::RenderTexture* arg, MonoOrStereoscopicEye* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, MonoOrStereoscopicEye*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_CONVERTTOEQUIRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSRGBReadWrite(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETSRGBREADWRITE_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsStencil(::UnityEngine::RenderTexture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SUPPORTSSTENCIL_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* GetDescriptor()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_OFFSET))(nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseTemporary(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_RELEASETEMPORARY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::Void set_depth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::DefaultFormat* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_INITIALIZE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDepthStencilFormatLegacy(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHSTENCILFORMATLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDepthStencilFormatLegacy(::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Int32, ::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHSTENCILFORMATLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDepthStencilFormatLegacy(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::DefaultFormat* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHSTENCILFORMATLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDepthStencilFormatLegacy(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHSTENCILFORMATLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RenderTextureDescriptor* get_descriptor()
		{
			return (return (::UnityEngine::RenderTextureDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_DESCRIPTOR_OFFSET))(nullptr);
		}

		::System::Void set_descriptor(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_DESCRIPTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateRenderTextureDesc(::UnityEngine::RenderTextureDescriptor* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_VALIDATERENDERTEXTUREDESC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDefaultColorFormat(::UnityEngine::Experimental::Rendering::DefaultFormat* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::Experimental::Rendering::DefaultFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEFAULTCOLORFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDefaultDepthStencilFormat(::UnityEngine::Experimental::Rendering::DefaultFormat* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::Experimental::Rendering::DefaultFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEFAULTDEPTHSTENCILFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetCompatibleFormat(::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOMPATIBLEFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::UnityEngine::RenderTextureDescriptor* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporaryImpl(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::UnityEngine::RenderTextureMemoryless* arg, ::UnityEngine::VRTextureUsage* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::UnityEngine::RenderTextureMemoryless*, ::UnityEngine::VRTextureUsage*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARYIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::UnityEngine::RenderTextureMemoryless* arg, ::UnityEngine::VRTextureUsage* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::UnityEngine::RenderTextureMemoryless*, ::UnityEngine::VRTextureUsage*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::UnityEngine::RenderTextureMemoryless* arg, ::UnityEngine::VRTextureUsage* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::UnityEngine::RenderTextureMemoryless*, ::UnityEngine::VRTextureUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::UnityEngine::RenderTextureMemoryless* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::UnityEngine::RenderTextureMemoryless*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg, ::System::Int32 arg, ::UnityEngine::RenderTextureMemoryless* arg, ::UnityEngine::VRTextureUsage* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::System::Int32, ::UnityEngine::RenderTextureMemoryless*, ::UnityEngine::VRTextureUsage*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg, ::System::Int32 arg, ::UnityEngine::RenderTextureMemoryless* arg, ::UnityEngine::VRTextureUsage* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::System::Int32, ::UnityEngine::RenderTextureMemoryless*, ::UnityEngine::VRTextureUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg, ::System::Int32 arg, ::UnityEngine::RenderTextureMemoryless* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::System::Int32, ::UnityEngine::RenderTextureMemoryless*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RenderTextureFormat* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_isCubemap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISCUBEMAP_OFFSET))(nullptr);
		}

		::System::Void set_isCubemap(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISCUBEMAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isVolume()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ISVOLUME_OFFSET))(nullptr);
		}

		::System::Void set_isVolume(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ISVOLUME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetTexelOffset()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEXELOFFSET_OFFSET))(nullptr);
		}

		::System::Void GetColorBuffer_Injected(::UnityEngine::RenderBuffer&* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETCOLORBUFFER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetDepthBuffer_Injected(::UnityEngine::RenderBuffer&* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDEPTHBUFFER_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetRenderTextureDescriptor_Injected(::UnityEngine::RenderTextureDescriptor&* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_SETRENDERTEXTUREDESCRIPTOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetDescriptor_Injected(::UnityEngine::RenderTextureDescriptor&* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTextureDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETDESCRIPTOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* GetTemporary_Internal_Injected(::UnityEngine::RenderTextureDescriptor&* arg)
		{
			return (return (::UnityEngine::RenderTexture*(*)(::UnityEngine::RenderTextureDescriptor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERTEXTURE_GETTEMPORARY_INTERNAL_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

