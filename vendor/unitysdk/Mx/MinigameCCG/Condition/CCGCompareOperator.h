#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::Condition { class CCGCompareOperator; }

namespace MX::MinigameCCG::Condition
{
	inline static constexpr unsigned int CCGCompareOperator_TypeDefinitionIndex = 20930;

	class CCGCompareOperator : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::Condition::CCGCompareOperator* Equal; // 0x0
		::MX::MinigameCCG::Condition::CCGCompareOperator* NotEqual; // 0x0
		::MX::MinigameCCG::Condition::CCGCompareOperator* GreaterEqual; // 0x0
		::MX::MinigameCCG::Condition::CCGCompareOperator* Greater; // 0x0
		::MX::MinigameCCG::Condition::CCGCompareOperator* LessEqual; // 0x0
		::MX::MinigameCCG::Condition::CCGCompareOperator* Less; // 0x0

	};
}

