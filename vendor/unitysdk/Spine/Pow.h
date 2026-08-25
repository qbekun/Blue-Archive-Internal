#pragma once
#include "../unitysdk.h"

#define SPINE_POW_APPLY_OFFSET UNITYSDK_OFFSET(0x95AEA50)
#define SPINE_POW_SET_POWER_OFFSET UNITYSDK_OFFSET(0x95AEB70)
#define SPINE_POW_GET_POWER_OFFSET UNITYSDK_OFFSET(0x95AEB80)
#define SPINE_POW_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AE990)

namespace Spine
{
	inline static constexpr unsigned int Pow_TypeDefinitionIndex = 35044;

	class Pow : public Il2CppObject
	{
	public:
		::System::Single _Power_k__BackingField; // 0x10

		::System::Single Apply(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POW_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Power(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POW_SET_POWER_OFFSET))(arg, nullptr);
		}

		::System::Single get_Power()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POW_GET_POWER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_POW_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

