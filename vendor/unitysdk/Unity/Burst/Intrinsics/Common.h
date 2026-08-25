#pragma once
#include "../../../unitysdk.h"

#define UNITY_BURST_INTRINSICS_COMMON_UMUL128_OFFSET UNITYSDK_OFFSET(0x9E35660)

namespace Unity::Burst::Intrinsics
{
	inline static constexpr unsigned int Common_TypeDefinitionIndex = 37259;

	class Common : public Il2CppObject
	{
	public:
		::System::UInt64 umul128(::System::UInt64 arg, ::System::UInt64 arg, uint64_t&* arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_INTRINSICS_COMMON_UMUL128_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

