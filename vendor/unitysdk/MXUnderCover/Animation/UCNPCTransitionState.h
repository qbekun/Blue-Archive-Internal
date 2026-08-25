#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCNPCTRANSITIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD2E50)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCNPCTransitionState_TypeDefinitionIndex = 10078;

	class UCNPCTransitionState : public ::UnityEngine::InputSystem::DualShock::LowLevel::DualSenseHIDUSBOutputReport
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCTRANSITIONSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

