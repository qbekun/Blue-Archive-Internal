#pragma once
#include "../../../../unitysdk.h"

namespace System::Threading::Tasks::Sources
{
	inline static constexpr unsigned int ValueTaskSourceOnCompletedFlags_TypeDefinitionIndex = 24215;

	class ValueTaskSourceOnCompletedFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags* None; // 0x0
		::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags* UseSchedulingContext; // 0x0
		::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags* FlowExecutionContext; // 0x0

	};
}

