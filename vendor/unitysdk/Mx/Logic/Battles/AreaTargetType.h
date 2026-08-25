#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AreaTargetType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AreaTargetType_TypeDefinitionIndex = 14272;

	class AreaTargetType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::AreaTargetType* Player; // 0x0
		::MX::Logic::Battles::AreaTargetType* Enemy; // 0x0
		::MX::Logic::Battles::AreaTargetType* Anyone; // 0x0
		::MX::Logic::Battles::AreaTargetType* EnemySpawnTemplateId; // 0x0
		::MX::Logic::Battles::AreaTargetType* PlayerAll; // 0x0
		::MX::Logic::Battles::AreaTargetType* PlayerSpawnTemplateId; // 0x0

	};
}

