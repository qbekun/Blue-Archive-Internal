#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_COMBINE_OFFSET UNITYSDK_OFFSET(0x982A9B0)
#define SYSTEM_NUMERICS_HASHING_HASHHELPERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9836AF0)

namespace System::Numerics::Hashing
{
	inline static constexpr unsigned int HashHelpers_TypeDefinitionIndex = 37100;

	class HashHelpers : public Il2CppObject
	{
	public:
		::System::Int32 RandomSeed; // 0x0

		::System::Int32 Combine(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_COMBINE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_HASHING_HASHHELPERS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

