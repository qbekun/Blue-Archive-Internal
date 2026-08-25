#pragma once
#include "../unitysdk.h"

#define SYSTEM_BYREFERENCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BYREFERENCE`1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ByReference`1_TypeDefinitionIndex = 23906;

	class ByReference`1 : public Il2CppObject
	{
	public:
		::System::Int32 _value; // 0x0

		::System::Void .ctor(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYREFERENCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* get_Value()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYREFERENCE`1_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

