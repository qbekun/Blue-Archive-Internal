#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class AbilityActivateTag; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int AbilityActivateTag_TypeDefinitionIndex = 14527;

	class AbilityActivateTag : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::AbilityActivateTag* None; // 0x0
		::MX::Logic::Skills::AbilityActivateTag* ActionStart; // 0x0
		::MX::Logic::Skills::AbilityActivateTag* ActionRelease; // 0x0
		::MX::Logic::Skills::AbilityActivateTag* ActionEnd; // 0x0

	};
}

