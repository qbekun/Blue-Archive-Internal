#pragma once
#include "../../unitysdk.h"

namespace MXField::Core::State { class IEntityState; }
namespace UnityEngine { class Animator; }
namespace MXField::AnimationControl { class FieldAnimancerController; }
namespace UnityEngine::AI { class NavMeshAgent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xED0740)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xED0750)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xECCFB0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xECCC50)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_FLOATINGWIDGETANCHOR_OFFSET UNITYSDK_OFFSET(0xED0760)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xED0770)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xED0780)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_ANIMANCERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xED0790)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_SET_ANIMANCERCONTROLLER_OFFSET UNITYSDK_OFFSET(0xED07A0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_AGENT_OFFSET UNITYSDK_OFFSET(0xED07B0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_SET_AGENT_OFFSET UNITYSDK_OFFSET(0xED07C0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_ISMOVABLE_OFFSET UNITYSDK_OFFSET(0xED07D0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xED02C0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xED0850)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_SETANIMATOR_OFFSET UNITYSDK_OFFSET(0xED0960)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0xEC9CC0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_SETMOVABLE_OFFSET UNITYSDK_OFFSET(0xED09D0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_UPDATEMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0xED0AF0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_MOVETO_OFFSET UNITYSDK_OFFSET(0xED0BF0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_MOVETO_OFFSET UNITYSDK_OFFSET(0xED0DE0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_ROTATETOWARD_OFFSET UNITYSDK_OFFSET(0xED0EB0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_SKIPDYNAMICBONECALCULATION_OFFSET UNITYSDK_OFFSET(0xEC9BF0)
#define MXFIELD_CORE_FIELDENTITYCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED0390)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldEntityController_TypeDefinitionIndex = 10929;

	class FieldEntityController : public Il2CppObject
	{
	public:
		::MXField::Core::State::IEntityState* _CurrentState_k__BackingField; // 0x18
		Il2CppObject* OnStateChanged; // 0x20
		::UnityEngine::Animator* _Animator_k__BackingField; // 0x28
		::MXField::AnimationControl::FieldAnimancerController* _AnimancerController_k__BackingField; // 0x30
		::UnityEngine::AI::NavMeshAgent* _Agent_k__BackingField; // 0x38

		::MXField::Core::State::IEntityState* get_CurrentState()
		{
			return ((::MXField::Core::State::IEntityState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentState(::MXField::Core::State::IEntityState* arg)
		{
			((::System::Void(*)(::MXField::Core::State::IEntityState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_SET_CURRENTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnStateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_ADD_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnStateChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_REMOVE_ONSTATECHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_FloatingWidgetAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_FLOATINGWIDGETANCHOR_OFFSET))(nullptr);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void set_Animator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		::MXField::AnimationControl::FieldAnimancerController* get_AnimancerController()
		{
			return ((::MXField::AnimationControl::FieldAnimancerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_ANIMANCERCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_AnimancerController(::MXField::AnimationControl::FieldAnimancerController* arg)
		{
			((::System::Void(*)(::MXField::AnimationControl::FieldAnimancerController*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_SET_ANIMANCERCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AI::NavMeshAgent* get_Agent()
		{
			return ((::UnityEngine::AI::NavMeshAgent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_AGENT_OFFSET))(nullptr);
		}

		::System::Void set_Agent(::UnityEngine::AI::NavMeshAgent* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshAgent*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_SET_AGENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMovable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_GET_ISMOVABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetAnimator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_SETANIMATOR_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeState(::MXField::Core::State::IEntityState* arg)
		{
			((::System::Void(*)(::MXField::Core::State::IEntityState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetMovable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_SETMOVABLE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMoveAnimation(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_UPDATEMOVEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void MoveTo(::UnityEngine::Vector3* arg, ::System::Single arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_MOVETO_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void MoveTo(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg2, ::System::Single arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Single, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_MOVETO_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void RotateToward(::UnityEngine::Vector3* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_ROTATETOWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SkipDynamicBoneCalculation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_SKIPDYNAMICBONECALCULATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDENTITYCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

