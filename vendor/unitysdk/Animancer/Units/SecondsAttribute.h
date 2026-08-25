#pragma once
#include "../../unitysdk.h"

#define ANIMANCER_UNITS_SECONDSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1CD0)

namespace Animancer::Units
{
	inline static constexpr unsigned int SecondsAttribute_TypeDefinitionIndex = 35260;

	class SecondsAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_UNITS_SECONDSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

