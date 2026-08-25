#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Rendering { class TextureDimension; }

#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x9FCBE10)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKTEXTURE3D_OFFSET UNITYSDK_OFFSET(0x9FCBE60)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATETEXTURE2DARRAYFROMTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x9FCBF40)
#define UNITYENGINE_RENDERING_TEXTUREXR_SET_MAXVIEWS_OFFSET UNITYSDK_OFFSET(0x9FCC190)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FCC1E0)
#define UNITYENGINE_RENDERING_TEXTUREXR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9FCC350)
#define UNITYENGINE_RENDERING_TEXTUREXR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FCD1B0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKUINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FCD1F0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETWHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x9FCD2E0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_SLICES_OFFSET UNITYSDK_OFFSET(0x9FCD3D0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETCLEARTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FCD420)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_USETEXARRAY_OFFSET UNITYSDK_OFFSET(0x9FCC2D0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE3D_OFFSET UNITYSDK_OFFSET(0x9FCD510)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x9FCD560)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x9FCCC90)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x9FCCF20)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETMAGENTATEXTURE_OFFSET UNITYSDK_OFFSET(0x9FCD610)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureXR_TypeDefinitionIndex = 34041;

	class TextureXR : public Il2CppObject
	{
	public:
		::System::Int32 m_MaxViews; // 0x0
		::UnityEngine::Texture* m_BlackUIntTexture2DArray; // 0x8
		::UnityEngine::Texture* m_BlackUIntTexture; // 0x10
		::UnityEngine::Rendering::RTHandle* m_BlackUIntTexture2DArrayRTH; // 0x18
		::UnityEngine::Rendering::RTHandle* m_BlackUIntTextureRTH; // 0x20
		::UnityEngine::Texture2DArray* m_ClearTexture2DArray; // 0x28
		::UnityEngine::Texture2D* m_ClearTexture; // 0x30
		::UnityEngine::Rendering::RTHandle* m_ClearTexture2DArrayRTH; // 0x38
		::UnityEngine::Rendering::RTHandle* m_ClearTextureRTH; // 0x40
		::UnityEngine::Texture2DArray* m_MagentaTexture2DArray; // 0x48
		::UnityEngine::Texture2D* m_MagentaTexture; // 0x50
		::UnityEngine::Rendering::RTHandle* m_MagentaTexture2DArrayRTH; // 0x58
		::UnityEngine::Rendering::RTHandle* m_MagentaTextureRTH; // 0x60
		::UnityEngine::Texture2D* m_BlackTexture; // 0x68
		::UnityEngine::Texture3D* m_BlackTexture3D; // 0x70
		::UnityEngine::Texture2DArray* m_BlackTexture2DArray; // 0x78
		::UnityEngine::Rendering::RTHandle* m_BlackTexture2DArrayRTH; // 0x80
		::UnityEngine::Rendering::RTHandle* m_BlackTextureRTH; // 0x88
		::UnityEngine::Rendering::RTHandle* m_BlackTexture3DRTH; // 0x90
		::UnityEngine::Texture2DArray* m_WhiteTexture2DArray; // 0x98
		::UnityEngine::Rendering::RTHandle* m_WhiteTexture2DArrayRTH; // 0xA0
		::UnityEngine::Rendering::RTHandle* m_WhiteTextureRTH; // 0xA8

		::UnityEngine::Rendering::RTHandle* GetBlackTextureArray()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTUREARRAY_OFFSET))(nullptr);
		}

		::UnityEngine::Texture3D* CreateBlackTexture3D(::System::String* str)
		{
			return (return (::UnityEngine::Texture3D*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKTEXTURE3D_OFFSET))(str, nullptr);
		}

		::UnityEngine::Texture2DArray* CreateTexture2DArrayFromTexture2D(::UnityEngine::Texture2D* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Texture2DArray*(*)(::UnityEngine::Texture2D*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATETEXTURE2DARRAYFROMTEXTURE2D_OFFSET))(arg, str, nullptr);
		}

		::System::Void set_maxViews(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_SET_MAXVIEWS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* GetBlackTexture()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::ComputeShader* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandle* GetBlackUIntTexture()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKUINTTEXTURE_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandle* GetWhiteTexture()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETWHITETEXTURE_OFFSET))(nullptr);
		}

		::System::Int32 get_slices()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_SLICES_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandle* GetClearTexture()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETCLEARTEXTURE_OFFSET))(nullptr);
		}

		::System::Boolean get_useTexArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_USETEXARRAY_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::RTHandle* GetBlackTexture3D()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE3D_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::TextureDimension* get_dimension()
		{
			return (return (::UnityEngine::Rendering::TextureDimension*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_DIMENSION_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* CreateBlackUIntTextureArray(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::ComputeShader* arg)
		{
			return (return (::UnityEngine::Texture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTUREARRAY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Texture* CreateBlackUintTexture(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::ComputeShader* arg)
		{
			return (return (::UnityEngine::Texture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::RTHandle* GetMagentaTexture()
		{
			return (return (::UnityEngine::Rendering::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETMAGENTATEXTURE_OFFSET))(nullptr);
		}

	};
}

