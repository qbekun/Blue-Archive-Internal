#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int InternalTaskOptions_TypeDefinitionIndex = 24183;

	class InternalTaskOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::InternalTaskOptions* None; // 0x0
		::System::Threading::Tasks::InternalTaskOptions* InternalOptionsMask; // 0x0
		::System::Threading::Tasks::InternalTaskOptions* ContinuationTask; // 0x0
		::System::Threading::Tasks::InternalTaskOptions* PromiseTask; // 0x0
		::System::Threading::Tasks::InternalTaskOptions* LazyCancellation; // 0x0
		::System::Threading::Tasks::InternalTaskOptions* QueuedByRuntime; // 0x0
		::System::Threading::Tasks::InternalTaskOptions* DoNotDispose; // 0x0

	};
}

