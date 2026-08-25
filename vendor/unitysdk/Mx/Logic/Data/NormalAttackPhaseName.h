#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class NormalAttackPhaseName; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int NormalAttackPhaseName_TypeDefinitionIndex = 13530;

	class NormalAttackPhaseName : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::NormalAttackPhaseName* AttackEnter; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* Reload; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* AttackStart; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* AttackIng; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* AttackBurstDelay; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* AttackFinish; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* MountWeapon; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* UnmountWeapon; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* SearchNewTarget; // 0x0
		::MX::Logic::Data::NormalAttackPhaseName* ExitNormalAttack; // 0x0

	};
}

