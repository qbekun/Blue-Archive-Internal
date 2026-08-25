#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGDiceRollResult; }

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGDiceRollResult_TypeDefinitionIndex = 11221;

	class TBGDiceRollResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::TableBoard::TBGDiceRollResult* Failure; // 0x0
		::MX::TableBoard::TBGDiceRollResult* Success; // 0x0
		::MX::TableBoard::TBGDiceRollResult* CriticalSuccess; // 0x0

	};
}

