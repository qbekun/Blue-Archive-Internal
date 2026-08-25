#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AliveState; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AliveState_TypeDefinitionIndex = 14598;

	class AliveState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::AliveState* None; // 0x0
		::MX::Logic::Skills::AliveState* Alive; // 0x0
		::MX::Logic::Skills::AliveState* Dying; // 0x0
		::MX::Logic::Skills::AliveState* Dead; // 0x0
		::MX::Logic::Skills::AliveState* AliveOrDying; // 0x0
		::MX::Logic::Skills::AliveState* AliveOrDead; // 0x0
		::MX::Logic::Skills::AliveState* DeadOrDying; // 0x0
		::MX::Logic::Skills::AliveState* All; // 0x0

	};
}

