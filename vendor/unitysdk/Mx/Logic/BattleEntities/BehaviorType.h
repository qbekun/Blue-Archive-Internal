#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BehaviorType; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int BehaviorType_TypeDefinitionIndex = 13264;

	class BehaviorType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::BehaviorType* None; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack01; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack02; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack03; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack04; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack05; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack06; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack07; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack08; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack09; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* NormalAttack10; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill01; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill02; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill03; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill04; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill05; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill06; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill07; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill08; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill09; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UseExSkill10; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill01; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill02; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill03; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill04; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill05; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill06; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill07; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill08; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill09; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* UsePublicSkill10; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Dead; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Dying; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Retreat; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* EnterGround; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* TSSInteract; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Idle; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Stunned; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Hit; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Knockback; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Panic; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Paralysis; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Emp; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Purify; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Groggy; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* GroggyDead; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Frozen; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Move; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* MoveToFormationBeacon; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* MoveLeft; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* MoveRight; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* MoveAttack; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* ReleaseFormConversion; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Walk; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Stop; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Seek; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Flee; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Evade; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Wander; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* SeekPosition; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Feared; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Airborn; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Charmed; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Pulling; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Stasis; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* Following; // 0x0
		::MX::Logic::BattleEntities::BehaviorType* MetamorphNormalAttack01; // 0x0

	};
}

