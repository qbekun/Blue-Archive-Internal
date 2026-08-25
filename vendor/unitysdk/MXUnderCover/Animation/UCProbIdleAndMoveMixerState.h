#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPROBIDLEANDMOVEMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD35D0)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCProbIdleAndMoveMixerState_TypeDefinitionIndex = 10095;

	class UCProbIdleAndMoveMixerState : public Enumerator
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROBIDLEANDMOVEMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

