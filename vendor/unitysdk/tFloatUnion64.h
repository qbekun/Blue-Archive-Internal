#pragma once
#include "unitysdk.h"

#define TFLOATUNION64_GETMANTISSA_OFFSET UNITYSDK_OFFSET(0x9E35030)
#define TFLOATUNION64_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x9E35040)
#define TFLOATUNION64_GETEXPONENT_OFFSET UNITYSDK_OFFSET(0x9E35020)

	inline static constexpr unsigned int tFloatUnion64_TypeDefinitionIndex = 37253;

	class tFloatUnion64 : public Il2CppObject
	{
	public:
		::System::Double m_floatingPoint; // 0x10
		::System::UInt64 m_integer; // 0x10

		::System::UInt64 GetMantissa()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + TFLOATUNION64_GETMANTISSA_OFFSET))(nullptr);
		}

		::System::Boolean IsNegative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TFLOATUNION64_ISNEGATIVE_OFFSET))(nullptr);
		}

		::System::UInt32 GetExponent()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TFLOATUNION64_GETEXPONENT_OFFSET))(nullptr);
		}

	};

