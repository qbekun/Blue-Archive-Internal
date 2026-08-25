#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class ResolvePriority; }

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int ResolvePriority_TypeDefinitionIndex = 14791;

	class ResolvePriority : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::LogicEffects::ResolvePriority* Dispel; // 0x0
		::MX::Logic::Skills::LogicEffects::ResolvePriority* StatChange; // 0x0
		::MX::Logic::Skills::LogicEffects::ResolvePriority* LifeGain; // 0x0
		::MX::Logic::Skills::LogicEffects::ResolvePriority* StatusRemove; // 0x0
		::MX::Logic::Skills::LogicEffects::ResolvePriority* Normal; // 0x0
		::MX::Logic::Skills::LogicEffects::ResolvePriority* CrowdControlStatusAdd; // 0x0
		::MX::Logic::Skills::LogicEffects::ResolvePriority* StatusAdd; // 0x0
		::MX::Logic::Skills::LogicEffects::ResolvePriority* Damage; // 0x0

	};
}

