#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine::TextCore::Text { class TextStyleSheet; }
namespace UnityEngine::TextCore::Text { class FontStyles; }
namespace UnityEngine::TextCore::Text { class TextSettings; }
namespace UnityEngine::TextCore::Text { class TextAlignment; }
namespace UnityEngine::TextCore::Text { class TextOverflowMode; }
namespace UnityEngine { class Color; }
namespace UnityEngine::TextCore::Text { class TextColorGradient; }
namespace UnityEngine::TextCore::Text { class TextFontWeight; }
namespace UnityEngine::TextCore::Text { class TextureMapping; }
namespace UnityEngine::TextCore::Text { class VertexSortingOrder; }
namespace UnityEngine::TextCore::Text { class TextGenerationSettings; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2D98E0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2D9E10)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2D9EC0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2DA490)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2DC580)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextGenerationSettings_TypeDefinitionIndex = 35591;

	class TextGenerationSettings : public Il2CppObject
	{
	public:
		::System::String* text; // 0x10
		::UnityEngine::Rect* screenRect; // 0x18
		::UnityEngine::Vector4* margins; // 0x28
		::System::Single scale; // 0x38
		::UnityEngine::TextCore::Text::FontAsset* fontAsset; // 0x40
		::UnityEngine::Material* material; // 0x48
		::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset; // 0x50
		::UnityEngine::TextCore::Text::TextStyleSheet* styleSheet; // 0x58
		::UnityEngine::TextCore::Text::FontStyles* fontStyle; // 0x60
		::UnityEngine::TextCore::Text::TextSettings* textSettings; // 0x68
		::UnityEngine::TextCore::Text::TextAlignment* textAlignment; // 0x70
		::UnityEngine::TextCore::Text::TextOverflowMode* overflowMode; // 0x74
		::System::Boolean wordWrap; // 0x78
		::System::Single wordWrappingRatio; // 0x7C
		::UnityEngine::Color* color; // 0x80
		::UnityEngine::TextCore::Text::TextColorGradient* fontColorGradient; // 0x90
		::System::Boolean tintSprites; // 0x98
		::System::Boolean overrideRichTextColors; // 0x99
		::System::Single fontSize; // 0x9C
		::System::Boolean autoSize; // 0xA0
		::System::Single fontSizeMin; // 0xA4
		::System::Single fontSizeMax; // 0xA8
		::System::Boolean enableKerning; // 0xAC
		::System::Boolean richText; // 0xAD
		::System::Boolean isRightToLeft; // 0xAE
		::System::Boolean extraPadding; // 0xAF
		::System::Boolean parseControlCharacters; // 0xB0
		::System::Single characterSpacing; // 0xB4
		::System::Single wordSpacing; // 0xB8
		::System::Single lineSpacing; // 0xBC
		::System::Single paragraphSpacing; // 0xC0
		::System::Single lineSpacingMax; // 0xC4
		::System::Int32 maxVisibleCharacters; // 0xC8
		::System::Int32 maxVisibleWords; // 0xCC
		::System::Int32 maxVisibleLines; // 0xD0
		::System::Int32 firstVisibleCharacter; // 0xD4
		::System::Boolean useMaxVisibleDescender; // 0xD8
		::UnityEngine::TextCore::Text::TextFontWeight* fontWeight; // 0xDC
		::System::Int32 pageToDisplay; // 0xE0
		::UnityEngine::TextCore::Text::TextureMapping* horizontalMapping; // 0xE4
		::UnityEngine::TextCore::Text::TextureMapping* verticalMapping; // 0xE8
		::System::Single uvLineOffset; // 0xEC
		::UnityEngine::TextCore::Text::VertexSortingOrder* geometrySortingOrder; // 0xF0
		::System::Boolean inverseYAxis; // 0xF4
		::System::Single charWidthMaxAdj; // 0xF8

		::System::Boolean Equals(::UnityEngine::TextCore::Text::TextGenerationSettings* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATIONSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

