#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntityStatType; }

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEntityStatType_TypeDefinitionIndex = 20472;

	class CCGEntityStatType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::CCGEntityStatType* None; // 0x0
		::MX::MinigameCCG::CCGEntityStatType* MaxHealth; // 0x0
		::MX::MinigameCCG::CCGEntityStatType* ActiveCost; // 0x0
		::MX::MinigameCCG::CCGEntityStatType* ActiveCooldown; // 0x0
		::MX::MinigameCCG::CCGEntityStatType* PassiveActivateCount; // 0x0
		::MX::MinigameCCG::CCGEntityStatType* ActiveSkillPowerOffset; // 0x0
		::MX::MinigameCCG::CCGEntityStatType* PassiveSkillPowerOffset; // 0x0
		::MX::MinigameCCG::CCGEntityStatType* StrikerSwapCost; // 0x0

	};
}

