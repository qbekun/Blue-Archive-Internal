#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIBattlePassLobby;
class Awaiter;

#define <INITREWARDSCROLL>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22526B0)
#define <INITREWARDSCROLL>D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2253590)

	inline static constexpr unsigned int <InitRewardScroll>d__32_TypeDefinitionIndex = 4536;

	class <InitRewardScroll>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIBattlePassLobby* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <INITREWARDSCROLL>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <INITREWARDSCROLL>D__32_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

