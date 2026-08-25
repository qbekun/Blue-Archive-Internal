#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover::Animation { class UCPlayerAnimations; }

#define MXUNDERCOVER_ANIMATION_UCPLAYERSTATEMACHINE_GET_EXIT_OFFSET UNITYSDK_OFFSET(0xDD3100)
#define MXUNDERCOVER_ANIMATION_UCPLAYERSTATEMACHINE_GET_ENTER_OFFSET UNITYSDK_OFFSET(0xDD3110)
#define MXUNDERCOVER_ANIMATION_UCPLAYERSTATEMACHINE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xDD3120)
#define MXUNDERCOVER_ANIMATION_UCPLAYERSTATEMACHINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3130)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPlayerStateMachine_TypeDefinitionIndex = 10082;

	class UCPlayerStateMachine : public ::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDInputReport
	{
	public:
		::MXUnderCover::Animation::UCPlayerAnimations* get_Exit()
		{
			return ((::MXUnderCover::Animation::UCPlayerAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERSTATEMACHINE_GET_EXIT_OFFSET))(nullptr);
		}

		::MXUnderCover::Animation::UCPlayerAnimations* get_Enter()
		{
			return ((::MXUnderCover::Animation::UCPlayerAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERSTATEMACHINE_GET_ENTER_OFFSET))(nullptr);
		}

		::MXUnderCover::Animation::UCPlayerAnimations* get_Default()
		{
			return ((::MXUnderCover::Animation::UCPlayerAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERSTATEMACHINE_GET_DEFAULT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERSTATEMACHINE_.CTOR_OFFSET))(nullptr);
		}

	};
}

