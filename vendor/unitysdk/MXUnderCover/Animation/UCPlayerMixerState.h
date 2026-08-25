#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPLAYERMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD31B0)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPlayerMixerState_TypeDefinitionIndex = 10085;

	class UCPlayerMixerState : public ::UnityEngine::InputSystem::DualShock::DualShockGamepad
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

