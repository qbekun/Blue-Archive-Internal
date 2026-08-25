#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC0C60)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GET_MIPPADDING_OFFSET UNITYSDK_OFFSET(0x9FC1100)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETTEXTUREPADDING_OFFSET UNITYSDK_OFFSET(0x9FC1110)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETPAYLOADSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x9FC1140)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETPAYLOADSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x9FC1310)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLIT2DTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC13C0)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLITTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC19D0)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLITTEXTUREMULTIPLY_OFFSET UNITYSDK_OFFSET(0x9FC1C90)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLITOCTAHEDRALTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC1E20)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLITOCTAHEDRALTEXTUREMULTIPLY_OFFSET UNITYSDK_OFFSET(0x9FC1FB0)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_TEXTURESIZETOPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x9FC2140)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETPOWEROFTWOTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x9FC12A0)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_ALLOCATETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC2170)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESETREQUESTEDTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC2700)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESERVESPACE_OFFSET UNITYSDK_OFFSET(0x9FC2750)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESERVESPACE_OFFSET UNITYSDK_OFFSET(0x9FC27C0)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESERVESPACE_OFFSET UNITYSDK_OFFSET(0x9FC29B0)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESERVESPACE_OFFSET UNITYSDK_OFFSET(0x9FC2820)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RELAYOUTENTRIES_OFFSET UNITYSDK_OFFSET(0x9FC2B50)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETAPPROXCACHESIZEINBYTE_OFFSET UNITYSDK_OFFSET(0x9FC3160)
#define UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETMAXCACHESIZEFORWEIGHTINBYTE_OFFSET UNITYSDK_OFFSET(0x9FC3220)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PowerOfTwoTextureAtlas_TypeDefinitionIndex = 34024;

	class PowerOfTwoTextureAtlas : public Il2CppObject
	{
	public:
		::System::Int32 m_MipPadding; // 0x48
		::System::Single k_MipmapFactorApprox; // 0x0
		Il2CppObject* m_RequestedTextures; // 0x50

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_.CTOR_OFFSET))(arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Int32 get_mipPadding()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GET_MIPPADDING_OFFSET))(nullptr);
		}

		::System::Int32 GetTexturePadding()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETTEXTUREPADDING_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* GetPayloadScaleOffset(::UnityEngine::Texture* arg, ::UnityEngine::Vector4&* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Texture*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETPAYLOADSCALEOFFSET_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector4* GetPayloadScaleOffset(::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector4&* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETPAYLOADSCALEOFFSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, BlitType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Boolean, BlitType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLIT2DTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLITTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitTextureMultiply(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLITTEXTUREMULTIPLY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLITOCTAHEDRALTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitOctahedralTextureMultiply(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_BLITOCTAHEDRALTEXTUREMULTIPLY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TextureSizeToPowerOfTwo(::UnityEngine::Texture* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_TEXTURESIZETOPOWEROFTWO_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetPowerOfTwoTextureSize(::UnityEngine::Texture* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETPOWEROFTWOTEXTURESIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AllocateTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4&*, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_ALLOCATETEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ResetRequestedTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESETREQUESTEDTEXTURE_OFFSET))(nullptr);
		}

		::System::Boolean ReserveSpace(::UnityEngine::Texture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESERVESPACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReserveSpace(::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESERVESPACE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ReserveSpace(::UnityEngine::Texture* arg, ::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESERVESPACE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ReserveSpace(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RESERVESPACE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean RelayoutEntries()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_RELAYOUTENTRIES_OFFSET))(nullptr);
		}

		::System::Int64 GetApproxCacheSizeInByte(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETAPPROXCACHESIZEINBYTE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetMaxCacheSizeForWeightInByte(::System::Int32 arg, ::System::Boolean arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_POWEROFTWOTEXTUREATLAS_GETMAXCACHESIZEFORWEIGHTINBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

