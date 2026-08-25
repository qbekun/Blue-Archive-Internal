#pragma once
#include "unitysdk.h"

namespace Mono::Net::Security { class AsyncProtocolRequest; }

#define <STARTOPERATION>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x96D1590)
#define <STARTOPERATION>D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x96D19C0)

	inline static constexpr unsigned int <StartOperation>d__23_TypeDefinitionIndex = 29057;

	class <StartOperation>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::Mono::Net::Security::AsyncProtocolRequest* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTOPERATION>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <STARTOPERATION>D__23_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

