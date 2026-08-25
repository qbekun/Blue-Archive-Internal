#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextFontWeight; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextFontWeight_TypeDefinitionIndex = 35561;

	class TextFontWeight : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::Text::TextFontWeight* Thin; // 0x0
		::UnityEngine::TextCore::Text::TextFontWeight* ExtraLight; // 0x0
		::UnityEngine::TextCore::Text::TextFontWeight* Light; // 0x0
		::UnityEngine::TextCore::Text::TextFontWeight* Regular; // 0x0
		::UnityEngine::TextCore::Text::TextFontWeight* Medium; // 0x0
		::UnityEngine::TextCore::Text::TextFontWeight* SemiBold; // 0x0
		::UnityEngine::TextCore::Text::TextFontWeight* Bold; // 0x0
		::UnityEngine::TextCore::Text::TextFontWeight* Heavy; // 0x0
		::UnityEngine::TextCore::Text::TextFontWeight* Black; // 0x0

	};
}

