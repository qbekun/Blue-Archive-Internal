#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionDamageStriker; }

#define <PLAYLAUNCHEFFECT>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E611F0)
#define <PLAYLAUNCHEFFECT>D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E61750)

	inline static constexpr unsigned int <PlayLaunchEffect>d__4_TypeDefinitionIndex = 21079;

	class <PlayLaunchEffect>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionDamageStriker* __4__this; // 0x28
		Awaiter* __u__1; // 0x30

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYLAUNCHEFFECT>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYLAUNCHEFFECT>D__4_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

