#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class HeroReviveEventArgs; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }

#define <>C__DISPLAYCLASS174_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1393FE0)
#define <>C__DISPLAYCLASS174_0__BATTLE_HEROREVIVED_B__0_OFFSET UNITYSDK_OFFSET(0x1397790)

	inline static constexpr unsigned int <>c__DisplayClass174_0_TypeDefinitionIndex = 14428;

	class <>c__DisplayClass174_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::HeroReviveEventArgs* args; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS174_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Battle_HeroRevived_b__0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS174_0__BATTLE_HEROREVIVED_B__0_OFFSET))(arg, nullptr);
		}

	};

