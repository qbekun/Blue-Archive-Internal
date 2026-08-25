#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGPreBattleOption; }

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGPreBattleOption_TypeDefinitionIndex = 11173;

	class TBGPreBattleOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::TableBoard::TBGPreBattleOption* Attack; // 0x0
		::MX::TableBoard::TBGPreBattleOption* RunAway; // 0x0

	};
}

