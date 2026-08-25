#pragma once
#include "unitysdk.h"

#define <PROCESSWRITE>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A89AB0)
#define <PROCESSWRITE>D__34_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A8A100)

	inline static constexpr unsigned int <ProcessWrite>d__34_TypeDefinitionIndex = 29821;

	class <ProcessWrite>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebRequestStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Int32 size; // 0x40
		::Il2CppArray<::System::Object*>* buffer; // 0x48
		::System::Int32 offset; // 0x50
		ConfiguredTaskAwaiter* __u__1; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSWRITE>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSWRITE>D__34_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

