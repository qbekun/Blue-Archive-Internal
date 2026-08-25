#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionHealStriker; }
namespace MX::MinigameCCG { class EventHealthChange; }

#define <PLAYHEALEFFECTANDANIMATION>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E6BB30)
#define <PLAYHEALEFFECTANDANIMATION>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E6BF50)

	inline static constexpr unsigned int <PlayHealEffectAndAnimation>d__3_TypeDefinitionIndex = 21103;

	class <PlayHealEffectAndAnimation>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionHealStriker* __4__this; // 0x28
		::MX::MinigameCCG::EventHealthChange* eventHealthChange; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYHEALEFFECTANDANIMATION>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYHEALEFFECTANDANIMATION>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

