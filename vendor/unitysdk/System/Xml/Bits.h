#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_BITS_COUNT_OFFSET UNITYSDK_OFFSET(0x984E1D0)
#define SYSTEM_XML_BITS_LEASTPOSITION_OFFSET UNITYSDK_OFFSET(0x984E270)
#define SYSTEM_XML_BITS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x984E390)

namespace System::Xml
{
	inline static constexpr unsigned int Bits_TypeDefinitionIndex = 27625;

	class Bits : public Il2CppObject
	{
	public:
		::System::UInt32 MASK_0101010101010101; // 0x0
		::System::UInt32 MASK_0011001100110011; // 0x4
		::System::UInt32 MASK_0000111100001111; // 0x8
		::System::UInt32 MASK_0000000011111111; // 0xC
		::System::UInt32 MASK_1111111111111111; // 0x10

		::System::Int32 Count(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 LeastPosition(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS_LEASTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

