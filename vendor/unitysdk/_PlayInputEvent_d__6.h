#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG { class CCGEvent; }
namespace MX::MinigameCCG::Visual { class CCGBehaviour_Log; }

#define <PLAYINPUTEVENT>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E3A7E0)
#define <PLAYINPUTEVENT>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E3BF30)

	inline static constexpr unsigned int <PlayInputEvent>d__6_TypeDefinitionIndex = 21055;

	class <PlayInputEvent>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::CCGEvent* ev; // 0x28
		::MX::MinigameCCG::Visual::CCGBehaviour_Log* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYINPUTEVENT>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYINPUTEVENT>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

