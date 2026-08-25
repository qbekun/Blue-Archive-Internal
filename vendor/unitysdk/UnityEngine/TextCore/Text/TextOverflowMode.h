#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextOverflowMode; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextOverflowMode_TypeDefinitionIndex = 35589;

	class TextOverflowMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::Text::TextOverflowMode* Overflow; // 0x0
		::UnityEngine::TextCore::Text::TextOverflowMode* Ellipsis; // 0x0
		::UnityEngine::TextCore::Text::TextOverflowMode* Masking; // 0x0
		::UnityEngine::TextCore::Text::TextOverflowMode* Truncate; // 0x0
		::UnityEngine::TextCore::Text::TextOverflowMode* ScrollRect; // 0x0
		::UnityEngine::TextCore::Text::TextOverflowMode* Page; // 0x0
		::UnityEngine::TextCore::Text::TextOverflowMode* Linked; // 0x0

	};
}

