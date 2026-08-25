#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Stat; }
namespace MX::MinigameShooting { class CentiMeterStat; }
namespace MX::MinigameShooting { class BasisStat; }
namespace MX::MinigameShooting { class MilliSecondStat; }
namespace MX::MinigameShooting { class Character; }
namespace MX::Data::Excel { class MiniGameShootingCharacterExcel; }

#define MX_MINIGAMESHOOTING_CHARACTERSTAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x14692B0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int CharacterStat_TypeDefinitionIndex = 15103;

	class CharacterStat : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Stat* MaxHp; // 0x10
		::System::Int64 Hp; // 0x18
		::MX::MinigameShooting::Stat* AttackPower; // 0x20
		::MX::MinigameShooting::Stat* DefensePower; // 0x28
		::MX::MinigameShooting::CentiMeterStat* MoveSpeed; // 0x30
		::MX::MinigameShooting::CentiMeterStat* AttackRange; // 0x38
		::MX::MinigameShooting::BasisStat* CriticalRate; // 0x40
		::MX::MinigameShooting::BasisStat* CriticalDamageRate; // 0x48
		::MX::MinigameShooting::BasisStat* LifeStealRate; // 0x50
		::MX::MinigameShooting::BasisStat* EvasionRate; // 0x58
		::MX::MinigameShooting::MilliSecondStat* ShotTime; // 0x60

		::System::Void .ctor(::MX::MinigameShooting::Character* arg, ::MX::Data::Excel::MiniGameShootingCharacterExcel* arg2)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::MX::Data::Excel::MiniGameShootingCharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_CHARACTERSTAT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

