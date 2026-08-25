#pragma once
#include "../unitysdk.h"

#define SYSTEM_MUTABLEDECIMAL_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x9385390)
#define SYSTEM_MUTABLEDECIMAL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x93853A0)

namespace System
{
	inline static constexpr unsigned int MutableDecimal_TypeDefinitionIndex = 23880;

	class MutableDecimal : public Il2CppObject
	{
	public:
		::System::UInt32 Flags; // 0x10
		::System::UInt32 High; // 0x14
		::System::UInt32 Low; // 0x18
		::System::UInt32 Mid; // 0x1C

		::System::Boolean get_IsNegative()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_GET_ISNEGATIVE_OFFSET))(nullptr);
		}

		::System::Int32 get_Scale()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_GET_SCALE_OFFSET))(nullptr);
		}

	};
}

