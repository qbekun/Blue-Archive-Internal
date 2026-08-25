#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGPostBattleOption; }

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGPostBattleOption_TypeDefinitionIndex = 11174;

	class TBGPostBattleOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::TableBoard::TBGPostBattleOption* Retry; // 0x0
		::MX::TableBoard::TBGPostBattleOption* Retreat; // 0x0

	};
}

