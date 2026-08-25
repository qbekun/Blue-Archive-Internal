#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class CardStatus; }

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int CardStatus_TypeDefinitionIndex = 14464;

	class CardStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::Summary::CardStatus* None; // 0x0
		::MX::Logic::Battles::Summary::CardStatus* NotCasted; // 0x0
		::MX::Logic::Battles::Summary::CardStatus* Castable; // 0x0
		::MX::Logic::Battles::Summary::CardStatus* Casting; // 0x0
		::MX::Logic::Battles::Summary::CardStatus* Applied; // 0x0
		::MX::Logic::Battles::Summary::CardStatus* Cancelled; // 0x0
		::MX::Logic::Battles::Summary::CardStatus* Fizzled; // 0x0

	};
}

