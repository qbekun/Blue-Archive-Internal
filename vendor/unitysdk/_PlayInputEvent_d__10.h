#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG { class CCGEvent; }
namespace MX::MinigameCCG { class CCGBehaviour_Bot; }

#define <PLAYINPUTEVENT>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB3A20)
#define <PLAYINPUTEVENT>D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1DB47E0)

	inline static constexpr unsigned int <PlayInputEvent>d__10_TypeDefinitionIndex = 20439;

	class <PlayInputEvent>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::CCGEvent* ev; // 0x28
		::MX::MinigameCCG::CCGBehaviour_Bot* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYINPUTEVENT>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYINPUTEVENT>D__10_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

