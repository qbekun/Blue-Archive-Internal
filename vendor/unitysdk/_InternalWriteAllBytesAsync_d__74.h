#pragma once
#include "unitysdk.h"

#define <INTERNALWRITEALLBYTESASYNC>D__74_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9309D40)
#define <INTERNALWRITEALLBYTESASYNC>D__74_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x930A630)

	inline static constexpr unsigned int <InternalWriteAllBytesAsync>d__74_TypeDefinitionIndex = 25263;

	class <InternalWriteAllBytesAsync>d__74 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::String* path; // 0x30
		::Il2CppArray<::System::Object*>* bytes; // 0x38
		::System::Threading::CancellationToken* cancellationToken; // 0x40
		::System::IO::FileStream* _fs_5__2; // 0x48
		ConfiguredValueTaskAwaiter* __u__1; // 0x50
		ConfiguredTaskAwaiter* __u__2; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INTERNALWRITEALLBYTESASYNC>D__74_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INTERNALWRITEALLBYTESASYNC>D__74_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

