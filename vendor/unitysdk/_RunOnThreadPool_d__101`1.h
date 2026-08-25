#pragma once
#include "unitysdk.h"

#define <RUNONTHREADPOOL>D__101`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <RUNONTHREADPOOL>D__101`1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <RunOnThreadPool>d__101`1_TypeDefinitionIndex = 35930;

	class <RunOnThreadPool>d__101`1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __t__builder; // 0x0
		::System::Threading::CancellationToken* cancellationToken; // 0x0
		::System::Boolean configureAwait; // 0x0
		Il2CppObject* func; // 0x0
		Awaiter* __u__1; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		Il2CppObject* __7__wrap3; // 0x0
		Awaiter* __u__2; // 0x0

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <RUNONTHREADPOOL>D__101`1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <RUNONTHREADPOOL>D__101`1_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

