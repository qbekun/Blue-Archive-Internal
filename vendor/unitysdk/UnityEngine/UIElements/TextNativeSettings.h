#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Font; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class TextAnchor; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextNativeSettings_TypeDefinitionIndex = 37365;

	class TextNativeSettings : public Il2CppObject
	{
	public:
		::System::String* text; // 0x10
		::UnityEngine::Font* font; // 0x18
		::System::Int32 size; // 0x20
		::System::Single scaling; // 0x24
		::UnityEngine::FontStyle* style; // 0x28
		::UnityEngine::Color* color; // 0x2C
		::UnityEngine::TextAnchor* anchor; // 0x3C
		::System::Boolean wordWrap; // 0x40
		::System::Single wordWrapWidth; // 0x44
		::System::Boolean richText; // 0x48

	};
}

