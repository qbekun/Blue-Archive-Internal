#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntityType; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int BattleEntityType_TypeDefinitionIndex = 13263;

	class BattleEntityType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::BattleEntityType* None; // 0x0
		::MX::Logic::BattleEntities::BattleEntityType* Character; // 0x0
		::MX::Logic::BattleEntities::BattleEntityType* SkillActor; // 0x0
		::MX::Logic::BattleEntities::BattleEntityType* Obstacle; // 0x0
		::MX::Logic::BattleEntities::BattleEntityType* Point; // 0x0
		::MX::Logic::BattleEntities::BattleEntityType* Projectile; // 0x0
		::MX::Logic::BattleEntities::BattleEntityType* EffectArea; // 0x0
		::MX::Logic::BattleEntities::BattleEntityType* Supporter; // 0x0
		::MX::Logic::BattleEntities::BattleEntityType* BattleItem; // 0x0

	};
}

