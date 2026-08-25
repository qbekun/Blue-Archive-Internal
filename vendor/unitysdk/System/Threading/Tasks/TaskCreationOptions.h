#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCreationOptions_TypeDefinitionIndex = 24182;

	class TaskCreationOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::TaskCreationOptions* None; // 0x0
		::System::Threading::Tasks::TaskCreationOptions* PreferFairness; // 0x0
		::System::Threading::Tasks::TaskCreationOptions* LongRunning; // 0x0
		::System::Threading::Tasks::TaskCreationOptions* AttachedToParent; // 0x0
		::System::Threading::Tasks::TaskCreationOptions* DenyChildAttach; // 0x0
		::System::Threading::Tasks::TaskCreationOptions* HideScheduler; // 0x0
		::System::Threading::Tasks::TaskCreationOptions* RunContinuationsAsynchronously; // 0x0

	};
}

