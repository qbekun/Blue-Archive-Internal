#pragma once
#include "unitysdk.h"

#define <COPYTOASYNCCORE>D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9312BC0)
#define <COPYTOASYNCCORE>D__71_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x93135B0)

	inline static constexpr unsigned int <CopyToAsyncCore>d__71_TypeDefinitionIndex = 25276;

	class <CopyToAsyncCore>d__71 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::IO::BufferedStream* __4__this; // 0x30
		::System::IO::Stream* destination; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::Int32 bufferSize; // 0x48
		ConfiguredTaskAwaiter* __u__1; // 0x50
		ConfiguredValueTaskAwaiter* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPYTOASYNCCORE>D__71_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <COPYTOASYNCCORE>D__71_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

