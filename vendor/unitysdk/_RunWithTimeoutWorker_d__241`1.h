#pragma once
#include "unitysdk.h"

#define <RUNWITHTIMEOUTWORKER>D__241`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RUNWITHTIMEOUTWORKER>D__241`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <RunWithTimeoutWorker>d__241`1_TypeDefinitionIndex = 29775;

	class <RunWithTimeoutWorker>d__241`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __t__builder; // 0x0
		Il2CppObject* workerTask; // 0x0
		::System::Int32 timeout; // 0x0
		::System::Threading::CancellationTokenSource* cts; // 0x0
		::System::Action* abort; // 0x0
		Il2CppObject* aborted; // 0x0
		Il2CppObject* __u__1; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUNWITHTIMEOUTWORKER>D__241`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUNWITHTIMEOUTWORKER>D__241`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

