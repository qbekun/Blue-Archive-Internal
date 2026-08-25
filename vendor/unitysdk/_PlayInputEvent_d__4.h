#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG { class CCGBehaviour_User; }
namespace MX::MinigameCCG { class CCGEvent; }

#define <PLAYINPUTEVENT>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB7630)
#define <PLAYINPUTEVENT>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1DB90F0)

	inline static constexpr unsigned int <PlayInputEvent>d__4_TypeDefinitionIndex = 20443;

	class <PlayInputEvent>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::CCGBehaviour_User* __4__this; // 0x28
		::MX::MinigameCCG::CCGEvent* ev; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYINPUTEVENT>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYINPUTEVENT>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

