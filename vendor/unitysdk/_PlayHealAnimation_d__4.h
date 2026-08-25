#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionHealStriker; }
namespace MX::MinigameCCG { class EventHealthChange; }

#define <PLAYHEALANIMATION>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E6BF60)
#define <PLAYHEALANIMATION>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E6C860)

	inline static constexpr unsigned int <PlayHealAnimation>d__4_TypeDefinitionIndex = 21104;

	class <PlayHealAnimation>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionHealStriker* __4__this; // 0x28
		::MX::MinigameCCG::EventHealthChange* healthChange; // 0x30
		CCGVisualStriker* _striker_5__2; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYHEALANIMATION>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYHEALANIMATION>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

