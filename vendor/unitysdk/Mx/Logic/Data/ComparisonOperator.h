#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ComparisonOperator; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ComparisonOperator_TypeDefinitionIndex = 13514;

	class ComparisonOperator : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::ComparisonOperator* Equal; // 0x0
		::MX::Logic::Data::ComparisonOperator* NotEqual; // 0x0
		::MX::Logic::Data::ComparisonOperator* Less; // 0x0
		::MX::Logic::Data::ComparisonOperator* LessOrEqual; // 0x0
		::MX::Logic::Data::ComparisonOperator* Greater; // 0x0
		::MX::Logic::Data::ComparisonOperator* GreaterOrEqual; // 0x0

	};
}

