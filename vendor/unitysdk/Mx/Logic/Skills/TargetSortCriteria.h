#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSortCriteria; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int TargetSortCriteria_TypeDefinitionIndex = 14610;

	class TargetSortCriteria : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::TargetSortCriteria* None; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* CurrentHP; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* MaxHP; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* HPRate; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* Distance; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* AttackPower; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* DefensePower; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* BuffCount; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* DebuffCount; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* CrowdControlCount; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* LogicEffectTemplateCount; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* Stat; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* SummonedTime; // 0x0
		::MX::Logic::Skills::TargetSortCriteria* All; // 0x0

	};
}

