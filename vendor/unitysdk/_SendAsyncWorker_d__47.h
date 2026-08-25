#pragma once
#include "unitysdk.h"

#define <SENDASYNCWORKER>D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9813A20)
#define <SENDASYNCWORKER>D__47_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9814220)

	inline static constexpr unsigned int <SendAsyncWorker>d__47_TypeDefinitionIndex = 36652;

	class <SendAsyncWorker>d__47 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Net::Http::HttpClient* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Net::Http::HttpRequestMessage* request; // 0x40
		::System::Net::Http::HttpCompletionOption* completionOption; // 0x48
		::System::Threading::CancellationTokenSource* _lcts_5__2; // 0x50
		::System::Net::Http::HttpResponseMessage* _response_5__3; // 0x58
		Il2CppObject* __u__1; // 0x60
		ConfiguredTaskAwaiter* __u__2; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDASYNCWORKER>D__47_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SENDASYNCWORKER>D__47_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

