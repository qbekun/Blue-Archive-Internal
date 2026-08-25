#pragma once
#include "unitysdk.h"

#define <COPYTOASYNCINTERNAL>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9317CA0)
#define <COPYTOASYNCINTERNAL>D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x93187A0)

	inline static constexpr unsigned int <CopyToAsyncInternal>d__28_TypeDefinitionIndex = 25285;

	class <CopyToAsyncInternal>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Int32 bufferSize; // 0x30
		::System::IO::Stream* __4__this; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::IO::Stream* destination; // 0x48
		::Il2CppArray<::System::Object*>* _buffer_5__2; // 0x50
		Il2CppObject* __u__1; // 0x58
		ConfiguredValueTaskAwaiter* __u__2; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPYTOASYNCINTERNAL>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <COPYTOASYNCINTERNAL>D__28_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

