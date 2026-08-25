#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIBattlePassLobby;
class Awaiter;

#define <ONOPENED>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2251610)
#define <ONOPENED>D__30_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2251FE0)

	inline static constexpr unsigned int <OnOpened>d__30_TypeDefinitionIndex = 4534;

	class <OnOpened>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIBattlePassLobby* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONOPENED>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ONOPENED>D__30_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

