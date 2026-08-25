#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class AttackEventArgs; }
namespace MX::Logic::Battles::Summary { class BattleLogSourceType; }
namespace MX::Logic::Battles::Summary { class BattleNumericLog; }

#define <>C__DISPLAYCLASS215_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x13ADD20)
#define <>C__DISPLAYCLASS215_0__WRITETAKEMYOBSTACLE_B__0_OFFSET UNITYSDK_OFFSET(0x13B01E0)

	inline static constexpr unsigned int <>c__DisplayClass215_0_TypeDefinitionIndex = 14469;

	class <>c__DisplayClass215_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::AttackEventArgs* e; // 0x10
		::MX::Logic::Battles::Summary::BattleLogSourceType* path; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS215_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _WriteTakeMyObstacle_b__0(::MX::Logic::Battles::Summary::BattleNumericLog* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::BattleNumericLog*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS215_0__WRITETAKEMYOBSTACLE_B__0_OFFSET))(arg, nullptr);
		}

	};

