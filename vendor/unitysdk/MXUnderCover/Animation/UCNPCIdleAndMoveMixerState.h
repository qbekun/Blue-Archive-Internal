#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCNPCIDLEANDMOVEMIXERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD2E10)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCNPCIdleAndMoveMixerState_TypeDefinitionIndex = 10077;

	class UCNPCIdleAndMoveMixerState : public <>c
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCIDLEANDMOVEMIXERSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

