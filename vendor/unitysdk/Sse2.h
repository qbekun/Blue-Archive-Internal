#pragma once
#include "unitysdk.h"

namespace Unity::Burst::Intrinsics { class v128; }

#define SSE2_MUL_EPU32_OFFSET UNITYSDK_OFFSET(0x9E35CC0)
#define SSE2_SLLI_EPI64_OFFSET UNITYSDK_OFFSET(0x9E35E30)
#define SSE2_ADD_EPI64_OFFSET UNITYSDK_OFFSET(0x9E35C60)
#define SSE2_SRLI_EPI64_OFFSET UNITYSDK_OFFSET(0x9E36030)
#define SSE2_XOR_SI128_OFFSET UNITYSDK_OFFSET(0x9E35C10)
#define SSE2_SHUFFLE_EPI32_OFFSET UNITYSDK_OFFSET(0x9E361B0)

	inline static constexpr unsigned int Sse2_TypeDefinitionIndex = 37270;

	class Sse2 : public Il2CppObject
	{
	public:
		::Unity::Burst::Intrinsics::v128* mul_epu32(::Unity::Burst::Intrinsics::v128* arg, ::Unity::Burst::Intrinsics::v128* arg)
		{
			return (return (::Unity::Burst::Intrinsics::v128*(*)(::Unity::Burst::Intrinsics::v128*, ::Unity::Burst::Intrinsics::v128*, ::PVOID))((::PBYTE)hIl2Cpp + SSE2_MUL_EPU32_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v128* slli_epi64(::Unity::Burst::Intrinsics::v128* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Burst::Intrinsics::v128*(*)(::Unity::Burst::Intrinsics::v128*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SSE2_SLLI_EPI64_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v128* add_epi64(::Unity::Burst::Intrinsics::v128* arg, ::Unity::Burst::Intrinsics::v128* arg)
		{
			return (return (::Unity::Burst::Intrinsics::v128*(*)(::Unity::Burst::Intrinsics::v128*, ::Unity::Burst::Intrinsics::v128*, ::PVOID))((::PBYTE)hIl2Cpp + SSE2_ADD_EPI64_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v128* srli_epi64(::Unity::Burst::Intrinsics::v128* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Burst::Intrinsics::v128*(*)(::Unity::Burst::Intrinsics::v128*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SSE2_SRLI_EPI64_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v128* xor_si128(::Unity::Burst::Intrinsics::v128* arg, ::Unity::Burst::Intrinsics::v128* arg)
		{
			return (return (::Unity::Burst::Intrinsics::v128*(*)(::Unity::Burst::Intrinsics::v128*, ::Unity::Burst::Intrinsics::v128*, ::PVOID))((::PBYTE)hIl2Cpp + SSE2_XOR_SI128_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v128* shuffle_epi32(::Unity::Burst::Intrinsics::v128* arg, ::System::Int32 arg)
		{
			return (return (::Unity::Burst::Intrinsics::v128*(*)(::Unity::Burst::Intrinsics::v128*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SSE2_SHUFFLE_EPI32_OFFSET))(arg, arg, nullptr);
		}

	};

