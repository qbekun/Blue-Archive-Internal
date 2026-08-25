#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskVoidMethodBuilder; }
class InteractiveWorldRaidProcedure;
class Awaiter;

#define <EXECUTECOMMANDS>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25A5F70)
#define <EXECUTECOMMANDS>D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x25A6BB0)

	inline static constexpr unsigned int <ExecuteCommands>d__14_TypeDefinitionIndex = 341;

	class <ExecuteCommands>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidProcedure* __4__this; // 0x20
		::System::Boolean evaluateResult; // 0x28
		::System::Threading::CancellationTokenSource* _linkedTokenSource_5__2; // 0x30
		Il2CppObject* __7__wrap2; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EXECUTECOMMANDS>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <EXECUTECOMMANDS>D__14_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

