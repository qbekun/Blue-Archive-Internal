#pragma once
#include "../../unitysdk.h"

namespace System::Threading
{
	inline static constexpr unsigned int ThreadState_TypeDefinitionIndex = 24047;

	class ThreadState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Threading::ThreadState* Running; // 0x0
		::System::Threading::ThreadState* StopRequested; // 0x0
		::System::Threading::ThreadState* SuspendRequested; // 0x0
		::System::Threading::ThreadState* Background; // 0x0
		::System::Threading::ThreadState* Unstarted; // 0x0
		::System::Threading::ThreadState* Stopped; // 0x0
		::System::Threading::ThreadState* WaitSleepJoin; // 0x0
		::System::Threading::ThreadState* Suspended; // 0x0
		::System::Threading::ThreadState* AbortRequested; // 0x0
		::System::Threading::ThreadState* Aborted; // 0x0

	};
}

