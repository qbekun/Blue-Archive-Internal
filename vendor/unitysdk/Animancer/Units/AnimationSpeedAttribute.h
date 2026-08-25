#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_ANIMATIONSPEEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1B10)

namespace Animancer::Units
{
	inline static constexpr unsigned int AnimationSpeedAttribute_TypeDefinitionIndex = 35251;

	class AnimationSpeedAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_ANIMATIONSPEEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

