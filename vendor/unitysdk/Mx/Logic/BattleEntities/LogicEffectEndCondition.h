#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int LogicEffectEndCondition_TypeDefinitionIndex = 13098;

	class LogicEffectEndCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::LogicEffectEndCondition* None; // 0x0
		::MX::Logic::BattleEntities::LogicEffectEndCondition* Duration; // 0x0
		::MX::Logic::BattleEntities::LogicEffectEndCondition* ReloadCount; // 0x0
		::MX::Logic::BattleEntities::LogicEffectEndCondition* AmmoCount; // 0x0
		::MX::Logic::BattleEntities::LogicEffectEndCondition* AmmoHit; // 0x0
		::MX::Logic::BattleEntities::LogicEffectEndCondition* UseExSkillCount; // 0x0

	};
}

