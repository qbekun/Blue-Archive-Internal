#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks::CompilerServices { class AsyncUniTaskMethodBuilder; }
namespace MX::MinigameCCG::Visual { class VisualActionSkillVisual; }
namespace UnityEngine { class Transform; }

#define <ROTATELOOKATTARGET>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E790F0)
#define <ROTATELOOKATTARGET>D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1E79710)

	inline static constexpr unsigned int <RotateLookAtTarget>d__6_TypeDefinitionIndex = 21130;

	class <RotateLookAtTarget>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder* __t__builder; // 0x18
		::MX::MinigameCCG::Visual::VisualActionSkillVisual* __4__this; // 0x28
		::UnityEngine::Transform* source; // 0x30
		::System::Single _elapsedTime_5__2; // 0x38
		::System::Single _duration_5__3; // 0x3C
		Awaiter* __u__1; // 0x40

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATELOOKATTARGET>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <ROTATELOOKATTARGET>D__6_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

