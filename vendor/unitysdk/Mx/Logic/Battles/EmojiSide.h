#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class EmojiSide; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int EmojiSide_TypeDefinitionIndex = 14107;

	class EmojiSide : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::EmojiSide* Default; // 0x0
		::MX::Logic::Battles::EmojiSide* Left; // 0x0
		::MX::Logic::Battles::EmojiSide* Right; // 0x0

	};
}

