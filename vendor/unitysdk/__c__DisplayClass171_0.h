#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define <>C__DISPLAYCLASS171_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1393B30)
#define <>C__DISPLAYCLASS171_0__BATTLE_HERODEADORDYING_B__0_OFFSET UNITYSDK_OFFSET(0x1397720)

	inline static constexpr unsigned int <>c__DisplayClass171_0_TypeDefinitionIndex = 14427;

	class <>c__DisplayClass171_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::KillEventArgs* args; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS171_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Battle_HeroDeadOrDying_b__0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS171_0__BATTLE_HERODEADORDYING_B__0_OFFSET))(arg, nullptr);
		}

	};

