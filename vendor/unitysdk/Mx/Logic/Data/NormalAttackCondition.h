#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NormalAttackCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NormalAttackCondition_TypeDefinitionIndex = 13529;

	class NormalAttackCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::NormalAttackCondition* None; // 0x0
		::MX::Logic::Data::NormalAttackCondition* IsWeaponMounted; // 0x0
		::MX::Logic::Data::NormalAttackCondition* MoveEndRequired; // 0x0
		::MX::Logic::Data::NormalAttackCondition* TargetNotAvailable; // 0x0
		::MX::Logic::Data::NormalAttackCondition* ForceMoveCommandExists; // 0x0
		::MX::Logic::Data::NormalAttackCondition* BulletEmpty; // 0x0
		::MX::Logic::Data::NormalAttackCondition* BurstRoundOver; // 0x0
		::MX::Logic::Data::NormalAttackCondition* PublicSkillEnabled; // 0x0
		::MX::Logic::Data::NormalAttackCondition* FormConversionRequired; // 0x0
		::MX::Logic::Data::NormalAttackCondition* IsOrderByRandom; // 0x0

	};
}

