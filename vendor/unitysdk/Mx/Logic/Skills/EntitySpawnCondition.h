#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnCondition; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int EntitySpawnCondition_TypeDefinitionIndex = 14575;

	class EntitySpawnCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::EntitySpawnCondition* None; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* HPRateUnder; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* HPRateOver; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* IncludeLogicEffectTemplateId; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* ExcludeLogicEffectTemplateId; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* Rate; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* IncludeArmorType; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* ExcludeArmorType; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* SkillLevel; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* IncludeTag; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* ExcludeTag; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* UsedExtraSkillCostSameOrOver; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* UsedExtraSkillCostSameOrUnder; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* IncludeFormIndex; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* ExcludeFormIndex; // 0x0
		::MX::Logic::Skills::EntitySpawnCondition* TargetSideId; // 0x0

	};
}

