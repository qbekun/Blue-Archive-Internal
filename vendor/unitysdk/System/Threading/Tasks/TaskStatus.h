#pragma once
#include "../../../unitysdk.h"

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskStatus_TypeDefinitionIndex = 24174;

	class TaskStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::Tasks::TaskStatus* Created; // 0x0
		::System::Threading::Tasks::TaskStatus* WaitingForActivation; // 0x0
		::System::Threading::Tasks::TaskStatus* WaitingToRun; // 0x0
		::System::Threading::Tasks::TaskStatus* Running; // 0x0
		::System::Threading::Tasks::TaskStatus* WaitingForChildrenToComplete; // 0x0
		::System::Threading::Tasks::TaskStatus* RanToCompletion; // 0x0
		::System::Threading::Tasks::TaskStatus* Canceled; // 0x0
		::System::Threading::Tasks::TaskStatus* Faulted; // 0x0

	};
}

