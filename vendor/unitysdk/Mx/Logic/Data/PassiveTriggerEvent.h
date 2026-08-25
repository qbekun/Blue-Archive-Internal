#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class PassiveTriggerEvent; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PassiveTriggerEvent_TypeDefinitionIndex = 13532;

	class PassiveTriggerEvent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::PassiveTriggerEvent* None; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_NormalAttack; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_UseSkillStart; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Attack; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Damaged; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Polling; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Heal; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Healed; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Dying; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Attacked; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Dodged; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AttackCritical; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Died; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_KillEnemy; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_Reload; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_UseSkillEnd; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AddLogicEffectTemplate; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_CoverStart; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_CoverEnd; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_DamageHit; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_RemoveLogicEffectTemplate; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AddLogicEffectCategory; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AddLogicEffectGroupId; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_RemoveLogicEffectGroupId; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_KillAlly; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_CountLogicEffectCategory; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_UseExSkillCost; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AppliedLogicEffectCategory; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AppliedLogicEffectGroupId; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AppliedLogicEffectTemplate; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AppliedLogicEffectData; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_KillShot_Damaged; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_DecreasedAmmoCount; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_DispelLogicEffectCategory; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_DispelledLogicEffectCategory; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_DispelIncludeLogicEffectGroupId; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_DispelledIncludeLogicEffectGroupId; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_DispelExcludeLogicEffectGroupId; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_DispelledExcludeLogicEffectGroupId; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntity_AppliedLogicEffectCategoryExcludeLogicEffectGroupId; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* Immediate; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* Battle_Periodic; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* Battle_Polling; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntityState_OnOff; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntityState_NotMoving; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntityState_Reloading; // 0x0
		::MX::Logic::Data::PassiveTriggerEvent* BattleEntityState_Moving; // 0x0

	};
}

