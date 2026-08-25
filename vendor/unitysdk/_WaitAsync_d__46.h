#pragma once
#include "unitysdk.h"

#define <WAITASYNC>D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A7DCD0)
#define <WAITASYNC>D__46_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A7E290)

	inline static constexpr unsigned int <WaitAsync>d__46_TypeDefinitionIndex = 29796;

	class <WaitAsync>d__46 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Int32 millisecondTimeout; // 0x30
		::System::Threading::Tasks::Task* workerTask; // 0x38
		::System::Threading::CancellationTokenSource* _cts_5__2; // 0x40
		::System::Threading::Tasks::Task* _timeoutTask_5__3; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITASYNC>D__46_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WAITASYNC>D__46_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

