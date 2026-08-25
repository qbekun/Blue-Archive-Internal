#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Font; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class TextAlignment; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_TEXTMESH_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA2E7740)
#define UNITYENGINE_TEXTMESH_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA2E7780)
#define UNITYENGINE_TEXTMESH_GET_FONT_OFFSET UNITYSDK_OFFSET(0xA2E77C0)
#define UNITYENGINE_TEXTMESH_SET_FONT_OFFSET UNITYSDK_OFFSET(0xA2E7800)
#define UNITYENGINE_TEXTMESH_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xA2E7840)
#define UNITYENGINE_TEXTMESH_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xA2E7880)
#define UNITYENGINE_TEXTMESH_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0xA2E78C0)
#define UNITYENGINE_TEXTMESH_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0xA2E7900)
#define UNITYENGINE_TEXTMESH_GET_OFFSETZ_OFFSET UNITYSDK_OFFSET(0xA2E7940)
#define UNITYENGINE_TEXTMESH_SET_OFFSETZ_OFFSET UNITYSDK_OFFSET(0xA2E7980)
#define UNITYENGINE_TEXTMESH_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA2E79D0)
#define UNITYENGINE_TEXTMESH_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA2E7A10)
#define UNITYENGINE_TEXTMESH_GET_ANCHOR_OFFSET UNITYSDK_OFFSET(0xA2E7A50)
#define UNITYENGINE_TEXTMESH_SET_ANCHOR_OFFSET UNITYSDK_OFFSET(0xA2E7A90)
#define UNITYENGINE_TEXTMESH_GET_CHARACTERSIZE_OFFSET UNITYSDK_OFFSET(0xA2E7AD0)
#define UNITYENGINE_TEXTMESH_SET_CHARACTERSIZE_OFFSET UNITYSDK_OFFSET(0xA2E7B10)
#define UNITYENGINE_TEXTMESH_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0xA2E7B60)
#define UNITYENGINE_TEXTMESH_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0xA2E7BA0)
#define UNITYENGINE_TEXTMESH_GET_TABSIZE_OFFSET UNITYSDK_OFFSET(0xA2E7BF0)
#define UNITYENGINE_TEXTMESH_SET_TABSIZE_OFFSET UNITYSDK_OFFSET(0xA2E7C30)
#define UNITYENGINE_TEXTMESH_GET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0xA2E7C80)
#define UNITYENGINE_TEXTMESH_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0xA2E7CC0)
#define UNITYENGINE_TEXTMESH_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA2E7D00)
#define UNITYENGINE_TEXTMESH_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA2E7D90)
#define UNITYENGINE_TEXTMESH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E7E10)
#define UNITYENGINE_TEXTMESH_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2E7D50)
#define UNITYENGINE_TEXTMESH_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2E7DD0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextMesh_TypeDefinitionIndex = 37668;

	class TextMesh : public Il2CppObject
	{
	public:
		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_TEXT_OFFSET))(str, nullptr);
		}

		::UnityEngine::Font* get_font()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_FONT_OFFSET))(nullptr);
		}

		::System::Void set_font(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_FONT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_fontSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_FONTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_fontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::FontStyle* get_fontStyle()
		{
			return (return (::UnityEngine::FontStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_FONTSTYLE_OFFSET))(nullptr);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_FONTSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Single get_offsetZ()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_OFFSETZ_OFFSET))(nullptr);
		}

		::System::Void set_offsetZ(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_OFFSETZ_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextAlignment* get_alignment()
		{
			return (return (::UnityEngine::TextAlignment*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_ALIGNMENT_OFFSET))(nullptr);
		}

		::System::Void set_alignment(::UnityEngine::TextAlignment* arg)
		{
			((::System::Void(*)(::UnityEngine::TextAlignment*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_ALIGNMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextAnchor* get_anchor()
		{
			return (return (::UnityEngine::TextAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_ANCHOR_OFFSET))(nullptr);
		}

		::System::Void set_anchor(::UnityEngine::TextAnchor* arg)
		{
			((::System::Void(*)(::UnityEngine::TextAnchor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_ANCHOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_characterSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_CHARACTERSIZE_OFFSET))(nullptr);
		}

		::System::Void set_characterSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_CHARACTERSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_lineSpacing()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_LINESPACING_OFFSET))(nullptr);
		}

		::System::Void set_lineSpacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_LINESPACING_OFFSET))(arg, nullptr);
		}

		::System::Single get_tabSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_TABSIZE_OFFSET))(nullptr);
		}

		::System::Void set_tabSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_TABSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_richText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_RICHTEXT_OFFSET))(nullptr);
		}

		::System::Void set_richText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_RICHTEXT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_color_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_GET_COLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_color_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTMESH_SET_COLOR_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

