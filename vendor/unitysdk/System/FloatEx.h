#pragma once
#include "../unitysdk.h"

#define SYSTEM_FLOATEX_ISFINITE_OFFSET UNITYSDK_OFFSET(0xA4AD580)
#define SYSTEM_FLOATEX_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0xA4AD5F0)
#define SYSTEM_FLOATEX_ISFINITE_OFFSET UNITYSDK_OFFSET(0xA4AD640)
#define SYSTEM_FLOATEX_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0xA4AD660)
#define SYSTEM_FLOATEX_SINGLETOINT32BITS_OFFSET UNITYSDK_OFFSET(0xA4AD670)

namespace System
{
	inline static constexpr unsigned int FloatEx_TypeDefinitionIndex = 34650;

	class FloatEx : public Il2CppObject
	{
	public:
		::System::Boolean IsFinite(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FLOATEX_ISFINITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegative(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FLOATEX_ISNEGATIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFinite(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FLOATEX_ISFINITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegative(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FLOATEX_ISNEGATIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 SingleToInt32Bits(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FLOATEX_SINGLETOINT32BITS_OFFSET))(arg, nullptr);
		}

	};
}

