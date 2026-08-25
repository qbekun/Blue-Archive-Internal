#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillActionType; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int SkillActionType_TypeDefinitionIndex = 13294;

	class SkillActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::SkillActionType* None; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* NormalAttackSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* TargetSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* MultipleTargetSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* ProjectileSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* MultipleProjectileSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* AreaSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* MultipleAreaSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* SummonObstacleSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* SummonCharacterSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* SummonBattleItem; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* TimelineSkill; // 0x0
		::MX::Logic::BattleEntities::SkillActionType* PassiveSkill; // 0x0

	};
}

