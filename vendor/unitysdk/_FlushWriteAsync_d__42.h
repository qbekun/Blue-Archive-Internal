#pragma once
#include "unitysdk.h"

#define <FLUSHWRITEASYNC>D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9310000)
#define <FLUSHWRITEASYNC>D__42_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9310660)

	inline static constexpr unsigned int <FlushWriteAsync>d__42_TypeDefinitionIndex = 25273;

	class <FlushWriteAsync>d__42 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::IO::BufferedStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		ConfiguredValueTaskAwaiter* __u__1; // 0x40
		ConfiguredTaskAwaiter* __u__2; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLUSHWRITEASYNC>D__42_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FLUSHWRITEASYNC>D__42_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

