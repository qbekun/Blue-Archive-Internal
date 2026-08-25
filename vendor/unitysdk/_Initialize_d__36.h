#pragma once
#include "unitysdk.h"

#define <INITIALIZE>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8A160)
#define <INITIALIZE>D__36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8A540)

	inline static constexpr unsigned int <Initialize>d__36_TypeDefinitionIndex = 29822;

	class <Initialize>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebRequestStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40
		::System::Runtime::CompilerServices::TaskAwaiter* __u__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZE>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZE>D__36_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

