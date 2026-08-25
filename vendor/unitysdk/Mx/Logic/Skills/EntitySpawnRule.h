#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnRule; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int EntitySpawnRule_TypeDefinitionIndex = 14577;

	class EntitySpawnRule : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::EntitySpawnRule* SpawnAll; // 0x0
		::MX::Logic::Skills::EntitySpawnRule* SpawnOnlyOne; // 0x0
		::MX::Logic::Skills::EntitySpawnRule* SpawnOnlyOnePerFrame; // 0x0

	};
}

