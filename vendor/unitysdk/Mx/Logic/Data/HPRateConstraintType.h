#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class HPRateConstraintType; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HPRateConstraintType_TypeDefinitionIndex = 13526;

	class HPRateConstraintType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::HPRateConstraintType* None; // 0x0
		::MX::Logic::Data::HPRateConstraintType* HPOver; // 0x0
		::MX::Logic::Data::HPRateConstraintType* HPUnder; // 0x0

	};
}

