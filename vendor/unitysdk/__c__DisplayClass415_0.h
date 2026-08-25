#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }

#define <>C__DISPLAYCLASS415_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1263450)
#define <>C__DISPLAYCLASS415_0__FINDBATTLEENTITYWITHOBSTACLE_B__0_OFFSET UNITYSDK_OFFSET(0x126C5F0)

	inline static constexpr unsigned int <>c__DisplayClass415_0_TypeDefinitionIndex = 13993;

	class <>c__DisplayClass415_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* entityId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS415_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindBattleEntityWithObstacle_b__0(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS415_0__FINDBATTLEENTITYWITHOBSTACLE_B__0_OFFSET))(arg, nullptr);
		}

	};

