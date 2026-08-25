#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG { class EventHealthChange; }
namespace MX::MinigameCCG::Visual { class VisualActionDamageStriker; }

#define <PLAYAREADAMAGEEFFECTANDANIMATION>D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E63C50)
#define <PLAYAREADAMAGEEFFECTANDANIMATION>D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E64670)

	inline static constexpr unsigned int <PlayAreaDamageEffectAndAnimation>d__8_TypeDefinitionIndex = 21085;

	class <PlayAreaDamageEffectAndAnimation>d__8 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::EventHealthChange* eventHealthChange; // 0x28
		::MX::MinigameCCG::Visual::VisualActionDamageStriker* __4__this; // 0x30
		<>c__DisplayClass8_0* __8__1; // 0x38
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYAREADAMAGEEFFECTANDANIMATION>D__8_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYAREADAMAGEEFFECTANDANIMATION>D__8_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

