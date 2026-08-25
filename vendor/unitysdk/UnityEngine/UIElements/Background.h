#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UIElements { class VectorImage; }
namespace UnityEngine::UIElements { class Background; }

#define UNITYENGINE_UIELEMENTS_BACKGROUND_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA40E2F0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0xA40E300)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA40E3C0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA40E3D0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_GET_RENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA40E490)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_SET_RENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA40E4A0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_GET_VECTORIMAGE_OFFSET UNITYSDK_OFFSET(0xA40DDF0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_SET_VECTORIMAGE_OFFSET UNITYSDK_OFFSET(0xA40E560)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_FROMTEXTURE2D_OFFSET UNITYSDK_OFFSET(0xA40E620)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_FROMRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xA40E660)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_FROMSPRITE_OFFSET UNITYSDK_OFFSET(0xA40E6A0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_FROMVECTORIMAGE_OFFSET UNITYSDK_OFFSET(0xA40E6E0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0xA40E720)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA40E9C0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA40EAC0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_EQUALS_OFFSET UNITYSDK_OFFSET(0xA40EB00)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_EQUALS_OFFSET UNITYSDK_OFFSET(0xA40EB40)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA40EBE0)
#define UNITYENGINE_UIELEMENTS_BACKGROUND_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA40ECA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Background_TypeDefinitionIndex = 30592;

	class Background : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* m_Texture; // 0x10
		::UnityEngine::Sprite* m_Sprite; // 0x18
		::UnityEngine::RenderTexture* m_RenderTexture; // 0x20
		::UnityEngine::UIElements::VectorImage* m_VectorImage; // 0x28

		::UnityEngine::Texture2D* get_texture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_texture(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_SET_TEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_GET_SPRITE_OFFSET))(nullptr);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_SET_SPRITE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RenderTexture* get_renderTexture()
		{
			return (return (::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_GET_RENDERTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_renderTexture(::UnityEngine::RenderTexture* arg)
		{
			((::System::Void(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_SET_RENDERTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VectorImage* get_vectorImage()
		{
			return (return (::UnityEngine::UIElements::VectorImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_GET_VECTORIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_vectorImage(::UnityEngine::UIElements::VectorImage* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VectorImage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_SET_VECTORIMAGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Background* FromTexture2D(::UnityEngine::Texture2D* arg)
		{
			return (return (::UnityEngine::UIElements::Background*(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_FROMTEXTURE2D_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Background* FromRenderTexture(::UnityEngine::RenderTexture* arg)
		{
			return (return (::UnityEngine::UIElements::Background*(*)(::UnityEngine::RenderTexture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_FROMRENDERTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Background* FromSprite(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::UIElements::Background*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_FROMSPRITE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Background* FromVectorImage(::UnityEngine::UIElements::VectorImage* arg)
		{
			return (return (::UnityEngine::UIElements::Background*(*)(::UnityEngine::UIElements::VectorImage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_FROMVECTORIMAGE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Background* FromObject(::System::Object* arg)
		{
			return (return (::UnityEngine::UIElements::Background*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_FROMOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UIElements::Background* arg, ::UnityEngine::UIElements::Background* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Background*, ::UnityEngine::UIElements::Background*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UIElements::Background* arg, ::UnityEngine::UIElements::Background* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Background*, ::UnityEngine::UIElements::Background*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Background* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::Background*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BACKGROUND_TOSTRING_OFFSET))(nullptr);
		}

	};
}

