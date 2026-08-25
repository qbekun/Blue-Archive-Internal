#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int CausalityTraceLevel_TypeDefinitionIndex = 24210;

	class CausalityTraceLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::CausalityTraceLevel* Required; // 0x0
		::System::Threading::Tasks::CausalityTraceLevel* Important; // 0x0
		::System::Threading::Tasks::CausalityTraceLevel* Verbose; // 0x0

	};
}

