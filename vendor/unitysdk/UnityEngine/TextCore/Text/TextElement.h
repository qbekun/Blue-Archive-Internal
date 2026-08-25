#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextElementType; }
namespace UnityEngine::TextCore::Text { class TextAsset; }
namespace UnityEngine::TextCore { class Glyph; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0xA2D98A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_UNICODE_OFFSET UNITYSDK_OFFSET(0xA2CD170)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_UNICODE_OFFSET UNITYSDK_OFFSET(0xA2CAD90)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0xA2D98B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0xA2CADA0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_GLYPH_OFFSET UNITYSDK_OFFSET(0xA2D98C0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_GLYPH_OFFSET UNITYSDK_OFFSET(0xA2CADB0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA2CCA10)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA2CADC0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA2D98D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA2CAD10)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2CAD00)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextElement_TypeDefinitionIndex = 35586;

	class TextElement : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::Text::TextElementType* m_ElementType; // 0x10
		::System::UInt32 m_Unicode; // 0x14
		::UnityEngine::TextCore::Text::TextAsset* m_TextAsset; // 0x18
		::UnityEngine::TextCore::Glyph* m_Glyph; // 0x20
		::System::UInt32 m_GlyphIndex; // 0x28
		::System::Single m_Scale; // 0x2C

		::UnityEngine::TextCore::Text::TextElementType* get_elementType()
		{
			return (return (::UnityEngine::TextCore::Text::TextElementType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_unicode()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_UNICODE_OFFSET))(nullptr);
		}

		::System::Void set_unicode(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_UNICODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextAsset* get_textAsset()
		{
			return (return (::UnityEngine::TextCore::Text::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_TEXTASSET_OFFSET))(nullptr);
		}

		::System::Void set_textAsset(::UnityEngine::TextCore::Text::TextAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::TextAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_TEXTASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Glyph* get_glyph()
		{
			return (return (::UnityEngine::TextCore::Glyph*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_GLYPH_OFFSET))(nullptr);
		}

		::System::Void set_glyph(::UnityEngine::TextCore::Glyph* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Glyph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_GLYPH_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_glyphIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_GLYPHINDEX_OFFSET))(nullptr);
		}

		::System::Void set_glyphIndex(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_GLYPHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Single get_scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Void set_scale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_SET_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

