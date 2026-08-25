#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class BattleEndType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleEndType_TypeDefinitionIndex = 14000;

	class BattleEndType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::BattleEndType* None; // 0x0
		::MX::Logic::Battles::BattleEndType* AllNearlyDead; // 0x0
		::MX::Logic::Battles::BattleEndType* TimeOut; // 0x0
		::MX::Logic::Battles::BattleEndType* EscortFailed; // 0x0
		::MX::Logic::Battles::BattleEndType* Clear; // 0x0

	};
}

