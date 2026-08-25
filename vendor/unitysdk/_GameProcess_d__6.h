#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace BoardGame { class BoardGameTask; }
class Awaiter;

#define <GAMEPROCESS>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE067B0)
#define <GAMEPROCESS>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xE07020)

	inline static constexpr unsigned int <GameProcess>d__6_TypeDefinitionIndex = 10254;

	class <GameProcess>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Il2CppObject* rules; // 0x28
		::BoardGame::BoardGameTask* __4__this; // 0x30
		Il2CppObject* __7__wrap1; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GAMEPROCESS>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GAMEPROCESS>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

