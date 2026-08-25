#pragma once
#include "unitysdk.h"

#define <FLUSHASYNCINTERNAL>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x930F7F0)
#define <FLUSHASYNCINTERNAL>D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x930FFA0)

	inline static constexpr unsigned int <FlushAsyncInternal>d__38_TypeDefinitionIndex = 25272;

	class <FlushAsyncInternal>d__38 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::IO::BufferedStream* __4__this; // 0x30
		::System::Threading::CancellationToken* cancellationToken; // 0x38
		::System::Threading::SemaphoreSlim* _sem_5__2; // 0x40
		ConfiguredTaskAwaiter* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLUSHASYNCINTERNAL>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <FLUSHASYNCINTERNAL>D__38_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

