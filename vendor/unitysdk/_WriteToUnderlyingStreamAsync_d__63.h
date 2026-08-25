#pragma once
#include "unitysdk.h"

#define <WRITETOUNDERLYINGSTREAMASYNC>D__63_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9311380)
#define <WRITETOUNDERLYINGSTREAMASYNC>D__63_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9312B60)

	inline static constexpr unsigned int <WriteToUnderlyingStreamAsync>d__63_TypeDefinitionIndex = 25275;

	class <WriteToUnderlyingStreamAsync>d__63 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Threading::Tasks::Task* semaphoreLockTask; // 0x30
		::System::IO::BufferedStream* __4__this; // 0x38
		Il2CppObject* buffer; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		ConfiguredTaskAwaiter* __u__1; // 0x58
		ConfiguredValueTaskAwaiter* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITETOUNDERLYINGSTREAMASYNC>D__63_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITETOUNDERLYINGSTREAMASYNC>D__63_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

