#pragma once
#include "unitysdk.h"

#define <WRITEASYNCINTERNAL>D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9187A50)
#define <WRITEASYNCINTERNAL>D__46_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9187F40)

	inline static constexpr unsigned int <WriteAsyncInternal>d__46_TypeDefinitionIndex = 24302;

	class <WriteAsyncInternal>d__46 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Security::Cryptography::CryptoStream* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* buffer; // 0x38
		::System::Int32 offset; // 0x40
		::System::Int32 count; // 0x44
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Threading::SemaphoreSlim* _semaphore_5__2; // 0x50
		::System::Threading::Tasks::ForceAsyncAwaiter* __u__1; // 0x58
		::System::Runtime::CompilerServices::TaskAwaiter* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINTERNAL>D__46_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNCINTERNAL>D__46_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

