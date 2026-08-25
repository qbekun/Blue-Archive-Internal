#pragma once
#include "../unitysdk.h"

namespace FlatData { class Geas; }

namespace FlatData
{
	inline static constexpr unsigned int Geas_TypeDefinitionIndex = 9563;

	class Geas : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::Geas* ForwardProjectile; // 0x0
		::FlatData::Geas* DiagonalProjectile; // 0x0
		::FlatData::Geas* SideProjectile; // 0x0
		::FlatData::Geas* Pierce; // 0x0
		::FlatData::Geas* Reflect; // 0x0
		::FlatData::Geas* Burn; // 0x0
		::FlatData::Geas* Chill; // 0x0
		::FlatData::Geas* AttackPower; // 0x0
		::FlatData::Geas* AttackSpeed; // 0x0
		::FlatData::Geas* Critical; // 0x0
		::FlatData::Geas* Heal; // 0x0
		::FlatData::Geas* MoveSpeed; // 0x0
		::FlatData::Geas* LifeSteal; // 0x0
		::FlatData::Geas* Evasion; // 0x0

	};
}

