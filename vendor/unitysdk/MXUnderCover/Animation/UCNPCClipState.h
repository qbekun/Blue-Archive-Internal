#pragma once
#include "../../unitysdk.h"

#define MXUNDERCOVER_ANIMATION_UCNPCCLIPSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDD2D90)

namespace MXUnderCover::Animation
{
	inline static constexpr unsigned int UCNPCClipState_TypeDefinitionIndex = 10075;

	class UCNPCClipState : public ::UnityEngine::InputSystem::HID::HID
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_ANIMATION_UCNPCCLIPSTATE_.CTOR_OFFSET))(nullptr);
		}

	};
}

