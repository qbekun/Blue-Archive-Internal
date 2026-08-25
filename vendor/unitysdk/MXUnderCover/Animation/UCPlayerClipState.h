#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCPLAYERCLIPSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD3170)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCPlayerClipState_TypeDefinitionIndex = 10084;

	class UCPlayerClipState : public HIDReportData
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCPLAYERCLIPSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

