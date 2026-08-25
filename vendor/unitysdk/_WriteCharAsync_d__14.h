#pragma once
#include "unitysdk.h"

#define <WRITECHARASYNC>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x94AFB80)
#define <WRITECHARASYNC>D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x94AFE90)

	inline static constexpr unsigned int <WriteCharAsync>d__14_TypeDefinitionIndex = 31866;

	class <WriteCharAsync>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* task; // 0x30
		::System::IO::TextWriter* writer; // 0x38
		::System::Char c; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITECHARASYNC>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITECHARASYNC>D__14_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

