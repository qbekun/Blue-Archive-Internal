#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class StatType; }

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int StatType_TypeDefinitionIndex = 15101;

	class StatType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameShooting::StatType* AttackPower; // 0x0
		::MX::MinigameShooting::StatType* DefensePower; // 0x0
		::MX::MinigameShooting::StatType* MoveSpeed; // 0x0
		::MX::MinigameShooting::StatType* AttackRange; // 0x0
		::MX::MinigameShooting::StatType* CriticalRate; // 0x0
		::MX::MinigameShooting::StatType* CriticalDamageRate; // 0x0
		::MX::MinigameShooting::StatType* ShotTime; // 0x0
		::MX::MinigameShooting::StatType* Hp; // 0x0
		::MX::MinigameShooting::StatType* LifeStealRate; // 0x0
		::MX::MinigameShooting::StatType* EvasionRate; // 0x0

	};
}

