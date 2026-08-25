#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextAlignment; }
namespace UnityEngine::TextCore::Text { class Extents; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int LineInfo_TypeDefinitionIndex = 35571;

	class LineInfo : public Il2CppObject
	{
	public:
		::System::Int32 controlCharacterCount; // 0x10
		::System::Int32 characterCount; // 0x14
		::System::Int32 visibleCharacterCount; // 0x18
		::System::Int32 spaceCount; // 0x1C
		::System::Int32 visibleSpaceCount; // 0x20
		::System::Int32 wordCount; // 0x24
		::System::Int32 firstCharacterIndex; // 0x28
		::System::Int32 firstVisibleCharacterIndex; // 0x2C
		::System::Int32 lastCharacterIndex; // 0x30
		::System::Int32 lastVisibleCharacterIndex; // 0x34
		::System::Single length; // 0x38
		::System::Single lineHeight; // 0x3C
		::System::Single ascender; // 0x40
		::System::Single baseline; // 0x44
		::System::Single descender; // 0x48
		::System::Single maxAdvance; // 0x4C
		::System::Single width; // 0x50
		::System::Single marginLeft; // 0x54
		::System::Single marginRight; // 0x58
		::UnityEngine::TextCore::Text::TextAlignment* alignment; // 0x5C
		::UnityEngine::TextCore::Text::Extents* lineExtents; // 0x60

	};
}

