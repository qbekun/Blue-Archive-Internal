#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class ScaleMode; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UIElements { class VectorImage; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class MeshGenerationContext; }
namespace UnityEngine::UIElements { class CustomStyleResolvedEvent; }

#define UNITYENGINE_UIELEMENTS_IMAGE_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0xA3A7290)
#define UNITYENGINE_UIELEMENTS_IMAGE_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA3A72A0)
#define UNITYENGINE_UIELEMENTS_IMAGE_GET_VECTORIMAGE_OFFSET UNITYSDK_OFFSET(0xA3A72B0)
#define UNITYENGINE_UIELEMENTS_IMAGE_GET_SOURCERECT_OFFSET UNITYSDK_OFFSET(0xA3A72C0)
#define UNITYENGINE_UIELEMENTS_IMAGE_GET_UV_OFFSET UNITYSDK_OFFSET(0xA3A7540)
#define UNITYENGINE_UIELEMENTS_IMAGE_GET_SCALEMODE_OFFSET UNITYSDK_OFFSET(0xA3A7550)
#define UNITYENGINE_UIELEMENTS_IMAGE_GET_TINTCOLOR_OFFSET UNITYSDK_OFFSET(0xA3A7560)
#define UNITYENGINE_UIELEMENTS_IMAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A7570)
#define UNITYENGINE_UIELEMENTS_IMAGE_GETTEXTUREDISPLAYSIZE_OFFSET UNITYSDK_OFFSET(0xA3A7770)
#define UNITYENGINE_UIELEMENTS_IMAGE_GETTEXTUREDISPLAYSIZE_OFFSET UNITYSDK_OFFSET(0xA3A7850)
#define UNITYENGINE_UIELEMENTS_IMAGE_DOMEASURE_OFFSET UNITYSDK_OFFSET(0xA3A7960)
#define UNITYENGINE_UIELEMENTS_IMAGE_ONGENERATEVISUALCONTENT_OFFSET UNITYSDK_OFFSET(0xA3A7C30)
#define UNITYENGINE_UIELEMENTS_IMAGE_ONCUSTOMSTYLERESOLVED_OFFSET UNITYSDK_OFFSET(0xA3A8170)
#define UNITYENGINE_UIELEMENTS_IMAGE_SETSCALEMODE_OFFSET UNITYSDK_OFFSET(0xA3A86B0)
#define UNITYENGINE_UIELEMENTS_IMAGE_GETSOURCERECT_OFFSET UNITYSDK_OFFSET(0xA3A72E0)
#define UNITYENGINE_UIELEMENTS_IMAGE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A86D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Image_TypeDefinitionIndex = 30337;

	class Image : public Il2CppObject
	{
	public:
		::UnityEngine::ScaleMode* m_ScaleMode; // 0x3B0
		::UnityEngine::Texture* m_Image; // 0x3B8
		::UnityEngine::Sprite* m_Sprite; // 0x3C0
		::UnityEngine::UIElements::VectorImage* m_VectorImage; // 0x3C8
		::UnityEngine::Rect* m_UV; // 0x3D0
		::UnityEngine::Color* m_TintColor; // 0x3E0
		::System::Boolean m_ImageIsInline; // 0x3F0
		::System::Boolean m_ScaleModeIsInline; // 0x3F1
		::System::Boolean m_TintColorIsInline; // 0x3F2
		::System::String* ussClassName; // 0x0
		Il2CppObject* s_ImageProperty; // 0x8
		Il2CppObject* s_SpriteProperty; // 0x10
		Il2CppObject* s_VectorImageProperty; // 0x18
		Il2CppObject* s_ScaleModeProperty; // 0x20
		Il2CppObject* s_TintColorProperty; // 0x28

		::UnityEngine::Texture* get_image()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GET_IMAGE_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GET_SPRITE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VectorImage* get_vectorImage()
		{
			return (return (::UnityEngine::UIElements::VectorImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GET_VECTORIMAGE_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_sourceRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GET_SOURCERECT_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_uv()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GET_UV_OFFSET))(nullptr);
		}

		::UnityEngine::ScaleMode* get_scaleMode()
		{
			return (return (::UnityEngine::ScaleMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GET_SCALEMODE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_tintColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GET_TINTCOLOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetTextureDisplaySize(::UnityEngine::Texture* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GETTEXTUREDISPLAYSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetTextureDisplaySize(::UnityEngine::Sprite* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GETTEXTUREDISPLAYSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* DoMeasure(::System::Single arg, MeasureMode* arg, ::System::Single arg, MeasureMode* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, MeasureMode*, ::System::Single, MeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_DOMEASURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MeshGenerationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_ONGENERATEVISUALCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_ONCUSTOMSTYLERESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void SetScaleMode(::UnityEngine::ScaleMode* arg)
		{
			((::System::Void(*)(::UnityEngine::ScaleMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_SETSCALEMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* GetSourceRect()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_GETSOURCERECT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMAGE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

