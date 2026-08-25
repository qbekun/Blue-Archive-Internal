#pragma once
#include "unitysdk.h"

#define <ERRORASYNC>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9BB44C0)
#define <ERRORASYNC>D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9BB4790)

	inline static constexpr unsigned int <ErrorAsync>d__15_TypeDefinitionIndex = 25431;

	class <ErrorAsync>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		Payload* payload; // 0x30
		GameThreadPayload* gameThreadPayload; // 0x98
		Il2CppObject* __u__1; // 0xA8

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ERRORASYNC>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ERRORASYNC>D__15_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

