#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class ObstacleState; }

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ObstacleState_TypeDefinitionIndex = 13208;

	class ObstacleState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::BattleEntities::ObstacleState* Pre; // 0x0
		::MX::Logic::BattleEntities::ObstacleState* Idle; // 0x0
		::MX::Logic::BattleEntities::ObstacleState* Destroy; // 0x0
		::MX::Logic::BattleEntities::ObstacleState* Retreat; // 0x0
		::MX::Logic::BattleEntities::ObstacleState* Remain; // 0x0
		::MX::Logic::BattleEntities::ObstacleState* Remove; // 0x0

	};
}

