#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover::Animation { class UCPropAnimations; }

#define MXUNDERCOVER_ANIMATION_UCPROPSTATEMACHINE_GET_EXIT_OFFSET UNITYSDK_OFFSET(0xDD34E0)
#define MXUNDERCOVER_ANIMATION_UCPROPSTATEMACHINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD34F0)
#define MXUNDERCOVER_ANIMATION_UCPROPSTATEMACHINE_GET_ENTER_OFFSET UNITYSDK_OFFSET(0xDD3530)
#define MXUNDERCOVER_ANIMATION_UCPROPSTATEMACHINE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xDD3540)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPropStateMachine_TypeDefinitionIndex = 10091;

	class UCPropStateMachine : public ::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDOutputReportPayload
	{
	public:
		::MXUnderCover::Animation::UCPropAnimations* get_Exit()
		{
			return ((::MXUnderCover::Animation::UCPropAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROPSTATEMACHINE_GET_EXIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROPSTATEMACHINE_.CTOR_OFFSET))(nullptr);
		}

		::MXUnderCover::Animation::UCPropAnimations* get_Enter()
		{
			return ((::MXUnderCover::Animation::UCPropAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROPSTATEMACHINE_GET_ENTER_OFFSET))(nullptr);
		}

		::MXUnderCover::Animation::UCPropAnimations* get_Default()
		{
			return ((::MXUnderCover::Animation::UCPropAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROPSTATEMACHINE_GET_DEFAULT_OFFSET))(nullptr);
		}

	};
}

