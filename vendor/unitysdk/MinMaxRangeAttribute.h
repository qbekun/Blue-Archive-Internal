#pragma once
#include "unitysdk.h"

#define MINMAXRANGEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x19951C0)

	inline static constexpr unsigned int MinMaxRangeAttribute_TypeDefinitionIndex = 107;

	class MinMaxRangeAttribute : public Il2CppObject
	{
	public:
		::System::Single minLimit; // 0x18
		::System::Single maxLimit; // 0x1C

		::System::Void .ctor(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXRANGEATTRIBUTE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

