#pragma once
#include "unitysdk.h"

class ConfiguredTaskAwaiter;

#define <WRITEASYNC>D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1034250)
#define <WRITEASYNC>D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1034480)

	inline static constexpr unsigned int <WriteAsync>d__2_TypeDefinitionIndex = 12830;

	class <WriteAsync>d__2 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder* __t__builder; // 0x18
		::System::String* fileName; // 0x30
		::System::String* text; // 0x38
		ConfiguredTaskAwaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNC>D__2_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WRITEASYNC>D__2_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

