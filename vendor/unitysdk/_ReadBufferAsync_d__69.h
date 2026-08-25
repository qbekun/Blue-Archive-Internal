#pragma once
#include "unitysdk.h"

#define <READBUFFERASYNC>D__69_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92F5DB0)
#define <READBUFFERASYNC>D__69_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x92F6630)

	inline static constexpr unsigned int <ReadBufferAsync>d__69_TypeDefinitionIndex = 25240;

	class <ReadBufferAsync>d__69 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::IO::StreamReader* __4__this; // 0x30
		::Il2CppArray<::System::Object*>* _tmpByteBuffer_5__2; // 0x38
		::System::IO::Stream* _tmpStream_5__3; // 0x40
		Il2CppObject* __u__1; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <READBUFFERASYNC>D__69_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <READBUFFERASYNC>D__69_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

