#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS189_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1397280)
#define <>C__DISPLAYCLASS189_0__CONTAINS_B__0_OFFSET UNITYSDK_OFFSET(0x13983C0)
#define <>C__DISPLAYCLASS189_0__CONTAINS_B__1_OFFSET UNITYSDK_OFFSET(0x1398420)

	inline static constexpr unsigned int <>c__DisplayClass189_0_TypeDefinitionIndex = 14431;

	class <>c__DisplayClass189_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* entityId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS189_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Contains_b__0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS189_0__CONTAINS_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Contains_b__1(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS189_0__CONTAINS_B__1_OFFSET))(arg, nullptr);
		}

	};

