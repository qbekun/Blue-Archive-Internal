#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_DEGREESPERSECONDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1B90)

namespace Animancer::Units
{
	inline static constexpr unsigned int DegreesPerSecondAttribute_TypeDefinitionIndex = 35255;

	class DegreesPerSecondAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_DEGREESPERSECONDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

