#pragma once
#include "unitysdk.h"

#define <FINISHWRITING>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A89030)
#define <FINISHWRITING>D__31_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A89420)

	inline static constexpr unsigned int <FinishWriting>d__31_TypeDefinitionIndex = 29819;

	class <FinishWriting>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebRequestStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FINISHWRITING>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FINISHWRITING>D__31_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

