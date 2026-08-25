#pragma once
#include "../unitysdk.h"

#define SPINE_POWOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AE9F0)
#define SPINE_POWOUT_APPLY_OFFSET UNITYSDK_OFFSET(0x95AEB90)

namespace Spine
{
	inline static constexpr unsigned int PowOut_TypeDefinitionIndex = 35045;

	class PowOut : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POWOUT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single Apply(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POWOUT_APPLY_OFFSET))(arg, nullptr);
		}

	};
}

