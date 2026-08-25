#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleLogCategory; }

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int BattleLogCategory_TypeDefinitionIndex = 14459;

	class BattleLogCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::Summary::BattleLogCategory* None; // 0x0
		::MX::Logic::Battles::Summary::BattleLogCategory* Damage; // 0x0
		::MX::Logic::Battles::Summary::BattleLogCategory* Heal; // 0x0

	};
}

