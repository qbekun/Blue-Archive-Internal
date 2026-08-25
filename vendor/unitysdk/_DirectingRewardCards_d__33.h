#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::UI { class UICardGame_CardReward; }

#define <DIRECTINGREWARDCARDS>D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E19A20)
#define <DIRECTINGREWARDCARDS>D__33_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E1A950)

	inline static constexpr unsigned int <DirectingRewardCards>d__33_TypeDefinitionIndex = 20830;

	class <DirectingRewardCards>d__33 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::UI::UICardGame_CardReward* __4__this; // 0x28
		::System::Threading::CancellationToken* _cancellationTokenOnDestroy_5__2; // 0x30
		Awaiter* __u__1; // 0x38
		Il2CppObject* __7__wrap2; // 0x48

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DIRECTINGREWARDCARDS>D__33_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <DIRECTINGREWARDCARDS>D__33_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

