#pragma once
#include "../../unitysdk.h"

namespace MXUnderCover::Animation { class UCNPCAnimations; }

#define MXUNDERCOVER_ANIMATION_UCNPCSTATEMACHINE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xDD2D20)
#define MXUNDERCOVER_ANIMATION_UCNPCSTATEMACHINE_GET_EXIT_OFFSET UNITYSDK_OFFSET(0xDD2D30)
#define MXUNDERCOVER_ANIMATION_UCNPCSTATEMACHINE_GET_ENTER_OFFSET UNITYSDK_OFFSET(0xDD2D40)
#define MXUNDERCOVER_ANIMATION_UCNPCSTATEMACHINE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD2D50)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCNPCStateMachine_TypeDefinitionIndex = 10073;

	class UCNPCStateMachine : public ::UnityEngine::InputSystem::DualShock::IDualShockHaptics
	{
	public:
		::MXUnderCover::Animation::UCNPCAnimations* get_Default()
		{
			return ((::MXUnderCover::Animation::UCNPCAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCSTATEMACHINE_GET_DEFAULT_OFFSET))(nullptr);
		}

		::MXUnderCover::Animation::UCNPCAnimations* get_Exit()
		{
			return ((::MXUnderCover::Animation::UCNPCAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCSTATEMACHINE_GET_EXIT_OFFSET))(nullptr);
		}

		::MXUnderCover::Animation::UCNPCAnimations* get_Enter()
		{
			return ((::MXUnderCover::Animation::UCNPCAnimations*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCSTATEMACHINE_GET_ENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCSTATEMACHINE_.CTOR_OFFSET))(nullptr);
		}

	};
}

