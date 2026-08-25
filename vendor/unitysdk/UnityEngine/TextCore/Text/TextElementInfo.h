#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextElementType; }
namespace UnityEngine::TextCore::Text { class TextElement; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class TextVertex; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::TextCore::Text { class FontStyles; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextElementInfo_TypeDefinitionIndex = 35588;

	class TextElementInfo : public Il2CppObject
	{
	public:
		::System::Char character; // 0x10
		::System::Int32 index; // 0x14
		::UnityEngine::TextCore::Text::TextElementType* elementType; // 0x18
		::UnityEngine::TextCore::Text::TextElement* textElement; // 0x20
		::UnityEngine::TextCore::Text::FontAsset* fontAsset; // 0x28
		::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset; // 0x30
		::System::Int32 spriteIndex; // 0x38
		::UnityEngine::Material* material; // 0x40
		::System::Int32 materialReferenceIndex; // 0x48
		::System::Boolean isUsingAlternateTypeface; // 0x4C
		::System::Single pointSize; // 0x50
		::System::Int32 lineNumber; // 0x54
		::System::Int32 pageNumber; // 0x58
		::System::Int32 vertexIndex; // 0x5C
		::UnityEngine::TextCore::Text::TextVertex* vertexTopLeft; // 0x60
		::UnityEngine::TextCore::Text::TextVertex* vertexBottomLeft; // 0x88
		::UnityEngine::TextCore::Text::TextVertex* vertexTopRight; // 0xB0
		::UnityEngine::TextCore::Text::TextVertex* vertexBottomRight; // 0xD8
		::UnityEngine::Vector3* topLeft; // 0x100
		::UnityEngine::Vector3* bottomLeft; // 0x10C
		::UnityEngine::Vector3* topRight; // 0x118
		::UnityEngine::Vector3* bottomRight; // 0x124
		::System::Single origin; // 0x130
		::System::Single ascender; // 0x134
		::System::Single baseLine; // 0x138
		::System::Single descender; // 0x13C
		::System::Single xAdvance; // 0x140
		::System::Single aspectRatio; // 0x144
		::System::Single scale; // 0x148
		::UnityEngine::Color32* color; // 0x14C
		::UnityEngine::Color32* underlineColor; // 0x150
		::UnityEngine::Color32* strikethroughColor; // 0x154
		::UnityEngine::Color32* highlightColor; // 0x158
		::UnityEngine::TextCore::Text::FontStyles* style; // 0x15C
		::System::Boolean isVisible; // 0x160

	};
}

