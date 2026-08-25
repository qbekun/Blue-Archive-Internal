#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AccumulateExecuteCondition; }

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AccumulateExecuteCondition_TypeDefinitionIndex = 13506;

	class AccumulateExecuteCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Data::AccumulateExecuteCondition* OverAccumulateAmount; // 0x0
		::MX::Logic::Data::AccumulateExecuteCondition* OverDuration; // 0x0

	};
}

