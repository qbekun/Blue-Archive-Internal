#pragma once
#include "unitysdk.h"

#define <<COPYTOASYNC>G__COPYTOASYNCIMPL|57_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90EC940)
#define <<COPYTOASYNC>G__COPYTOASYNCIMPL|57_0>D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x90ECC30)

	inline static constexpr unsigned int <<CopyToAsync>g__CopyToAsyncImpl|57_0>d_TypeDefinitionIndex = 37223;

	class <<CopyToAsync>g__CopyToAsyncImpl|57_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Int64 count; // 0x30
		BlockAndOffset* blockAndOffset; // 0x38
		Il2CppObject* blocks; // 0x40
		::System::IO::Stream* destination; // 0x48
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		::System::Int64 _bytesRemaining_5__2; // 0x58
		::System::Int32 _currentBlock_5__3; // 0x60
		::System::Int32 _amountToCopy_5__4; // 0x64
		::System::Runtime::CompilerServices::TaskAwaiter* __u__1; // 0x68

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COPYTOASYNC>G__COPYTOASYNCIMPL|57_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <<COPYTOASYNC>G__COPYTOASYNCIMPL|57_0>D_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

