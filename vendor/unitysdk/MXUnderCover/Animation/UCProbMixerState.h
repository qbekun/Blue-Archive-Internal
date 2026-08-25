#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPROBMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3590)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCProbMixerState_TypeDefinitionIndex = 10094;

	class UCProbMixerState : public DualSenseHIDGenericInputReport
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROBMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

