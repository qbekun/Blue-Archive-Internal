#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class TextureFormat; }
namespace UnityEngine::UIElements { class UIRAtlasAllocator; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class RectInt&; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_ALLOCATERECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_SETTEXEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_UPDATETEXTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_CREATEOREXPANDTEXTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_CPUBLIT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int ShaderInfoStorage`1_TypeDefinitionIndex = 30739;

	class ShaderInfoStorage`1 : public ::UnityEngine::Bindings::NativeConditionalAttribute
	{
	public:
		::System::Int32 m_InitialSize; // 0x0
		::System::Int32 m_MaxSize; // 0x0
		::UnityEngine::TextureFormat* m_Format; // 0x0
		Il2CppObject* m_Convert; // 0x0
		::UnityEngine::UIElements::UIRAtlasAllocator* m_Allocator; // 0x0
		::UnityEngine::Texture2D* m_Texture; // 0x0
		Il2CppObject* m_Texels; // 0x0

		::System::Void .ctor(::UnityEngine::TextureFormat* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::TextureFormat*, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_DISPOSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Boolean AllocateRect(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_ALLOCATERECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetTexel(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_SETTEXEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_UPDATETEXTURE_OFFSET))(nullptr);
		}

		::System::Void CreateOrExpandTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_CREATEOREXPANDTEXTURE_OFFSET))(nullptr);
		}

		::System::Void CpuBlit(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_SHADERINFOSTORAGE`1_CPUBLIT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

