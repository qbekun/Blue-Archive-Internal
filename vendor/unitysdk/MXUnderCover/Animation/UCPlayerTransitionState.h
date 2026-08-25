#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPLAYERTRANSITIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3230)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPlayerTransitionState_TypeDefinitionIndex = 10087;

	class UCPlayerTransitionState : public <rawData>e__FixedBuffer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERTRANSITIONSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

