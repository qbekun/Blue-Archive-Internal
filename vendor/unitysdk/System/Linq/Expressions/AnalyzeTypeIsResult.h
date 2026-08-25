#pragma once
#include "../../../unitysdk.h"

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int AnalyzeTypeIsResult_TypeDefinitionIndex = 33024;

	class AnalyzeTypeIsResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Linq::Expressions::AnalyzeTypeIsResult* KnownFalse; // 0x0
		::System::Linq::Expressions::AnalyzeTypeIsResult* KnownTrue; // 0x0
		::System::Linq::Expressions::AnalyzeTypeIsResult* KnownAssignable; // 0x0
		::System::Linq::Expressions::AnalyzeTypeIsResult* Unknown; // 0x0

	};
}

