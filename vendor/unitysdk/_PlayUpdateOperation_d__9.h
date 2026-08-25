#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace BoardGame { class BoardGamePlay; }
namespace BoardGame { class BoardGameMessage; }
class Awaiter;

#define <PLAYUPDATEOPERATION>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE054D0)
#define <PLAYUPDATEOPERATION>D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xE06410)

	inline static constexpr unsigned int <PlayUpdateOperation>d__9_TypeDefinitionIndex = 10252;

	class <PlayUpdateOperation>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::BoardGame::BoardGamePlay* __4__this; // 0x28
		::BoardGame::BoardGameMessage* message; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYUPDATEOPERATION>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYUPDATEOPERATION>D__9_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

