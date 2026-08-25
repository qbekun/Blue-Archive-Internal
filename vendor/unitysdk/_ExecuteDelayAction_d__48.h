#pragma once
#include "unitysdk.h"

#define <EXECUTEDELAYACTION>D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9D44800)
#define <EXECUTEDELAYACTION>D__48_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9D44A10)

	inline static constexpr unsigned int <ExecuteDelayAction>d__48_TypeDefinitionIndex = 26142;

	class <ExecuteDelayAction>d__48 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder* __t__builder; // 0x18
		::System::Single delayTime; // 0x38
		::System::Action* callback; // 0x40
		::System::Runtime::CompilerServices::TaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDELAYACTION>D__48_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTEDELAYACTION>D__48_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

