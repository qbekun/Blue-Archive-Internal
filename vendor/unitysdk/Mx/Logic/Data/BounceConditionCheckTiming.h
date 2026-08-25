#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BounceConditionCheckTiming; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BounceConditionCheckTiming_TypeDefinitionIndex = 13511;

	class BounceConditionCheckTiming : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::BounceConditionCheckTiming* Defualt; // 0x0
		::MX::Logic::Data::BounceConditionCheckTiming* AfterHitAbilities; // 0x0
		::MX::Logic::Data::BounceConditionCheckTiming* AfterFixedDelay; // 0x0

	};
}

