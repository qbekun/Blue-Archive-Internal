#pragma once
#include "unitysdk.h"

#define <LOADINTOBUFFERASYNC>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9814A30)
#define <LOADINTOBUFFERASYNC>D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9814D90)

	inline static constexpr unsigned int <LoadIntoBufferAsync>d__17_TypeDefinitionIndex = 36656;

	class <LoadIntoBufferAsync>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::Net::Http::HttpContent* __4__this; // 0x30
		::System::Int64 maxBufferSize; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADINTOBUFFERASYNC>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADINTOBUFFERASYNC>D__17_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

