#pragma once
#include "unitysdk.h"

#define <READALLASYNC>D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8F130)
#define <READALLASYNC>D__48_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8FDD0)

	inline static constexpr unsigned int <ReadAllAsync>d__48_TypeDefinitionIndex = 29831;

	class <ReadAllAsync>d__48 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebResponseStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Boolean resending; // 0x40
		::System::Net::WebCompletionSource* _completion_5__2; // 0x48
		::System::Threading::CancellationTokenSource* _timeoutCts_5__3; // 0x50
		::System::Threading::Tasks::Task* _timeoutTask_5__4; // 0x58
		Il2CppObject* __u__1; // 0x60
		Il2CppObject* __u__2; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READALLASYNC>D__48_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READALLASYNC>D__48_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

