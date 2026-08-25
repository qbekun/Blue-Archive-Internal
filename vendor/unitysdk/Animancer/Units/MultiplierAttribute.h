#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_MULTIPLIERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1C90)

namespace Animancer::Units
{
	inline static constexpr unsigned int MultiplierAttribute_TypeDefinitionIndex = 35259;

	class MultiplierAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_MULTIPLIERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

