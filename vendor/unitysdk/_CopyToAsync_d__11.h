#pragma once
#include "unitysdk.h"

namespace MemoryPack::Compression { class BrotliCompressor; }

#define <COPYTOASYNC>D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x907D3E0)
#define <COPYTOASYNC>D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x907E6C0)

	inline static constexpr unsigned int <CopyToAsync>d__11_TypeDefinitionIndex = 35551;

	class <CopyToAsync>d__11 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder* __t__builder; // 0x18
		::MemoryPack::Compression::BrotliCompressor* __4__this; // 0x38
		::System::Int32 bufferSize; // 0x40
		::System::IO::Stream* stream; // 0x48
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		::System::IO::Compression::BrotliEncoder* _encoder_5__2; // 0x58
		::Il2CppArray<::System::Object*>* _buffer_5__3; // 0x68
		Enumerator* __7__wrap3; // 0x70
		Il2CppObject* _source_5__5; // 0xB0
		::System::Buffers::OperationStatus* _lastResult_5__6; // 0xC0
		::System::Int32 _bytesConsumed_5__7; // 0xC4
		ConfiguredValueTaskAwaiter* __u__1; // 0xC8

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPYTOASYNC>D__11_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <COPYTOASYNC>D__11_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

