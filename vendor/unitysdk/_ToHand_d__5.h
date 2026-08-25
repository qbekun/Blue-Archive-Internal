#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionMulliganDrawCard; }

#define <TOHAND>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E72850)
#define <TOHAND>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E72F50)

	inline static constexpr unsigned int <ToHand>d__5_TypeDefinitionIndex = 21117;

	class <ToHand>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		Il2CppObject* visualCards; // 0x28
		::MX::MinigameCCG::Visual::VisualActionMulliganDrawCard* __4__this; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOHAND>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <TOHAND>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

