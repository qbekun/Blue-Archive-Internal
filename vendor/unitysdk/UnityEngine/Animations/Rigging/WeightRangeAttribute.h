#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTRANGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2D500)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int WeightRangeAttribute_TypeDefinitionIndex = 37194;

	class WeightRangeAttribute : public Il2CppObject
	{
	public:
		::System::Single min; // 0x18
		::System::Single max; // 0x1C

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTRANGEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

