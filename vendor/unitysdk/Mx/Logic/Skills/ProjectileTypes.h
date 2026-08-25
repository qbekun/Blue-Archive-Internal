#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class ProjectileTypes; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int ProjectileTypes_TypeDefinitionIndex = 14581;

	class ProjectileTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::ProjectileTypes* None; // 0x0
		::MX::Logic::Skills::ProjectileTypes* TargetCharacter; // 0x0
		::MX::Logic::Skills::ProjectileTypes* TargetPosition; // 0x0
		::MX::Logic::Skills::ProjectileTypes* Nontarget; // 0x0
		::MX::Logic::Skills::ProjectileTypes* Max; // 0x0

	};
}

