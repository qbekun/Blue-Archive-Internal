#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_RANGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CA60)

namespace UnityEngine
{
	inline static constexpr unsigned int RangeAttribute_TypeDefinitionIndex = 31115;

	class RangeAttribute : public Il2CppObject
	{
	public:
		::System::Single min; // 0x18
		::System::Single max; // 0x1C

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANGEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

