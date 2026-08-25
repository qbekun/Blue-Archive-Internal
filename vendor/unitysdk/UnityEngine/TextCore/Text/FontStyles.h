#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontStyles; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontStyles_TypeDefinitionIndex = 35595;

	class FontStyles : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::Text::FontStyles* Normal; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* Bold; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* Italic; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* Underline; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* LowerCase; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* UpperCase; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* SmallCaps; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* Strikethrough; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* Superscript; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* Subscript; // 0x0
		::UnityEngine::TextCore::Text::FontStyles* Highlight; // 0x0

	};
}

