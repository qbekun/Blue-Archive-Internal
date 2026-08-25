#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class ComparisonOperation; }

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ComparisonOperation_TypeDefinitionIndex = 36778;

	class ComparisonOperation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXBehaviorTree::ComparisonOperation* Equal; // 0x0
		::MXBehaviorTree::ComparisonOperation* NotEqual; // 0x0
		::MXBehaviorTree::ComparisonOperation* Less; // 0x0
		::MXBehaviorTree::ComparisonOperation* LessOrEqual; // 0x0
		::MXBehaviorTree::ComparisonOperation* Greater; // 0x0
		::MXBehaviorTree::ComparisonOperation* GreaterOrEqual; // 0x0

	};
}

