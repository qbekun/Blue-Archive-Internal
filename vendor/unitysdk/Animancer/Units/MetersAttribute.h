#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_METERSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1BD0)

namespace Animancer::Units
{
	inline static constexpr unsigned int MetersAttribute_TypeDefinitionIndex = 35256;

	class MetersAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_METERSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

