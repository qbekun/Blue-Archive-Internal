#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextureMapping; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextureMapping_TypeDefinitionIndex = 35590;

	class TextureMapping : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::Text::TextureMapping* Character; // 0x0
		::UnityEngine::TextCore::Text::TextureMapping* Line; // 0x0
		::UnityEngine::TextCore::Text::TextureMapping* Paragraph; // 0x0
		::UnityEngine::TextCore::Text::TextureMapping* MatchAspect; // 0x0

	};
}

