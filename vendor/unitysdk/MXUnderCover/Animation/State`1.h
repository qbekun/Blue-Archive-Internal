#pragma once
#include "../../unitysdk.h"

namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerComponent; }
namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_ANIMATION_STATE`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_SET_ANIMANCERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_ONEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_GET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_SET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_SAMPLING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_GET_ANIMANCERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_GET_ANIMANCER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_ONENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_GET_IDASINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_ONEXIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_STATE`1_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int State`1_TypeDefinitionIndex = 10098;

	class State`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Id; // 0x0
		Il2CppObject* _StateMachine_k__BackingField; // 0x0
		::Animancer::AnimancerState* _AnimancerState_k__BackingField; // 0x0
		::System::Boolean ChangeDefaultStateWhenEnd; // 0x0
		Il2CppObject* EnterEvents; // 0x0
		Il2CppObject* ExitEvents; // 0x0
		::System::Boolean isEnd; // 0x0

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_SET_ISEND_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void set_AnimancerState(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_SET_ANIMANCERSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_ONEND_OFFSET))(nullptr);
		}

		Il2CppObject* get_StateMachine()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_GET_STATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void set_StateMachine(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_SET_STATEMACHINE_OFFSET))(arg, nullptr);
		}

		::System::Void Sampling()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_SAMPLING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_GET_ISEND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::Animancer::AnimancerState* get_AnimancerState()
		{
			return ((::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_GET_ANIMANCERSTATE_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_ONUPDATE_OFFSET))(nullptr);
		}

		::Animancer::AnimancerComponent* get_Animancer()
		{
			return ((::Animancer::AnimancerComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_GET_ANIMANCER_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_ONENTER_OFFSET))(nullptr);
		}

		::System::Int32 get_IdAsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_GET_IDASINT_OFFSET))(nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_ONEXIT_OFFSET))(nullptr);
		}

		::MXUnderCover::UCEntity* get_Owner()
		{
			return ((::MXUnderCover::UCEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_STATE`1_GET_OWNER_OFFSET))(nullptr);
		}

	};
}

