#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnConditionCheckTarget; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int EntitySpawnConditionCheckTarget_TypeDefinitionIndex = 14576;

	class EntitySpawnConditionCheckTarget : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::EntitySpawnConditionCheckTarget* Caster; // 0x0
		::MX::Logic::Skills::EntitySpawnConditionCheckTarget* Target; // 0x0
		::MX::Logic::Skills::EntitySpawnConditionCheckTarget* SpawnEntityTarget; // 0x0

	};
}

