#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class AreaTriggerType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int AreaTriggerType_TypeDefinitionIndex = 14273;

	class AreaTriggerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::AreaTriggerType* Enter; // 0x0
		::MX::Logic::Battles::AreaTriggerType* Stay; // 0x0
		::MX::Logic::Battles::AreaTriggerType* Exit; // 0x0

	};
}

