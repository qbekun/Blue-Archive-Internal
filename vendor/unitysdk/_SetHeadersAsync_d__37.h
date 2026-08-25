#pragma once
#include "unitysdk.h"

#define <SETHEADERSASYNC>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A8A5A0)
#define <SETHEADERSASYNC>D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8ACF0)

	inline static constexpr unsigned int <SetHeadersAsync>d__37_TypeDefinitionIndex = 29823;

	class <SetHeadersAsync>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebRequestStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Boolean setInternalLength; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETHEADERSASYNC>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETHEADERSASYNC>D__37_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

