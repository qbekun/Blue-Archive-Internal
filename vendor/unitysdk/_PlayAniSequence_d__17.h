#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIScenarioMode_ModeSelect;
class Awaiter;

#define <PLAYANISEQUENCE>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x280C460)
#define <PLAYANISEQUENCE>D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x280CE10)

	inline static constexpr unsigned int <PlayAniSequence>d__17_TypeDefinitionIndex = 7780;

	class <PlayAniSequence>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIScenarioMode_ModeSelect* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYANISEQUENCE>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYANISEQUENCE>D__17_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

