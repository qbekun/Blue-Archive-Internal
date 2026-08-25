#pragma once
#include "../unitysdk.h"

#define SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IComparable_TypeDefinitionIndex = 23768;

	class IComparable : public Il2CppObject
	{
	public:
		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

