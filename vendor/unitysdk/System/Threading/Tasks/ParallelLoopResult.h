#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopResult_TypeDefinitionIndex = 24157;

	class ParallelLoopResult : public Il2CppObject
	{
	public:
		::System::Boolean _completed; // 0x10
		Il2CppObject* _lowestBreakIteration; // 0x18

	};
}

