#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_INTERNAL_MATHEX_NEWARRAYCAPACITY_OFFSET UNITYSDK_OFFSET(0x906E2D0)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int MathEx_TypeDefinitionIndex = 35446;

	class MathEx : public Il2CppObject
	{
	public:
		::System::Int32 ArrayMexLength; // 0x0

		::System::Int32 NewArrayCapacity(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_MATHEX_NEWARRAYCAPACITY_OFFSET))(arg, nullptr);
		}

	};
}

