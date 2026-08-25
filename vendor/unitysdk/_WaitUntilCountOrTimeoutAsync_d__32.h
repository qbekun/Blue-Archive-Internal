#pragma once
#include "unitysdk.h"

#define <WAITUNTILCOUNTORTIMEOUTASYNC>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x93DE940)
#define <WAITUNTILCOUNTORTIMEOUTASYNC>D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x93DF310)

	inline static constexpr unsigned int <WaitUntilCountOrTimeoutAsync>d__32_TypeDefinitionIndex = 24073;

	class <WaitUntilCountOrTimeoutAsync>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		TaskNode* asyncWaiter; // 0x38
		::System::Int32 millisecondsTimeout; // 0x40
		::System::Threading::SemaphoreSlim* __4__this; // 0x48
		::System::Threading::CancellationTokenSource* _cts_5__2; // 0x50
		::System::Object* __7__wrap2; // 0x58
		Il2CppObject* __u__1; // 0x60
		Il2CppObject* __u__2; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITUNTILCOUNTORTIMEOUTASYNC>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WAITUNTILCOUNTORTIMEOUTASYNC>D__32_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

