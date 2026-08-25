#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextElementType; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextElementType_TypeDefinitionIndex = 35585;

	class TextElementType : public Il2CppObject
	{
	public:
		::System::Byte value__; // 0x10
		::UnityEngine::TextCore::Text::TextElementType* Character; // 0x0
		::UnityEngine::TextCore::Text::TextElementType* Sprite; // 0x0

	};
}

