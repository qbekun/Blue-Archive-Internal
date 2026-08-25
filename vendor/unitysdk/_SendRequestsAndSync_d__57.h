#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class InteractiveWorldRaidTask;
class <>c__DisplayClass57_0;
class Awaiter;

#define <SENDREQUESTSANDSYNC>D__57_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26DA710)
#define <SENDREQUESTSANDSYNC>D__57_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x26DB160)

	inline static constexpr unsigned int <SendRequestsAndSync>d__57_TypeDefinitionIndex = 361;

	class <SendRequestsAndSync>d__57 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		InteractiveWorldRaidTask* __4__this; // 0x28
		<>c__DisplayClass57_0* __8__1; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDREQUESTSANDSYNC>D__57_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SENDREQUESTSANDSYNC>D__57_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

