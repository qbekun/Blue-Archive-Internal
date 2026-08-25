#pragma once
#include "unitysdk.h"

#define <LOADASYNCUNITASK>D__45`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <LOADASYNCUNITASK>D__45`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <LoadAsyncUniTask>d__45`1_TypeDefinitionIndex = 14959;

	class <LoadAsyncUniTask>d__45`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __t__builder; // 0x0
		::System::String* addressKey; // 0x0
		::System::Threading::CancellationToken* cancellationToken; // 0x0
		Il2CppObject* __u__1; // 0x0
		Il2CppObject* __u__2; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADASYNCUNITASK>D__45`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <LOADASYNCUNITASK>D__45`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

