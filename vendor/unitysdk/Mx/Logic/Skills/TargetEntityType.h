#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetEntityType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int TargetEntityType_TypeDefinitionIndex = 14605;

	class TargetEntityType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::TargetEntityType* None; // 0x0
		::MX::Logic::Skills::TargetEntityType* Character; // 0x0
		::MX::Logic::Skills::TargetEntityType* Character_Except_TSS; // 0x0
		::MX::Logic::Skills::TargetEntityType* TSS; // 0x0
		::MX::Logic::Skills::TargetEntityType* Supporter; // 0x0
		::MX::Logic::Skills::TargetEntityType* Obstacle; // 0x0

	};
}

