#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskContinuationOptions_TypeDefinitionIndex = 24184;

	class TaskContinuationOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::TaskContinuationOptions* None; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* PreferFairness; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* LongRunning; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* AttachedToParent; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* DenyChildAttach; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* HideScheduler; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* LazyCancellation; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* RunContinuationsAsynchronously; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* NotOnRanToCompletion; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* NotOnFaulted; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* NotOnCanceled; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* OnlyOnRanToCompletion; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* OnlyOnFaulted; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* OnlyOnCanceled; // 0x0
		::System::Threading::Tasks::TaskContinuationOptions* ExecuteSynchronously; // 0x0

	};
}

