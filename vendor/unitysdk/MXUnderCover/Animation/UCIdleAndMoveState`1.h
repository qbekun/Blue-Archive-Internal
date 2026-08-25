#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover { class UCEntityMovement; }

#define MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_GET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_ONENTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_SET_MOVEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_GETCURRENTSPEEDRATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCIdleAndMoveState`1_TypeDefinitionIndex = 10100;

	class UCIdleAndMoveState`1 : public ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory
	{
	public:
		::MXUnderCover::UCEntityMovement* _Movement_k__BackingField; // 0x0
		::System::Single currentDampVelocity; // 0x0

		::MXUnderCover::UCEntityMovement* get_Movement()
		{
			return ((::MXUnderCover::UCEntityMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_GET_MOVEMENT_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_ONENTER_OFFSET))(nullptr);
		}

		::System::Void set_Movement(::MXUnderCover::UCEntityMovement* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntityMovement*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_SET_MOVEMENT_OFFSET))(arg, nullptr);
		}

		::System::Single GetCurrentSpeedRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_GETCURRENTSPEEDRATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCIDLEANDMOVESTATE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

