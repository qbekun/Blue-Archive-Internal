#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TextureFormat; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class TextureColorSpace; }
namespace UnityEngine::Experimental::Rendering { class TextureCreationFlags; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::Experimental::Rendering { class DefaultFormat; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Rect&; }

#define UNITYENGINE_TEXTURE2D_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0xA2117C0)
#define UNITYENGINE_TEXTURE2D_GET_IGNOREMIPMAPLIMIT_OFFSET UNITYSDK_OFFSET(0xA211800)
#define UNITYENGINE_TEXTURE2D_SET_IGNOREMIPMAPLIMIT_OFFSET UNITYSDK_OFFSET(0xA211840)
#define UNITYENGINE_TEXTURE2D_GET_WHITETEXTURE_OFFSET UNITYSDK_OFFSET(0xA211880)
#define UNITYENGINE_TEXTURE2D_GET_BLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2118C0)
#define UNITYENGINE_TEXTURE2D_GET_REDTEXTURE_OFFSET UNITYSDK_OFFSET(0xA211900)
#define UNITYENGINE_TEXTURE2D_GET_GRAYTEXTURE_OFFSET UNITYSDK_OFFSET(0xA211940)
#define UNITYENGINE_TEXTURE2D_GET_LINEARGRAYTEXTURE_OFFSET UNITYSDK_OFFSET(0xA211980)
#define UNITYENGINE_TEXTURE2D_GET_NORMALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2119C0)
#define UNITYENGINE_TEXTURE2D_COMPRESS_OFFSET UNITYSDK_OFFSET(0xA211A00)
#define UNITYENGINE_TEXTURE2D_INTERNAL_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0xA211A40)
#define UNITYENGINE_TEXTURE2D_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA211A90)
#define UNITYENGINE_TEXTURE2D_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0xA211B70)
#define UNITYENGINE_TEXTURE2D_GET_VTONLY_OFFSET UNITYSDK_OFFSET(0xA211BB0)
#define UNITYENGINE_TEXTURE2D_APPLYIMPL_OFFSET UNITYSDK_OFFSET(0xA211BF0)
#define UNITYENGINE_TEXTURE2D_REINITIALIZEIMPL_OFFSET UNITYSDK_OFFSET(0xA211C40)
#define UNITYENGINE_TEXTURE2D_SETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0xA211C90)
#define UNITYENGINE_TEXTURE2D_GETPIXELIMPL_OFFSET UNITYSDK_OFFSET(0xA211D30)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_OFFSET UNITYSDK_OFFSET(0xA211E10)
#define UNITYENGINE_TEXTURE2D_REINITIALIZEWITHFORMATIMPL_OFFSET UNITYSDK_OFFSET(0xA211F10)
#define UNITYENGINE_TEXTURE2D_READPIXELSIMPL_OFFSET UNITYSDK_OFFSET(0xA211F60)
#define UNITYENGINE_TEXTURE2D_SETPIXELSIMPL_OFFSET UNITYSDK_OFFSET(0xA212000)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xA212050)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0xA2120A0)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPLARRAY_OFFSET UNITYSDK_OFFSET(0xA2120E0)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPL_OFFSET UNITYSDK_OFFSET(0xA212130)
#define UNITYENGINE_TEXTURE2D_GETWRITABLEIMAGEDATA_OFFSET UNITYSDK_OFFSET(0xA212180)
#define UNITYENGINE_TEXTURE2D_GETRAWIMAGEDATASIZE_OFFSET UNITYSDK_OFFSET(0xA2121C0)
#define UNITYENGINE_TEXTURE2D_GENERATEATLASIMPL_OFFSET UNITYSDK_OFFSET(0xA212200)
#define UNITYENGINE_TEXTURE2D_GET_ISPREPROCESSED_OFFSET UNITYSDK_OFFSET(0xA212250)
#define UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPS_OFFSET UNITYSDK_OFFSET(0xA212290)
#define UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPSPRIORITY_OFFSET UNITYSDK_OFFSET(0xA2122D0)
#define UNITYENGINE_TEXTURE2D_GET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA212310)
#define UNITYENGINE_TEXTURE2D_SET_REQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA212350)
#define UNITYENGINE_TEXTURE2D_GET_MINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA212390)
#define UNITYENGINE_TEXTURE2D_SET_MINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA2123D0)
#define UNITYENGINE_TEXTURE2D_GET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0xA212410)
#define UNITYENGINE_TEXTURE2D_SET_LOADALLMIPS_OFFSET UNITYSDK_OFFSET(0xA212450)
#define UNITYENGINE_TEXTURE2D_GET_CALCULATEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA212490)
#define UNITYENGINE_TEXTURE2D_GET_DESIREDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA2124D0)
#define UNITYENGINE_TEXTURE2D_GET_LOADINGMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA212510)
#define UNITYENGINE_TEXTURE2D_GET_LOADEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA212550)
#define UNITYENGINE_TEXTURE2D_CLEARREQUESTEDMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA212590)
#define UNITYENGINE_TEXTURE2D_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET UNITYSDK_OFFSET(0xA2125D0)
#define UNITYENGINE_TEXTURE2D_CLEARMINIMUMMIPMAPLEVEL_OFFSET UNITYSDK_OFFSET(0xA212610)
#define UNITYENGINE_TEXTURE2D_UPDATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA212650)
#define UNITYENGINE_TEXTURE2D_SETALLPIXELS32_OFFSET UNITYSDK_OFFSET(0xA212690)
#define UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32_OFFSET UNITYSDK_OFFSET(0xA2126E0)
#define UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0xA212730)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET UNITYSDK_OFFSET(0xA212770)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET UNITYSDK_OFFSET(0xA2127C0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET UNITYSDK_OFFSET(0xA212830)
#define UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET UNITYSDK_OFFSET(0xA212870)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET UNITYSDK_OFFSET(0xA2128B0)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET UNITYSDK_OFFSET(0xA212900)
#define UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET UNITYSDK_OFFSET(0xA212960)
#define UNITYENGINE_TEXTURE2D_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xA2129C0)
#define UNITYENGINE_TEXTURE2D_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xA212AA0)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA212BC0)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA212D60)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA212E10)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA212EC0)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA212F50)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA213110)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2131A0)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA213260)
#define UNITYENGINE_TEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0xA213320)
#define UNITYENGINE_TEXTURE2D_CREATEEXTERNALTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2133C0)
#define UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0xA213500)
#define UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET UNITYSDK_OFFSET(0xA2135A0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA213650)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA213710)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA2137D0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET UNITYSDK_OFFSET(0xA2138C0)
#define UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET UNITYSDK_OFFSET(0xA213980)
#define UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET UNITYSDK_OFFSET(0xA213A30)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET UNITYSDK_OFFSET(0xA213AF0)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET UNITYSDK_OFFSET(0xA213BB0)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0xA213C80)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0xA213DE0)
#define UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTURE2D_SETPIXELDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTURE2D_GETPIXELDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTURE2D_APPLY_OFFSET UNITYSDK_OFFSET(0xA213F00)
#define UNITYENGINE_TEXTURE2D_APPLY_OFFSET UNITYSDK_OFFSET(0xA213F80)
#define UNITYENGINE_TEXTURE2D_APPLY_OFFSET UNITYSDK_OFFSET(0xA214000)
#define UNITYENGINE_TEXTURE2D_REINITIALIZE_OFFSET UNITYSDK_OFFSET(0xA214070)
#define UNITYENGINE_TEXTURE2D_REINITIALIZE_OFFSET UNITYSDK_OFFSET(0xA2140F0)
#define UNITYENGINE_TEXTURE2D_REINITIALIZE_OFFSET UNITYSDK_OFFSET(0xA2141C0)
#define UNITYENGINE_TEXTURE2D_RESIZE_OFFSET UNITYSDK_OFFSET(0xA214240)
#define UNITYENGINE_TEXTURE2D_RESIZE_OFFSET UNITYSDK_OFFSET(0xA2142C0)
#define UNITYENGINE_TEXTURE2D_RESIZE_OFFSET UNITYSDK_OFFSET(0xA2142E0)
#define UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET UNITYSDK_OFFSET(0xA214360)
#define UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET UNITYSDK_OFFSET(0xA214400)
#define UNITYENGINE_TEXTURE2D_GENERATEATLAS_OFFSET UNITYSDK_OFFSET(0xA2144A0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0xA214660)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0xA2146B0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0xA2146F0)
#define UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET UNITYSDK_OFFSET(0xA214740)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET UNITYSDK_OFFSET(0xA2147C0)
#define UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET UNITYSDK_OFFSET(0xA214850)
#define UNITYENGINE_TEXTURE2D_SETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA211CE0)
#define UNITYENGINE_TEXTURE2D_GETPIXELIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA211DC0)
#define UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA211EB0)
#define UNITYENGINE_TEXTURE2D_READPIXELSIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA211FB0)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture2D_TypeDefinitionIndex = 31069;

	class Texture2D : public Il2CppObject
	{
	public:
		::System::Int32 streamingMipmapsPriorityMin; // 0x0
		::System::Int32 streamingMipmapsPriorityMax; // 0x0

		::UnityEngine::TextureFormat* get_format()
		{
			return (return (::UnityEngine::TextureFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Boolean get_ignoreMipmapLimit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_IGNOREMIPMAPLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_ignoreMipmapLimit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_IGNOREMIPMAPLIMIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture2D* get_whiteTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_WHITETEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_blackTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_BLACKTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_redTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_REDTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_grayTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_GRAYTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_linearGrayTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LINEARGRAYTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_normalTexture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_NORMALTEXTURE_OFFSET))(nullptr);
		}

		::System::Void Compress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_COMPRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Internal_CreateImpl(::UnityEngine::Texture2D* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_INTERNAL_CREATEIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::Texture2D* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::TextureColorSpace* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::TextureColorSpace*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_INTERNAL_CREATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_isReadable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ISREADABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_vtOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_VTONLY_OFFSET))(nullptr);
		}

		::System::Void ApplyImpl(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLYIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ReinitializeImpl(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_REINITIALIZEIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPixelImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* GetPixelImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* GetPixelBilinearImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ReinitializeWithFormatImpl(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_REINITIALIZEWITHFORMATIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadPixelsImpl(::UnityEngine::Rect* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELSIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixelsImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELSIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean LoadRawTextureDataImpl(::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LoadRawTextureDataImplArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATAIMPLARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean SetPixelDataImplArray(::System::Array* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPLARRAY_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SetPixelDataImpl(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATAIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetWritableImageData(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETWRITABLEIMAGEDATA_OFFSET))(arg, nullptr);
		}

		::System::UInt64 GetRawImageDataSize()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWIMAGEDATASIZE_OFFSET))(nullptr);
		}

		::System::Void GenerateAtlasImpl(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GENERATEATLASIMPL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_isPreProcessed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_ISPREPROCESSED_OFFSET))(nullptr);
		}

		::System::Boolean get_streamingMipmaps()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPS_OFFSET))(nullptr);
		}

		::System::Int32 get_streamingMipmapsPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_STREAMINGMIPMAPSPRIORITY_OFFSET))(nullptr);
		}

		::System::Int32 get_requestedMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_REQUESTEDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_requestedMipmapLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_REQUESTEDMIPMAPLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_minimumMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_MINIMUMMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_minimumMipmapLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_MINIMUMMIPMAPLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_loadAllMips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADALLMIPS_OFFSET))(nullptr);
		}

		::System::Void set_loadAllMips(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SET_LOADALLMIPS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_calculatedMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_CALCULATEDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_desiredMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_DESIREDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_loadingMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADINGMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_loadedMipmapLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GET_LOADEDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Void ClearRequestedMipmapLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CLEARREQUESTEDMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean IsRequestedMipmapLevelLoaded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_ISREQUESTEDMIPMAPLEVELLOADED_OFFSET))(nullptr);
		}

		::System::Void ClearMinimumMipmapLevel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CLEARMINIMUMMIPMAPLEVEL_OFFSET))(nullptr);
		}

		::System::Void UpdateExternalTexture(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_UPDATEEXTERNALTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAllPixels32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETALLPIXELS32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetBlockOfPixels32(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETBLOCKOFPIXELS32_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRawTextureData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPixels(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPixels(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPixels32(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPixels32()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS32_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* PackTextures(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PackTextures(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PackTextures(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_PACKTEXTURES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ValidateFormat(::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_VALIDATEFORMAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_VALIDATEFORMAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::DefaultFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::DefaultFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::TextureCreationFlags* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Int32, ::UnityEngine::Experimental::Rendering::TextureCreationFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Texture2D* CreateExternalTexture(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Texture2D*(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_CREATEEXTERNALTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixel(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetPixel(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixels(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixels(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixels(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPixels(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetPixel(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* GetPixel(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Color* GetPixelBilinear(::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color* GetPixelBilinear(::System::Single arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEAR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void LoadRawTextureData(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LoadRawTextureData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET))(arg, nullptr);
		}

		::System::Void LoadRawTextureData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_LOADRAWTEXTUREDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetPixelData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetPixelData(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetPixelData(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRawTextureData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETRAWTEXTUREDATA_OFFSET))(nullptr);
		}

		::System::Void Apply(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_APPLY_OFFSET))(nullptr);
		}

		::System::Boolean Reinitialize(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_REINITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Reinitialize(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_REINITIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Reinitialize(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_REINITIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Resize(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Resize(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Resize(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_RESIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadPixels(::UnityEngine::Rect* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadPixels(::UnityEngine::Rect* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GenerateAtlas(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GENERATEATLAS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixels32(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPixels32(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET))(arg, nullptr);
		}

		::System::Void SetPixels32(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPixels32(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELS32_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPixels(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPixels()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELS_OFFSET))(nullptr);
		}

		::System::Void SetPixelImpl_Injected(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_SETPIXELIMPL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetPixelImpl_Injected(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELIMPL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetPixelBilinearImpl_Injected(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_GETPIXELBILINEARIMPL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReadPixelsImpl_Injected(::UnityEngine::Rect&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE2D_READPIXELSIMPL_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

