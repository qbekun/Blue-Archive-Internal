#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPROBTRANSITIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3610)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCProbTransitionState_TypeDefinitionIndex = 10096;

	class UCProbTransitionState : public ::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDBluetoothOutputReport
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROBTRANSITIONSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

