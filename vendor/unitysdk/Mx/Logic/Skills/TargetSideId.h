#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int TargetSideId_TypeDefinitionIndex = 14609;

	class TargetSideId : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::TargetSideId* None; // 0x0
		::MX::Logic::Skills::TargetSideId* Self; // 0x0
		::MX::Logic::Skills::TargetSideId* Ally_Except_Self; // 0x0
		::MX::Logic::Skills::TargetSideId* Enemy; // 0x0
		::MX::Logic::Skills::TargetSideId* Neutral; // 0x0
		::MX::Logic::Skills::TargetSideId* Ally; // 0x0
		::MX::Logic::Skills::TargetSideId* Self_or_Enemy; // 0x0
		::MX::Logic::Skills::TargetSideId* Self_or_Neutral; // 0x0
		::MX::Logic::Skills::TargetSideId* Ally_or_Enemy; // 0x0
		::MX::Logic::Skills::TargetSideId* Ally_or_Neutral; // 0x0
		::MX::Logic::Skills::TargetSideId* Enemy_or_Neutral; // 0x0
		::MX::Logic::Skills::TargetSideId* All_Except_Self; // 0x0
		::MX::Logic::Skills::TargetSideId* ALL; // 0x0

	};
}

