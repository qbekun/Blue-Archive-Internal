#pragma once
#include "unitysdk.h"

#define <INITIALIZE>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9A830E0)
#define <INITIALIZE>D__42_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9A83E10)

	inline static constexpr unsigned int <Initialize>d__42_TypeDefinitionIndex = 29811;

	class <Initialize>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::WebConnectionTunnel* __4__this; // 0x30
		::System::IO::Stream* stream; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::Boolean _have_auth_5__2; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50
		Il2CppObject* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZE>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INITIALIZE>D__42_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

