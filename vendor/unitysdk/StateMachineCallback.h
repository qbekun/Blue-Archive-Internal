#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorStateInfo; }

#define STATEMACHINECALLBACK_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x10A8000)
#define STATEMACHINECALLBACK_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x10A8020)
#define STATEMACHINECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x10A8040)

	inline static constexpr unsigned int StateMachineCallback_TypeDefinitionIndex = 870;

	class StateMachineCallback : public Il2CppObject
	{
	public:
		::System::Action* OnStart; // 0x18
		::System::Action* OnEnd; // 0x20

		::System::Void OnStateExit(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STATEMACHINECALLBACK_ONSTATEEXIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STATEMACHINECALLBACK_ONSTATEENTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATEMACHINECALLBACK_.CTOR_OFFSET))(nullptr);
		}

	};

