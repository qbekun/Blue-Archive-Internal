#pragma once
#include "unitysdk.h"

namespace Unity::Burst::Intrinsics { class v256; }

#define AVX_MM256_SET1_EPI32_OFFSET UNITYSDK_OFFSET(0x9E35B50)
#define AVX_MM256_LOAD_PS_OFFSET UNITYSDK_OFFSET(0x9E35B70)
#define AVX_MM256_STOREU_SI256_OFFSET UNITYSDK_OFFSET(0x9E35B90)
#define AVX_MM256_STORE_PS_OFFSET UNITYSDK_OFFSET(0x9E35BA0)
#define AVX_MM256_LOADU_SI256_OFFSET UNITYSDK_OFFSET(0x9E35BB0)

	inline static constexpr unsigned int Avx_TypeDefinitionIndex = 37267;

	class Avx : public Il2CppObject
	{
	public:
		::Unity::Burst::Intrinsics::v256* mm256_set1_epi32(::System::Int32 arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AVX_MM256_SET1_EPI32_OFFSET))(arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v256* mm256_load_ps(::System::Object** arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + AVX_MM256_LOAD_PS_OFFSET))(arg, nullptr);
		}

		::System::Void mm256_storeu_si256(::System::Object** arg, ::Unity::Burst::Intrinsics::v256* arg)
		{
			((::System::Void(*)(::System::Object**, ::Unity::Burst::Intrinsics::v256*, ::PVOID))((::PBYTE)hIl2Cpp + AVX_MM256_STOREU_SI256_OFFSET))(arg, arg, nullptr);
		}

		::System::Void mm256_store_ps(::System::Object** arg, ::Unity::Burst::Intrinsics::v256* arg)
		{
			((::System::Void(*)(::System::Object**, ::Unity::Burst::Intrinsics::v256*, ::PVOID))((::PBYTE)hIl2Cpp + AVX_MM256_STORE_PS_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::Intrinsics::v256* mm256_loadu_si256(::System::Object** arg)
		{
			return (return (::Unity::Burst::Intrinsics::v256*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + AVX_MM256_LOADU_SI256_OFFSET))(arg, nullptr);
		}

	};

