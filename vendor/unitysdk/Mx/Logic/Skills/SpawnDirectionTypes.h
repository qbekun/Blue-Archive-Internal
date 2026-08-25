#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnDirectionTypes; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int SpawnDirectionTypes_TypeDefinitionIndex = 14596;

	class SpawnDirectionTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::SpawnDirectionTypes* None; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* Invoker; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* Input; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* ToTarget; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* AllyToEnemy; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* EnemyToAlly; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* AliveAllyCenter; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* AliveEnemyCenter; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* WorldPosition; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* CasterToTarget; // 0x0
		::MX::Logic::Skills::SpawnDirectionTypes* TargetToCaster; // 0x0

	};
}

