#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_METERSPERSECONDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1C10)

namespace Animancer::Units
{
	inline static constexpr unsigned int MetersPerSecondAttribute_TypeDefinitionIndex = 35257;

	class MetersPerSecondAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_METERSPERSECONDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

