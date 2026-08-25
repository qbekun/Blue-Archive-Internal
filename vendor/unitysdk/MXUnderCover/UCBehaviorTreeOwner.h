#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCPath; }
class RotateData;
namespace MXUnderCover { class UCEntityMovement; }
namespace MXBehaviorTree { class Blackboard; }

#define MXUNDERCOVER_UCBEHAVIORTREEOWNER_SET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0xD643A0)
#define MXUNDERCOVER_UCBEHAVIORTREEOWNER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD643B0)
#define MXUNDERCOVER_UCBEHAVIORTREEOWNER_ONINITBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xD64400)
#define MXUNDERCOVER_UCBEHAVIORTREEOWNER_GET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0xD64500)
#define MXUNDERCOVER_UCBEHAVIORTREEOWNER_ONSTART_OFFSET UNITYSDK_OFFSET(0xD64510)
#define MXUNDERCOVER_UCBEHAVIORTREEOWNER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD645F0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBehaviorTreeOwner_TypeDefinitionIndex = 9661;

	class UCBehaviorTreeOwner : public Il2CppObject
	{
	public:
		::System::String* BlackboardIntCustomAnimationState; // 0x0
		::System::String* BlackboardFloatCustomAnimationDuration; // 0x0
		::MXUnderCover::UCPath* movingPath; // 0x18
		RotateData* guardMode; // 0x20
		::System::Single guardModeInterval; // 0x28
		::MXUnderCover::UCEntityMovement* _Movement_k__BackingField; // 0x30

		::System::Void set_Movement(::MXUnderCover::UCEntityMovement* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntityMovement*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBEHAVIORTREEOWNER_SET_MOVEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBEHAVIORTREEOWNER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnInitBlackboard(::MXBehaviorTree::Blackboard* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBEHAVIORTREEOWNER_ONINITBLACKBOARD_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCEntityMovement* get_Movement()
		{
			return ((::MXUnderCover::UCEntityMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBEHAVIORTREEOWNER_GET_MOVEMENT_OFFSET))(nullptr);
		}

		::System::Void OnStart(::MXBehaviorTree::Blackboard* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBEHAVIORTREEOWNER_ONSTART_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBEHAVIORTREEOWNER_.CTOR_OFFSET))(nullptr);
		}

	};
}

