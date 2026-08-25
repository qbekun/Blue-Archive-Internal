#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPROBCLIPSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3550)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCProbClipState_TypeDefinitionIndex = 10093;

	class UCProbClipState : public HIDItemTypeAndTag
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPROBCLIPSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

