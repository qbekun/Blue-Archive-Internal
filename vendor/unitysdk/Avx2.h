#pragma once
#include "unitysdk.h"

namespace Unity::Burst::Intrinsics { class v256; }

#define AVX2_GET_ISAVX2SUPPORTED_OFFSET UNITYSDK_OFFSET(0x9E35BD0)
#define AVX2_MM256_XOR_SI256_OFFSET UNITYSDK_OFFSET(0x9E35BE0)
#define AVX2_MM256_ADD_EPI64_OFFSET UNITYSDK_OFFSET(0x9E35C30)
#define AVX2_MM256_MUL_EPU32_OFFSET UNITYSDK_OFFSET(0x9E35C80)
#define AVX2_MM256_SLLI_EPI64_OFFSET UNITYSDK_OFFSET(0x9E35CE0)
#define AVX2_MM256_SRLI_EPI64_OFFSET UNITYSDK_OFFSET(0x9E35EE0)
#define AVX2_MM256_SHUFFLE_EPI32_OFFSET UNITYSDK_OFFSET(0x9E360D0)

	inline static constexpr unsigned int Avx2_TypeDefinitionIndex = 37268;

	class Avx2 : public Il2CppObject
	{
	public:
		::System::Boolean get_IsAvx2Supported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AVX2_GET_ISAVX2SUPPORTED_OFFSET))(nullptr);
		}

		::Unity::Burst::Intrinsics::v256* mm256_xor_si256(::Unity::Burst::Intrinsics::v256* arg, ::Unity::Burst::Intrinsics::v256* arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::Unity::Burst::Intrinsics::v256*, ::Unity::Burst::Intrinsics::v256*, ::PVOID))((::PBYTE)hIl2Cpp + AVX2_MM256_XOR_SI256_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v256* mm256_add_epi64(::Unity::Burst::Intrinsics::v256* arg, ::Unity::Burst::Intrinsics::v256* arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::Unity::Burst::Intrinsics::v256*, ::Unity::Burst::Intrinsics::v256*, ::PVOID))((::PBYTE)hIl2Cpp + AVX2_MM256_ADD_EPI64_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v256* mm256_mul_epu32(::Unity::Burst::Intrinsics::v256* arg, ::Unity::Burst::Intrinsics::v256* arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::Unity::Burst::Intrinsics::v256*, ::Unity::Burst::Intrinsics::v256*, ::PVOID))((::PBYTE)hIl2Cpp + AVX2_MM256_MUL_EPU32_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v256* mm256_slli_epi64(::Unity::Burst::Intrinsics::v256* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::Unity::Burst::Intrinsics::v256*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AVX2_MM256_SLLI_EPI64_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v256* mm256_srli_epi64(::Unity::Burst::Intrinsics::v256* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::Unity::Burst::Intrinsics::v256*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AVX2_MM256_SRLI_EPI64_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v256* mm256_shuffle_epi32(::Unity::Burst::Intrinsics::v256* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::Unity::Burst::Intrinsics::v256*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AVX2_MM256_SHUFFLE_EPI32_OFFSET))(arg, arg, nullptr);
		}

	};

