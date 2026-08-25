#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionApplyShieldStriker; }
namespace MX::MinigameCCG { class EventHealthChange; }

#define <PLAYSHIELDEFFECTANDANIMATION>D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E3F980)
#define <PLAYSHIELDEFFECTANDANIMATION>D__3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E40160)

	inline static constexpr unsigned int <PlayShieldEffectAndAnimation>d__3_TypeDefinitionIndex = 21063;

	class <PlayShieldEffectAndAnimation>d__3 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionApplyShieldStriker* __4__this; // 0x28
		::MX::MinigameCCG::EventHealthChange* eventHealthChange; // 0x30
		Awaiter* __u__1; // 0x38

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYSHIELDEFFECTANDANIMATION>D__3_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYSHIELDEFFECTANDANIMATION>D__3_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

