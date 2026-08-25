#pragma once
#include "../unitysdk.h"

#define SYSTEM_ARGITERATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x93B36E0)
#define SYSTEM_ARGITERATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93B3740)

namespace System
{
	inline static constexpr unsigned int ArgIterator_TypeDefinitionIndex = 23956;

	class ArgIterator : public Il2CppObject
	{
	public:
		::System::Int32 sig; // 0x10
		::System::Int32 args; // 0x18
		::System::Int32 next_arg; // 0x20
		::System::Int32 num_args; // 0x24

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGITERATOR_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

