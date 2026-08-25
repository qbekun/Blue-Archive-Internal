#pragma once
#include "unitysdk.h"

#define <READASYNCINTERNAL>D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92F4EB0)
#define <READASYNCINTERNAL>D__66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x92F5D60)

	inline static constexpr unsigned int <ReadAsyncInternal>d__66_TypeDefinitionIndex = 25239;

	class <ReadAsyncInternal>d__66 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::IO::StreamReader* __4__this; // 0x38
		Il2CppObject* buffer; // 0x40
		::System::Threading::CancellationToken* cancellationToken; // 0x50
		::System::Int32 _charsRead_5__2; // 0x58
		::System::Boolean _readToUserBuffer_5__3; // 0x5C
		::Il2CppArray<::System::Object*>* _tmpByteBuffer_5__4; // 0x60
		::System::IO::Stream* _tmpStream_5__5; // 0x68
		::System::Int32 _count_5__6; // 0x70
		Il2CppObject* __u__1; // 0x78
		::System::Int32 _n_5__7; // 0x88
		Il2CppObject* __u__2; // 0x90

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READASYNCINTERNAL>D__66_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READASYNCINTERNAL>D__66_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

