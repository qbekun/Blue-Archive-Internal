#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorStateInfo; }
namespace UnityEngine::Animations { class AnimatorControllerPlayable; }

#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA1C4340)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA1C4350)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA1C4360)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xA1C4370)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xA1C4380)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET UNITYSDK_OFFSET(0xA1C4390)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET UNITYSDK_OFFSET(0xA1C43A0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xA1C43B0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA1C43C0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xA1C43D0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET UNITYSDK_OFFSET(0xA1C43E0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET UNITYSDK_OFFSET(0xA1C43F0)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET UNITYSDK_OFFSET(0xA1C4400)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET UNITYSDK_OFFSET(0xA1C4410)
#define UNITYENGINE_STATEMACHINEBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1C4420)

namespace UnityEngine
{
	inline static constexpr unsigned int StateMachineBehaviour_TypeDefinitionIndex = 36443;

	class StateMachineBehaviour : public Il2CppObject
	{
	public:
		::System::Void OnStateEnter(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStateMachineEnter(::UnityEngine::Animator* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnStateMachineExit(::UnityEngine::Animator* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg, ::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEENTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg, ::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEUPDATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg, ::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEEXIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnStateMove(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg, ::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMOVE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnStateIK(::UnityEngine::Animator* arg, ::UnityEngine::AnimatorStateInfo* arg, ::System::Int32 arg, ::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEIK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnStateMachineEnter(::UnityEngine::Animator* arg, ::System::Int32 arg, ::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEENTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStateMachineExit(::UnityEngine::Animator* arg, ::System::Int32 arg, ::UnityEngine::Animations::AnimatorControllerPlayable* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::System::Int32, ::UnityEngine::Animations::AnimatorControllerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_ONSTATEMACHINEEXIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STATEMACHINEBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

