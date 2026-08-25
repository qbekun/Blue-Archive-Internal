#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AutoUseConditionType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AutoUseConditionType_TypeDefinitionIndex = 14573;

	class AutoUseConditionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::AutoUseConditionType* None; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* Interval; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* HpUnder; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* HasLogicEffectCategory; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* AmmoCountUnder; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* OnAttackIng; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* KillTarget; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* GainBattleItem; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* HitLogicEffectCategory; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* HpOver; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* CriticalAttack; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* CriticalAttacked; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* Healed; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* Dodged; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* Blocked; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* CoverTime; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* UseSkill; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* HitLogicEffectGroupId; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* HitLogicEffectTemplateId; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* Attacked; // 0x0
		::MX::Logic::Skills::AutoUseConditionType* RemoveLogicEffectTemplateId; // 0x0

	};
}

