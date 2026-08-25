#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Expressions { class EvaluateOptions; }

namespace MX::Core::Expressions
{
	inline static constexpr unsigned int EvaluateOptions_TypeDefinitionIndex = 12876;

	class EvaluateOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Core::Expressions::EvaluateOptions* None; // 0x0
		::MX::Core::Expressions::EvaluateOptions* IgnoreCase; // 0x0
		::MX::Core::Expressions::EvaluateOptions* NoCache; // 0x0
		::MX::Core::Expressions::EvaluateOptions* IterateParameters; // 0x0
		::MX::Core::Expressions::EvaluateOptions* RoundAwayFromZero; // 0x0

	};
}

