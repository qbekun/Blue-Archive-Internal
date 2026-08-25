#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCNPCMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD2DD0)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCNPCMixerState_TypeDefinitionIndex = 10076;

	class UCNPCMixerState : public ::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

