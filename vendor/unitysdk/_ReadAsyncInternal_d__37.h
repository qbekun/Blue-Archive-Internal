#pragma once
#include "unitysdk.h"

#define <READASYNCINTERNAL>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9185EF0)
#define <READASYNCINTERNAL>D__37_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9186450)

	inline static constexpr unsigned int <ReadAsyncInternal>d__37_TypeDefinitionIndex = 24300;

	class <ReadAsyncInternal>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Security::Cryptography::CryptoStream* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* buffer; // 0x38
		::System::Int32 offset; // 0x40
		::System::Int32 count; // 0x44
		::System::Threading::CancellationToken* cancellationToken; // 0x48
		::System::Threading::SemaphoreSlim* _semaphore_5__2; // 0x50
		::System::Threading::Tasks::ForceAsyncAwaiter* __u__1; // 0x58
		Il2CppObject* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READASYNCINTERNAL>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READASYNCINTERNAL>D__37_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

