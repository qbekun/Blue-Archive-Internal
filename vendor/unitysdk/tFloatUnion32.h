#pragma once
#include "unitysdk.h"

#define TFLOATUNION32_GETEXPONENT_OFFSET UNITYSDK_OFFSET(0x9E34FF0)
#define TFLOATUNION32_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x9E35010)
#define TFLOATUNION32_GETMANTISSA_OFFSET UNITYSDK_OFFSET(0x9E35000)

	inline static constexpr unsigned int tFloatUnion32_TypeDefinitionIndex = 37252;

	class tFloatUnion32 : public Il2CppObject
	{
	public:
		::System::Single m_floatingPoint; // 0x10
		::System::UInt32 m_integer; // 0x10

		::System::UInt32 GetExponent()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TFLOATUNION32_GETEXPONENT_OFFSET))(nullptr);
		}

		::System::Boolean IsNegative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TFLOATUNION32_ISNEGATIVE_OFFSET))(nullptr);
		}

		::System::UInt32 GetMantissa()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TFLOATUNION32_GETMANTISSA_OFFSET))(nullptr);
		}

	};

