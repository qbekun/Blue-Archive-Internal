#pragma once
#include "../../unitysdk.h"

#define UNITY_BURST_UNSAFE_ASREF_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Burst
{
	inline static constexpr unsigned int Unsafe_TypeDefinitionIndex = 38115;

	class Unsafe : public Il2CppObject
	{
	public:
		Il2CppObject&* AsRef(::System::Object** arg)
		{
			return (return (Il2CppObject&*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_UNSAFE_ASREF_OFFSET))(arg, nullptr);
		}

	};
}

