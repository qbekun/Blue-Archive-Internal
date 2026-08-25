#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class CCGGameManager; }

#define <PREPAREFORGAME>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E93380)
#define <PREPAREFORGAME>D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E94070)

	inline static constexpr unsigned int <PrepareForGame>d__16_TypeDefinitionIndex = 21191;

	class <PrepareForGame>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::CCGGameManager* __4__this; // 0x28
		::System::Int64 _enemyGroupId; // 0x30
		::System::String* aiDataPath; // 0x38
		Il2CppObject* enemyGroup; // 0x40
		<>c__DisplayClass16_0* __8__1; // 0x48
		::System::Action* callback; // 0x50
		Il2CppObject* __u__1; // 0x58
		Awaiter* __u__2; // 0x70

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PREPAREFORGAME>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PREPAREFORGAME>D__16_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

