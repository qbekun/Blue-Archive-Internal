#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGGameManager; }

#define <ENDGAME>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E97660)
#define <ENDGAME>D__22_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E97DE0)

	inline static constexpr unsigned int <EndGame>d__22_TypeDefinitionIndex = 21205;

	class <EndGame>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGGameManager* __4__this; // 0x28
		::System::Boolean isGiveup; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENDGAME>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ENDGAME>D__22_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

