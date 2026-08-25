#pragma once
#include "../unitysdk.h"

#define SYSTEM_ISPANFORMATTABLE_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ISpanFormattable_TypeDefinitionIndex = 23778;

	class ISpanFormattable : public Il2CppObject
	{
	public:
		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ISPANFORMATTABLE_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

