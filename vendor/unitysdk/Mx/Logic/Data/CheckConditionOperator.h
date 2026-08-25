#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class CheckConditionOperator; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CheckConditionOperator_TypeDefinitionIndex = 13513;

	class CheckConditionOperator : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::CheckConditionOperator* And; // 0x0
		::MX::Logic::Data::CheckConditionOperator* Or; // 0x0

	};
}

