#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIScenarioMode_ModeSelect;
class Awaiter;

#define <PLAYOPENANI>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x280CE20)
#define <PLAYOPENANI>D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x280D540)

	inline static constexpr unsigned int <PlayOpenAni>d__18_TypeDefinitionIndex = 7781;

	class <PlayOpenAni>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIScenarioMode_ModeSelect* __4__this; // 0x28
		::System::String* _aniName_5__2; // 0x30
		Awaiter* __u__1; // 0x38
		Awaiter* __u__2; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYOPENANI>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYOPENANI>D__18_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

