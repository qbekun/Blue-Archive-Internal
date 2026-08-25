#pragma once
#include "unitysdk.h"

#define <VERBOSEASYNC>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9BB4190)
#define <VERBOSEASYNC>D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9BB4460)

	inline static constexpr unsigned int <VerboseAsync>d__13_TypeDefinitionIndex = 25430;

	class <VerboseAsync>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		Payload* payload; // 0x30
		GameThreadPayload* gameThreadPayload; // 0x98
		Il2CppObject* __u__1; // 0xA8

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <VERBOSEASYNC>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <VERBOSEASYNC>D__13_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

