#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_ANIMATIONTIMEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1B30)

namespace Animancer::Units
{
	inline static constexpr unsigned int AnimationTimeAttribute_TypeDefinitionIndex = 35253;

	class AnimationTimeAttribute : public Il2CppObject
	{
	public:
		::System::String* Tooltip; // 0x0

		::System::Void .ctor(Units* arg)
		{
			((::System::Void(*)(Units*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_ANIMATIONTIMEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

