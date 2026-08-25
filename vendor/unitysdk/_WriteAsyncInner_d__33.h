#pragma once
#include "unitysdk.h"

#define <WRITEASYNCINNER>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A89480)
#define <WRITEASYNCINNER>D__33_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A89A50)

	inline static constexpr unsigned int <WriteAsyncInner>d__33_TypeDefinitionIndex = 29820;

	class <WriteAsyncInner>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebRequestStream* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* buffer; // 0x38
		::System::Int32 offset; // 0x40
		::System::Int32 size; // 0x44
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Net::WebCompletionSource* completion; // 0x50
		ConfiguredTaskAwaiter* __u__1; // 0x58
		::System::Runtime::CompilerServices::TaskAwaiter* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINNER>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINNER>D__33_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

