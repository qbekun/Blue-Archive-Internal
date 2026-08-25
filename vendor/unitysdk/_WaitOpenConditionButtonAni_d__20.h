#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIScenarioMode_ModeSelect;
class Awaiter;

#define <WAITOPENCONDITIONBUTTONANI>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x280D600)
#define <WAITOPENCONDITIONBUTTONANI>D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x280D990)

	inline static constexpr unsigned int <WaitOpenConditionButtonAni>d__20_TypeDefinitionIndex = 7783;

	class <WaitOpenConditionButtonAni>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIScenarioMode_ModeSelect* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITOPENCONDITIONBUTTONANI>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WAITOPENCONDITIONBUTTONANI>D__20_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

