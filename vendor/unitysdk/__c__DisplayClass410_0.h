#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS410_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1262F80)
#define <>C__DISPLAYCLASS410_0__FINDICHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x126C530)
#define <>C__DISPLAYCLASS410_0__FINDICHARACTER_B__1_OFFSET UNITYSDK_OFFSET(0x126C590)

	inline static constexpr unsigned int <>c__DisplayClass410_0_TypeDefinitionIndex = 13992;

	class <>c__DisplayClass410_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* entityId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS410_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindICharacter_b__0(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS410_0__FINDICHARACTER_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _FindICharacter_b__1(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS410_0__FINDICHARACTER_B__1_OFFSET))(arg, nullptr);
		}

	};

