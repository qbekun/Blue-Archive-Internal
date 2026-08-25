#pragma once
#include "../unitysdk.h"

namespace TMPro { class TextElementType; }
namespace TMPro { class TMP_Asset; }
namespace UnityEngine::TextCore { class Glyph; }

#define TMPRO_TMP_TEXTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17AEF0)
#define TMPRO_TMP_TEXTELEMENT_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA17EBA0)
#define TMPRO_TMP_TEXTELEMENT_GET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0xA17EBB0)
#define TMPRO_TMP_TEXTELEMENT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA17EBC0)
#define TMPRO_TMP_TEXTELEMENT_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA17EBD0)
#define TMPRO_TMP_TEXTELEMENT_SET_TEXTASSET_OFFSET UNITYSDK_OFFSET(0xA17EBE0)
#define TMPRO_TMP_TEXTELEMENT_GET_UNICODE_OFFSET UNITYSDK_OFFSET(0xA17EBF0)
#define TMPRO_TMP_TEXTELEMENT_SET_UNICODE_OFFSET UNITYSDK_OFFSET(0xA17EC00)
#define TMPRO_TMP_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0xA17EC10)
#define TMPRO_TMP_TEXTELEMENT_SET_GLYPH_OFFSET UNITYSDK_OFFSET(0xA17EC20)
#define TMPRO_TMP_TEXTELEMENT_GET_GLYPH_OFFSET UNITYSDK_OFFSET(0xA17EC30)
#define TMPRO_TMP_TEXTELEMENT_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA17EC40)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextElement_TypeDefinitionIndex = 33750;

	class TMP_TextElement : public Il2CppObject
	{
	public:
		::TMPro::TextElementType* m_ElementType; // 0x10
		::System::UInt32 m_Unicode; // 0x14
		::TMPro::TMP_Asset* m_TextAsset; // 0x18
		::UnityEngine::TextCore::Glyph* m_Glyph; // 0x20
		::System::UInt32 m_GlyphIndex; // 0x28
		::System::Single m_Scale; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 get_glyphIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_GLYPHINDEX_OFFSET))(nullptr);
		}

		::TMPro::TMP_Asset* get_textAsset()
		{
			return (return (::TMPro::TMP_Asset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_TEXTASSET_OFFSET))(nullptr);
		}

		::System::Single get_scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Void set_scale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Void set_textAsset(::TMPro::TMP_Asset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_Asset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_TEXTASSET_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_unicode()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_UNICODE_OFFSET))(nullptr);
		}

		::System::Void set_unicode(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_UNICODE_OFFSET))(arg, nullptr);
		}

		::TMPro::TextElementType* get_elementType()
		{
			return (return (::TMPro::TextElementType*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_ELEMENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_glyph(::UnityEngine::TextCore::Glyph* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Glyph*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_GLYPH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Glyph* get_glyph()
		{
			return (return (::UnityEngine::TextCore::Glyph*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_GET_GLYPH_OFFSET))(nullptr);
		}

		::System::Void set_glyphIndex(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTELEMENT_SET_GLYPHINDEX_OFFSET))(arg, nullptr);
		}

	};
}

