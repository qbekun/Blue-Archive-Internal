#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIBattlePassLobby;

#define <SETTEXTURES>D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2253740)
#define <SETTEXTURES>D__39_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2253D40)

	inline static constexpr unsigned int <SetTextures>d__39_TypeDefinitionIndex = 4538;

	class <SetTextures>d__39 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIBattlePassLobby* __4__this; // 0x28
		Il2CppObject* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SETTEXTURES>D__39_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <SETTEXTURES>D__39_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

