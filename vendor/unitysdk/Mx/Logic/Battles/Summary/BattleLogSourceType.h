#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleLogSourceType; }

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int BattleLogSourceType_TypeDefinitionIndex = 14460;

	class BattleLogSourceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::Summary::BattleLogSourceType* None; // 0x0
		::MX::Logic::Battles::Summary::BattleLogSourceType* Normal; // 0x0
		::MX::Logic::Battles::Summary::BattleLogSourceType* Ex; // 0x0
		::MX::Logic::Battles::Summary::BattleLogSourceType* Public; // 0x0
		::MX::Logic::Battles::Summary::BattleLogSourceType* Passive; // 0x0
		::MX::Logic::Battles::Summary::BattleLogSourceType* ExtraPassive; // 0x0
		::MX::Logic::Battles::Summary::BattleLogSourceType* Etc; // 0x0

	};
}

