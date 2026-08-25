#pragma once
#include "unitysdk.h"

#define <EXCEPTIONASYNC>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9BB47F0)
#define <EXCEPTIONASYNC>D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x9BB4AC0)

	inline static constexpr unsigned int <ExceptionAsync>d__17_TypeDefinitionIndex = 25432;

	class <ExceptionAsync>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		Payload* payload; // 0x30
		GameThreadPayload* gameThreadPayload; // 0x98
		::System::Exception* exception; // 0xA8
		Il2CppObject* __u__1; // 0xB0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXCEPTIONASYNC>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXCEPTIONASYNC>D__17_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

