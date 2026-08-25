#pragma once
#include "unitysdk.h"

namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace Mono::Net::Security { class AsyncOperationStatus; }

#define <PROCESSOPERATION>D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96D1A30)
#define <PROCESSOPERATION>D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x96D2250)

	inline static constexpr unsigned int <ProcessOperation>d__24_TypeDefinitionIndex = 29058;

	class <ProcessOperation>d__24 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::CancellationToken* cancellationToken; // 0x30
		::Mono::Net::Security::AsyncProtocolRequest* __4__this; // 0x38
		::Mono::Net::Security::AsyncOperationStatus* _status_5__2; // 0x40
		::Mono::Net::Security::AsyncOperationStatus* _newStatus_5__3; // 0x44
		Il2CppObject* __u__1; // 0x48
		ConfiguredTaskAwaiter* __u__2; // 0x58

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSOPERATION>D__24_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSOPERATION>D__24_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

