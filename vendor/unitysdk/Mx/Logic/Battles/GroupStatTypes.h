#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupStatTypes; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroupStatTypes_TypeDefinitionIndex = 14439;

	class GroupStatTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::GroupStatTypes* None; // 0x0
		::MX::Logic::Battles::GroupStatTypes* MaxHitPoint; // 0x0
		::MX::Logic::Battles::GroupStatTypes* CurrentHitPoint; // 0x0
		::MX::Logic::Battles::GroupStatTypes* PhysicalAttack; // 0x0
		::MX::Logic::Battles::GroupStatTypes* AliveHeroes; // 0x0
		::MX::Logic::Battles::GroupStatTypes* DeadHeroes; // 0x0
		::MX::Logic::Battles::GroupStatTypes* KillCount; // 0x0
		::MX::Logic::Battles::GroupStatTypes* BestCondition; // 0x0
		::MX::Logic::Battles::GroupStatTypes* GradeSum; // 0x0
		::MX::Logic::Battles::GroupStatTypes* LevelSum; // 0x0
		::MX::Logic::Battles::GroupStatTypes* CardCastCount; // 0x0

	};
}

