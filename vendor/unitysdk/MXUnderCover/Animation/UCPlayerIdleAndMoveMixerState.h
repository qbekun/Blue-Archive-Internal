#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPLAYERIDLEANDMOVEMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD31F0)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPlayerIdleAndMoveMixerState_TypeDefinitionIndex = 10086;

	class UCPlayerIdleAndMoveMixerState : public ::UnityEngine::InputSystem::EnhancedTouch::Touch
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERIDLEANDMOVEMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

