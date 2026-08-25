#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIPopup_SNS;
class Awaiter;

#define <WAITOPENANIEVENT>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAE1B20)
#define <WAITOPENANIEVENT>D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xAE1DC0)

	inline static constexpr unsigned int <WaitOpenAniEvent>d__26_TypeDefinitionIndex = 8077;

	class <WaitOpenAniEvent>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIPopup_SNS* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITOPENANIEVENT>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <WAITOPENANIEVENT>D__26_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

