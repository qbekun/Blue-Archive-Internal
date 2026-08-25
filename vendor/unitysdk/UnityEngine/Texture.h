#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering { class TextureDimension; }
namespace UnityEngine { class TextureWrapMode; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class ColorSpace; }
namespace UnityEngine { class TextureColorSpace; }
namespace UnityEngine { class TextureFormat; }
namespace UnityEngine::Experimental::Rendering { class FormatUsage; }
namespace UnityEngine { class UnityException; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_TEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA210A20)
#define UNITYENGINE_TEXTURE_GET_MIPMAPCOUNT_OFFSET UNITYSDK_OFFSET(0xA210A70)
#define UNITYENGINE_TEXTURE_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA210AB0)
#define UNITYENGINE_TEXTURE_GETDATAWIDTH_OFFSET UNITYSDK_OFFSET(0xA210B00)
#define UNITYENGINE_TEXTURE_GETDATAHEIGHT_OFFSET UNITYSDK_OFFSET(0xA210B40)
#define UNITYENGINE_TEXTURE_GETDIMENSION_OFFSET UNITYSDK_OFFSET(0xA210B80)
#define UNITYENGINE_TEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA210BC0)
#define UNITYENGINE_TEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA210C00)
#define UNITYENGINE_TEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA210C50)
#define UNITYENGINE_TEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA210C90)
#define UNITYENGINE_TEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xA210CE0)
#define UNITYENGINE_TEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xA210D20)
#define UNITYENGINE_TEXTURE_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0xA210D70)
#define UNITYENGINE_TEXTURE_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0xA210DB0)
#define UNITYENGINE_TEXTURE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0xA210DF0)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEU_OFFSET UNITYSDK_OFFSET(0xA210E30)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEU_OFFSET UNITYSDK_OFFSET(0xA210E70)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEV_OFFSET UNITYSDK_OFFSET(0xA210EB0)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEV_OFFSET UNITYSDK_OFFSET(0xA210EF0)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEW_OFFSET UNITYSDK_OFFSET(0xA210F30)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEW_OFFSET UNITYSDK_OFFSET(0xA210F70)
#define UNITYENGINE_TEXTURE_GET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0xA210FB0)
#define UNITYENGINE_TEXTURE_SET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0xA210FF0)
#define UNITYENGINE_TEXTURE_GET_ANISOLEVEL_OFFSET UNITYSDK_OFFSET(0xA211030)
#define UNITYENGINE_TEXTURE_SET_ANISOLEVEL_OFFSET UNITYSDK_OFFSET(0xA211070)
#define UNITYENGINE_TEXTURE_SET_MIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0xA2110B0)
#define UNITYENGINE_TEXTURE_GET_TEXELSIZE_OFFSET UNITYSDK_OFFSET(0xA211100)
#define UNITYENGINE_TEXTURE_GET_UPDATECOUNT_OFFSET UNITYSDK_OFFSET(0xA211190)
#define UNITYENGINE_TEXTURE_INTERNAL_GETACTIVETEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0xA2111D0)
#define UNITYENGINE_TEXTURE_GET_ACTIVETEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0xA211210)
#define UNITYENGINE_TEXTURE_GETPIXELDATASIZE_OFFSET UNITYSDK_OFFSET(0xA211260)
#define UNITYENGINE_TEXTURE_GETPIXELDATAOFFSET_OFFSET UNITYSDK_OFFSET(0xA2112B0)
#define UNITYENGINE_TEXTURE_GETTEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0xA211300)
#define UNITYENGINE_TEXTURE_GETTEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0xA211310)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xA211360)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0xA2114F0)
#define UNITYENGINE_TEXTURE_CREATENONREADABLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA211680)
#define UNITYENGINE_TEXTURE_CREATENATIVEARRAYLENGTHOVERFLOWEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA211710)
#define UNITYENGINE_TEXTURE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA211780)
#define UNITYENGINE_TEXTURE_GET_TEXELSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA211150)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture_TypeDefinitionIndex = 31068;

	class Texture : public Il2CppObject
	{
	public:
		::System::Int32 GenerateAllMips; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_mipmapCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_MIPMAPCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* get_graphicsFormat()
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_GRAPHICSFORMAT_OFFSET))(nullptr);
		}

		::System::Int32 GetDataWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDATAWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 GetDataHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDATAHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::TextureDimension* GetDimension()
		{
			return (return (::UnityEngine::Rendering::TextureDimension*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDIMENSION_OFFSET))(nullptr);
		}

		::System::Int32 get_width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_height(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_HEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::TextureDimension* get_dimension()
		{
			return (return (::UnityEngine::Rendering::TextureDimension*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_DIMENSION_OFFSET))(nullptr);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::TextureDimension*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_DIMENSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isReadable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ISREADABLE_OFFSET))(nullptr);
		}

		::UnityEngine::TextureWrapMode* get_wrapMode()
		{
			return (return (::UnityEngine::TextureWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODE_OFFSET))(nullptr);
		}

		::System::Void set_wrapMode(::UnityEngine::TextureWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::TextureWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextureWrapMode* get_wrapModeU()
		{
			return (return (::UnityEngine::TextureWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEU_OFFSET))(nullptr);
		}

		::System::Void set_wrapModeU(::UnityEngine::TextureWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::TextureWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEU_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextureWrapMode* get_wrapModeV()
		{
			return (return (::UnityEngine::TextureWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEV_OFFSET))(nullptr);
		}

		::System::Void set_wrapModeV(::UnityEngine::TextureWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::TextureWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEV_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextureWrapMode* get_wrapModeW()
		{
			return (return (::UnityEngine::TextureWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEW_OFFSET))(nullptr);
		}

		::System::Void set_wrapModeW(::UnityEngine::TextureWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::TextureWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEW_OFFSET))(arg, nullptr);
		}

		::UnityEngine::FilterMode* get_filterMode()
		{
			return (return (::UnityEngine::FilterMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_FILTERMODE_OFFSET))(nullptr);
		}

		::System::Void set_filterMode(::UnityEngine::FilterMode* arg)
		{
			((::System::Void(*)(::UnityEngine::FilterMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_FILTERMODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_anisoLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ANISOLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_anisoLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_ANISOLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_mipMapBias(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_MIPMAPBIAS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_texelSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TEXELSIZE_OFFSET))(nullptr);
		}

		::System::UInt32 get_updateCount()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_UPDATECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 Internal_GetActiveTextureColorSpace()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_INTERNAL_GETACTIVETEXTURECOLORSPACE_OFFSET))(nullptr);
		}

		::UnityEngine::ColorSpace* get_activeTextureColorSpace()
		{
			return (return (::UnityEngine::ColorSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ACTIVETEXTURECOLORSPACE_OFFSET))(nullptr);
		}

		::System::UInt64 GetPixelDataSize(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETPIXELDATASIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 GetPixelDataOffset(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETPIXELDATAOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::TextureColorSpace* GetTextureColorSpace(::System::Boolean arg)
		{
			return (return (::UnityEngine::TextureColorSpace*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETTEXTURECOLORSPACE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextureColorSpace* GetTextureColorSpace(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::TextureColorSpace*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETTEXTURECOLORSPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateFormat(::UnityEngine::TextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::Experimental::Rendering::FormatUsage* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::Experimental::Rendering::FormatUsage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture* arg)
		{
			return (return (::UnityEngine::UnityException*(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_CREATENONREADABLEEXCEPTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UnityException* CreateNativeArrayLengthOverflowException()
		{
			return (return (::UnityEngine::UnityException*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_CREATENATIVEARRAYLENGTHOVERFLOWEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void get_texelSize_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TEXELSIZE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

