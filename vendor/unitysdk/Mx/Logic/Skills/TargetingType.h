#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetingType; }

namespace MX::Logic::Skills
{
	inline static constexpr unsigned int TargetingType_TypeDefinitionIndex = 14608;

	class TargetingType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Skills::TargetingType* None; // 0x0
		::MX::Logic::Skills::TargetingType* Target; // 0x0
		::MX::Logic::Skills::TargetingType* Position; // 0x0

	};
}

