#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class TextureFormat; }
namespace UnityEngine { class RenderTextureFormat; }
namespace UnityEngine { class RenderTextureReadWrite; }
namespace UnityEngine::Rendering { class FormatSwizzle; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETFORMAT_OFFSET UNITYSDK_OFFSET(0xA270D00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA270D40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_TEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA270DD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA270E10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_RENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA270EA0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0xA270EE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETDEPTHSTENCILFORMATFROMBITSLEGACY_NATIVE_OFFSET UNITYSDK_OFFSET(0xA270FC0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETDEPTHSTENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA271000)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETDEPTHBITS_OFFSET UNITYSDK_OFFSET(0xA271080)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETDEPTHSTENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA2710C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISSRGBFORMAT_OFFSET UNITYSDK_OFFSET(0xA271330)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSRGBFORMAT_OFFSET UNITYSDK_OFFSET(0xA271370)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETLINEARFORMAT_OFFSET UNITYSDK_OFFSET(0xA2713B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETRENDERTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA2713F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0xA271430)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETFORMATSTRING_OFFSET UNITYSDK_OFFSET(0xA271470)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCOMPRESSEDTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0xA2714B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_CANDECOMPRESSFORMAT_OFFSET UNITYSDK_OFFSET(0xA2714F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_CANDECOMPRESSFORMAT_OFFSET UNITYSDK_OFFSET(0xA271530)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISALPHAONLYFORMAT_OFFSET UNITYSDK_OFFSET(0xA2715C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISDEPTHFORMAT_OFFSET UNITYSDK_OFFSET(0xA271600)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISSTENCILFORMAT_OFFSET UNITYSDK_OFFSET(0xA271640)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISPVRTCFORMAT_OFFSET UNITYSDK_OFFSET(0xA271680)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCRUNCHFORMAT_OFFSET UNITYSDK_OFFSET(0xA2716C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSWIZZLER_OFFSET UNITYSDK_OFFSET(0xA2716F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSWIZZLEG_OFFSET UNITYSDK_OFFSET(0xA271730)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSWIZZLEB_OFFSET UNITYSDK_OFFSET(0xA271770)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSWIZZLEA_OFFSET UNITYSDK_OFFSET(0xA2717B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0xA2717F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA271830)

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int GraphicsFormatUtility_TypeDefinitionIndex = 31655;

	class GraphicsFormatUtility : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* tableNoStencil; // 0x0
		::Il2CppArray<::System::Object*>* tableStencil; // 0x8

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetFormat(::UnityEngine::Texture* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetGraphicsFormat(::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetGraphicsFormat_Native_TextureFormat(::UnityEngine::TextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::TextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_TEXTUREFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetGraphicsFormat(::UnityEngine::RenderTextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::RenderTextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetGraphicsFormat_Native_RenderTextureFormat(::UnityEngine::RenderTextureFormat* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::RenderTextureFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_NATIVE_RENDERTEXTUREFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetGraphicsFormat(::UnityEngine::RenderTextureFormat* arg, ::UnityEngine::RenderTextureReadWrite* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::RenderTextureFormat*, ::UnityEngine::RenderTextureReadWrite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETGRAPHICSFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDepthStencilFormatFromBitsLegacy_Native(::System::Int32 arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETDEPTHSTENCILFORMATFROMBITSLEGACY_NATIVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDepthStencilFormat(::System::Int32 arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETDEPTHSTENCILFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDepthBits(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETDEPTHBITS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetDepthStencilFormat(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETDEPTHSTENCILFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISSRGBFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSRGBFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat* GetLinearFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::Experimental::Rendering::GraphicsFormat*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETLINEARFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTextureFormat* GetRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::RenderTextureFormat*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETRENDERTEXTUREFORMAT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetComponentCount(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::UInt32(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETCOMPONENTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::String* GetFormatString(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETFORMATSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCompressedTextureFormat(::UnityEngine::TextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCOMPRESSEDTEXTUREFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanDecompressFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_CANDECOMPRESSFORMAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanDecompressFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_CANDECOMPRESSFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAlphaOnlyFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISALPHAONLYFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDepthFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISDEPTHFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISSTENCILFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPVRTCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISPVRTCFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCrunchFormat(::UnityEngine::TextureFormat* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextureFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_ISCRUNCHFORMAT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::FormatSwizzle* GetSwizzleR(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::Rendering::FormatSwizzle*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSWIZZLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::FormatSwizzle* GetSwizzleG(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::Rendering::FormatSwizzle*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSWIZZLEG_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::FormatSwizzle* GetSwizzleB(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::Rendering::FormatSwizzle*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSWIZZLEB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::FormatSwizzle* GetSwizzleA(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::UnityEngine::Rendering::FormatSwizzle*(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETSWIZZLEA_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetBlockSize(::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::UInt32(*)(::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_GETBLOCKSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_GRAPHICSFORMATUTILITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

