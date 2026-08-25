#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Experimental::Rendering { class GraphicsFormat; }
namespace UnityEngine::Rendering { class AtlasAllocator; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class FilterMode; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Vector4&; }
namespace UnityEngine { class Vector2Int; }

#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_GET_MAXMIPLEVELPADDING_OFFSET UNITYSDK_OFFSET(0x9FC7DA0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC7DF0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC0D60)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FC7E00)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_RESETALLOCATOR_OFFSET UNITYSDK_OFFSET(0x9FC30C0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_CLEARTARGET_OFFSET UNITYSDK_OFFSET(0x9FC7EE0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETTEXTUREMIPMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x9FC1900)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_IS2D_OFFSET UNITYSDK_OFFSET(0x9FC1B60)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ISSINGLECHANNELBLIT_OFFSET UNITYSDK_OFFSET(0x9FC8130)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_BLIT2DTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC83A0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_MARKGPUTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x9FC1C20)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_MARKGPUTEXTUREINVALID_OFFSET UNITYSDK_OFFSET(0x9FC8720)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_BLITTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC8770)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_BLITOCTAHEDRALTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC89A0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_BLITCUBETEXTURE2D_OFFSET UNITYSDK_OFFSET(0x9FC8A10)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ALLOCATETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC2450)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ALLOCATETEXTUREWITHOUTBLIT_OFFSET UNITYSDK_OFFSET(0x9FC8BC0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ALLOCATETEXTUREWITHOUTBLIT_OFFSET UNITYSDK_OFFSET(0x9FC8C20)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETTEXTUREHASH_OFFSET UNITYSDK_OFFSET(0x9FC8E20)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETTEXTUREID_OFFSET UNITYSDK_OFFSET(0x9FC2800)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETTEXTUREID_OFFSET UNITYSDK_OFFSET(0x9FC2A20)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ISCACHED_OFFSET UNITYSDK_OFFSET(0x9FC8E90)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ISCACHED_OFFSET UNITYSDK_OFFSET(0x9FC8F40)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ISCACHED_OFFSET UNITYSDK_OFFSET(0x9FC2AE0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETCACHEDTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x9FC2A70)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_NEEDSUPDATE_OFFSET UNITYSDK_OFFSET(0x9FC8FC0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_NEEDSUPDATE_OFFSET UNITYSDK_OFFSET(0x9FC9210)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC96B0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_UPDATETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC97B0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_UPDATETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FC9AD0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_ENSURETEXTURESLOT_OFFSET UNITYSDK_OFFSET(0x9FC9BA0)
#define UNITYENGINE_RENDERING_TEXTURE2DATLAS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FC9D70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Texture2DAtlas_TypeDefinitionIndex = 34035;

	class Texture2DAtlas : public Il2CppObject
	{
	public:
		::System::Int32 kGPUTexInvalid; // 0x0
		::System::Int32 kGPUTexValidMip0; // 0x0
		::System::Int32 kGPUTexValidMipAll; // 0x0
		::UnityEngine::Rendering::RTHandle* m_AtlasTexture; // 0x10
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C
		::UnityEngine::Experimental::Rendering::GraphicsFormat* m_Format; // 0x20
		::System::Boolean m_UseMipMaps; // 0x24
		::System::Boolean m_IsAtlasTextureOwner; // 0x25
		::UnityEngine::Rendering::AtlasAllocator* m_AtlasAllocator; // 0x28
		Il2CppObject* m_AllocationCache; // 0x30
		Il2CppObject* m_IsGPUTextureUpToDate; // 0x38
		Il2CppObject* m_TextureHashes; // 0x40
		::UnityEngine::Vector4* fullScaleOffset; // 0x0
		::System::Int32 s_MaxMipLevelPadding; // 0x10

		::System::Int32 get_maxMipLevelPadding()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_GET_MAXMIPLEVELPADDING_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandle* get_AtlasTexture()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_GET_ATLASTEXTURE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Experimental::Rendering::GraphicsFormat* arg, ::UnityEngine::FilterMode* arg, ::System::Boolean arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Experimental::Rendering::GraphicsFormat*, ::UnityEngine::FilterMode*, ::System::Boolean, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_RELEASE_OFFSET))(nullptr);
		}

		::System::Void ResetAllocator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_RESETALLOCATOR_OFFSET))(nullptr);
		}

		::System::Void ClearTarget(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_CLEARTARGET_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTextureMipmapCount(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETTEXTUREMIPMAPCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Is2D(::UnityEngine::Texture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_IS2D_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSingleChannelBlit(::UnityEngine::Texture* arg, ::UnityEngine::Texture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ISSINGLECHANNELBLIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, BlitType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Boolean, BlitType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_BLIT2DTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MarkGPUTextureValid(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_MARKGPUTEXTUREVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MarkGPUTextureInvalid(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_MARKGPUTEXTUREINVALID_OFFSET))(arg, nullptr);
		}

		::System::Void BlitTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_BLITTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitOctahedralTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::UnityEngine::Vector4*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_BLITOCTAHEDRALTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlitCubeTexture2D(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Texture* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4*, ::UnityEngine::Texture*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_BLITCUBETEXTURE2D_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AllocateTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4&*, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ALLOCATETEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AllocateTextureWithoutBlit(::UnityEngine::Texture* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ALLOCATETEXTUREWITHOUTBLIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AllocateTextureWithoutBlit(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Vector4&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ALLOCATETEXTUREWITHOUTBLIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetTextureHash(::UnityEngine::Texture* arg, ::UnityEngine::Texture* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETTEXTUREHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetTextureID(::UnityEngine::Texture* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETTEXTUREID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTextureID(::UnityEngine::Texture* arg, ::UnityEngine::Texture* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETTEXTUREID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsCached(::UnityEngine::Vector4&* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Texture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4&*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ISCACHED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsCached(::UnityEngine::Vector4&* arg, ::UnityEngine::Texture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4&*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ISCACHED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsCached(::UnityEngine::Vector4&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ISCACHED_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2Int* GetCachedTextureSize(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2Int*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_GETCACHEDTEXTURESIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean NeedsUpdate(::UnityEngine::Texture* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_NEEDSUPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean NeedsUpdate(::UnityEngine::Texture* arg, ::UnityEngine::Texture* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_NEEDSUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AddTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Texture* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4&*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ADDTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UpdateTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4&* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::UnityEngine::Vector4&*, ::UnityEngine::Vector4*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_UPDATETEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean UpdateTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Texture* arg, ::UnityEngine::Vector4&* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4&*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_UPDATETEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean EnsureTextureSlot(bool&* arg, ::UnityEngine::Vector4&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(bool&*, ::UnityEngine::Vector4&*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_ENSURETEXTURESLOT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURE2DATLAS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

