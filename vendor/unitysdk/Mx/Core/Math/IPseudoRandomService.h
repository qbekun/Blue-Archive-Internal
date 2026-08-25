#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_MATH_IPSEUDORANDOMSERVICE_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IPSEUDORANDOMSERVICE_GET_SEED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IPSEUDORANDOMSERVICE_SETSEQUENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IPSEUDORANDOMSERVICE_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_MATH_IPSEUDORANDOMSERVICE_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Core::Math
{
	inline static constexpr unsigned int IPseudoRandomService_TypeDefinitionIndex = 12813;

	class IPseudoRandomService : public Il2CppObject
	{
	public:
		::System::Int32 get_Sequence()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IPSEUDORANDOMSERVICE_GET_SEQUENCE_OFFSET))(nullptr);
		}

		::System::UInt64 get_Seed()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IPSEUDORANDOMSERVICE_GET_SEED_OFFSET))(nullptr);
		}

		::System::Void SetSequence(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IPSEUDORANDOMSERVICE_SETSEQUENCE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IPSEUDORANDOMSERVICE_RESET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Reset(::System::UInt64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_MATH_IPSEUDORANDOMSERVICE_RESET_OFFSET))(arg, arg2, nullptr);
		}

	};
}

