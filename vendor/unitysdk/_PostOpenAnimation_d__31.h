#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
class UIBattlePassLobby;
class Awaiter;

#define <POSTOPENANIMATION>D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2251FF0)
#define <POSTOPENANIMATION>D__31_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x22526A0)

	inline static constexpr unsigned int <PostOpenAnimation>d__31_TypeDefinitionIndex = 4535;

	class <PostOpenAnimation>d__31 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		UIBattlePassLobby* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <POSTOPENANIMATION>D__31_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <POSTOPENANIMATION>D__31_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

