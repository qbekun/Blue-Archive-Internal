#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_DEGREESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1B40)

namespace Animancer::Units
{
	inline static constexpr unsigned int DegreesAttribute_TypeDefinitionIndex = 35254;

	class DegreesAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_DEGREESATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

