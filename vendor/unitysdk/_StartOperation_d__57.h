#pragma once
#include "unitysdk.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Net::Security { class AsyncProtocolRequest; }

#define <STARTOPERATION>D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96D6DB0)
#define <STARTOPERATION>D__57_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x96D7690)

	inline static constexpr unsigned int <StartOperation>d__57_TypeDefinitionIndex = 29070;

	class <StartOperation>d__57 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x30
		OperationType* type; // 0x38
		::Mono::Net::Security::AsyncProtocolRequest* asyncRequest; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		Il2CppObject* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTOPERATION>D__57_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <STARTOPERATION>D__57_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

