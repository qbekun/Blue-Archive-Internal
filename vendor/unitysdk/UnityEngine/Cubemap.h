#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TextureFormat; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class TextureColorSpace; }
namespace UnityEngine::Experimental::Rendering { class TextureCreationFlags; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class CubemapFace; }
namespace UnityEngine::Experimental::Rendering { class DefaultFormat; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_CUBEMAP_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA2148E0)
#define UNITYENGINE_CUBEMAP_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0xA214920)
#define UNITYENGINE_CUBEMAP_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA214970)
#define UNITYENGINE_CUBEMAP_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0xA214A50)
#define UNITYENGINE_CUBEMAP_UPDATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA214AA0)
#define UNITYENGINE_CUBEMAP_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0xA214AE0)
#define UNITYENGINE_CUBEMAP_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0xA214B20)
#define UNITYENGINE_CUBEMAP_GETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0xA214BC0)
#define UNITYENGINE_CUBEMAP_SMOOTHEDGES_OFFSET UNITYSDK_OFFSET(0xA214CA0)
#define UNITYENGINE_CUBEMAP_SMOOTHEDGES_OFFSET UNITYSDK_OFFSET(0xA214CE0)
#define UNITYENGINE_CUBEMAP_GETPIXELS_OFFSET UNITYSDK_OFFSET(0xA214D20)
#define UNITYENGINE_CUBEMAP_GETPIXELS_OFFSET UNITYSDK_OFFSET(0xA214D70)
#define UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA214DB0)
#define UNITYENGINE_CUBEMAP_SETPIXELDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0xA214E00)
#define UNITYENGINE_CUBEMAP_SETPIXELDATAIMPL_OFFSET UNITYSDK_OFFSET(0xA214E50)
#define UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA214EA0)
#define UNITYENGINE_CUBEMAP_GETWRITABLEIMAGEDATA_OFFSET UNITYSDK_OFFSET(0xA214EF0)
#define UNITYENGINE_CUBEMAP_GET_ISPREPROCESSED_OFFSET UNITYSDK_OFFSET(0xA214F30)
#define UNITYENGINE_CUBEMAP_GET_STREAMINGMIPMAPS_OFFSET UNITYSDK_OFFSET(0xA214F70)
#define UNITYENGINE_CUBEMAP_GET_STREAMINGMIPMAPSPRIORITY_OFFSET UNITYSDK_OFFSET(0xA214FB0)
#define UNITYENGINE_CUBEMAP_GET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA214FF0)
#define UNITYENGINE_CUBEMAP_SET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA215030)
#define UNITYENGINE_CUBEMAP_GET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0xA215070)
#define UNITYENGINE_CUBEMAP_SET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0xA2150B0)
#define UNITYENGINE_CUBEMAP_GET_DESIREDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA2150F0)
#define UNITYENGINE_CUBEMAP_GET_LOADINGMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA215130)
#define UNITYENGINE_CUBEMAP_GET_LOADEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA215170)
#define UNITYENGINE_CUBEMAP_CLEARREQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA2151B0)
#define UNITYENGINE_CUBEMAP_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET UNITYSDK_OFFSET(0xA2151F0)
#define UNITYENGINE_CUBEMAP_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xA215230)
#define UNITYENGINE_CUBEMAP_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xA215300)
#define UNITYENGINE_CUBEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA215410)
#define UNITYENGINE_CUBEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA215450)
#define UNITYENGINE_CUBEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA215610)
#define UNITYENGINE_CUBEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA215880)
#define UNITYENGINE_CUBEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA215680)
#define UNITYENGINE_CUBEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA215B10)
#define UNITYENGINE_CUBEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA215B70)
#define UNITYENGINE_CUBEMAP_CREATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA215C10)
#define UNITYENGINE_CUBEMAP_SETPIXELDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_CUBEMAP_SETPIXELDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_CUBEMAP_GETPIXELDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET UNITYSDK_OFFSET(0xA215D30)
#define UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET UNITYSDK_OFFSET(0xA215DE0)
#define UNITYENGINE_CUBEMAP_GETPIXEL_OFFSET UNITYSDK_OFFSET(0xA215E90)
#define UNITYENGINE_CUBEMAP_GETPIXEL_OFFSET UNITYSDK_OFFSET(0xA215F50)
#define UNITYENGINE_CUBEMAP_APPLY_OFFSET UNITYSDK_OFFSET(0xA216020)
#define UNITYENGINE_CUBEMAP_APPLY_OFFSET UNITYSDK_OFFSET(0xA2160A0)
#define UNITYENGINE_CUBEMAP_APPLY_OFFSET UNITYSDK_OFFSET(0xA216120)
#define UNITYENGINE_CUBEMAP_VALIDATEISNOTCRUNCHED_OFFSET UNITYSDK_OFFSET(0xA215AA0)
#define UNITYENGINE_CUBEMAP_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA214B70)
#define UNITYENGINE_CUBEMAP_GETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA214C50)

namespace UnityEngine
{
	inline static constexpr unsigned int Cubemap_TypeDefinitionIndex = 31070;

	class Cubemap : public Il2CppObject
	{
	public:
		::UnityEngine::TextureFormat* get_format()
		{
			return (return (::UnityEngine::TextureFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Boolean Internal_CreateImpl(::UnityEngine::Cubemap* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Cubemap*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_INTERNAL_CREATEIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Cubemap* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Cubemap*, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_INTERNAL_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ApplyImpl(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLYIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateExternalTexture(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_UPDATEEXTERNALTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isReadable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_ISREADABLE_OFFSET))(nullptr);
		}

		::System::Void SetPixelImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* GetPixelImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SmoothEdges(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SMOOTHEDGES_OFFSET))(arg, nullptr);
		}

		::System::Void SmoothEdges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SMOOTHEDGES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPixels(::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELS_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPixels(::UnityEngine::CubemapFace* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::CubemapFace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELS_OFFSET))(arg, nullptr);
		}

		::System::Void SetPixels(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SetPixelDataImplArray(::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELDATAIMPLARRAY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SetPixelDataImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELDATAIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixels(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::CubemapFace* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::CubemapFace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetWritableImageData(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETWRITABLEIMAGEDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isPreProcessed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_ISPREPROCESSED_OFFSET))(nullptr);
		}

		::System::Boolean get_streamingMipmaps()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_STREAMINGMIPMAPS_OFFSET))(nullptr);
		}

		::System::Int32 get_streamingMipmapsPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_STREAMINGMIPMAPSPRIORITY_OFFSET))(nullptr);
		}

		::System::Int32 get_requestedMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_REQUESTEDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_requestedMipmapLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SET_REQUESTEDMIPMAPLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_loadAllMips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_LOADALLMIPS_OFFSET))(nullptr);
		}

		::System::Void set_loadAllMips(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SET_LOADALLMIPS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_desiredMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_DESIREDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_loadingMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_LOADINGMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_loadedMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GET_LOADEDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Void ClearRequestedMipmapLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_CLEARREQUESTEDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean IsRequestedMipmapLevelLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET))(nullptr);
		}

		::System::Boolean ValidateFormat(::UnityEngine::TextureFormat* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_VALIDATEFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_VALIDATEFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::DefaultFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Cubemap* CreateExternalTexture(::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Cubemap*(*)(::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_CREATEEXTERNALTEXTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixelData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixelData(Il2CppObject* arg, ::System::Int32 arg, ::UnityEngine::CubemapFace* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::UnityEngine::CubemapFace*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetPixelData(::System::Int32 arg, ::UnityEngine::CubemapFace* arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::UnityEngine::CubemapFace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPixel(::UnityEngine::CubemapFace* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::CubemapFace*, ::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixel(::UnityEngine::CubemapFace* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::CubemapFace*, ::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* GetPixel(::UnityEngine::CubemapFace* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::CubemapFace*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* GetPixel(::UnityEngine::CubemapFace* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::CubemapFace*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Apply(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_APPLY_OFFSET))(nullptr);
		}

		::System::Void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_VALIDATEISNOTCRUNCHED_OFFSET))(arg, nullptr);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_SETPIXELIMPL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetPixelImpl_Injected(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CUBEMAP_GETPIXELIMPL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

