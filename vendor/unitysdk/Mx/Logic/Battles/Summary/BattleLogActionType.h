#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleLogActionType; }

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int BattleLogActionType_TypeDefinitionIndex = 14458;

	class BattleLogActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::Summary::BattleLogActionType* None; // 0x0
		::MX::Logic::Battles::Summary::BattleLogActionType* Given; // 0x0
		::MX::Logic::Battles::Summary::BattleLogActionType* Taken; // 0x0

	};
}

