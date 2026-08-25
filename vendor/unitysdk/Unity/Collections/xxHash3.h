#pragma once
#include "../../unitysdk.h"

namespace Unity::Mathematics { class uint4&; }
namespace Unity::Mathematics { class uint4; }

#define UNITY_COLLECTIONS_XXHASH3_AVX2HASHLONGINTERNALLOOP_OFFSET UNITYSDK_OFFSET(0x9E39790)
#define UNITY_COLLECTIONS_XXHASH3_AVX2SCRAMBLEACC_OFFSET UNITYSDK_OFFSET(0x9E3A030)
#define UNITY_COLLECTIONS_XXHASH3_AVX2ACCUMULATE_OFFSET UNITYSDK_OFFSET(0x9E39F90)
#define UNITY_COLLECTIONS_XXHASH3_AVX2ACCUMULATE512_OFFSET UNITYSDK_OFFSET(0x9E3A6F0)
#define UNITY_COLLECTIONS_XXHASH3_HASH64LONG_OFFSET UNITYSDK_OFFSET(0x9E3AD80)
#define UNITY_COLLECTIONS_XXHASH3_HASH128LONG_OFFSET UNITYSDK_OFFSET(0x9E3B030)
#define UNITY_COLLECTIONS_XXHASH3_TOUINT4_OFFSET UNITYSDK_OFFSET(0x9E3B340)
#define UNITY_COLLECTIONS_XXHASH3_READ64LE_OFFSET UNITYSDK_OFFSET(0x9E3B360)
#define UNITY_COLLECTIONS_XXHASH3_WRITE64LE_OFFSET UNITYSDK_OFFSET(0x9E3B370)
#define UNITY_COLLECTIONS_XXHASH3_MUL32TO64_OFFSET UNITYSDK_OFFSET(0x9E3B380)
#define UNITY_COLLECTIONS_XXHASH3_XORSHIFT64_OFFSET UNITYSDK_OFFSET(0x9E3B390)
#define UNITY_COLLECTIONS_XXHASH3_MUL128FOLD64_OFFSET UNITYSDK_OFFSET(0x9E3B3A0)
#define UNITY_COLLECTIONS_XXHASH3_AVALANCHE_OFFSET UNITYSDK_OFFSET(0x9E3B3D0)
#define UNITY_COLLECTIONS_XXHASH3_MIX2ACC_OFFSET UNITYSDK_OFFSET(0x9E3B400)
#define UNITY_COLLECTIONS_XXHASH3_MERGEACC_OFFSET UNITYSDK_OFFSET(0x9E3B430)
#define UNITY_COLLECTIONS_XXHASH3_DEFAULTHASHLONGINTERNALLOOP_OFFSET UNITYSDK_OFFSET(0x9E3B540)
#define UNITY_COLLECTIONS_XXHASH3_DEFAULTACCUMULATE_OFFSET UNITYSDK_OFFSET(0x9E3BBC0)
#define UNITY_COLLECTIONS_XXHASH3_DEFAULTACCUMULATE512_OFFSET UNITYSDK_OFFSET(0x9E3BD30)
#define UNITY_COLLECTIONS_XXHASH3_DEFAULTSCRAMBLEACC_OFFSET UNITYSDK_OFFSET(0x9E3BC50)
#define UNITY_COLLECTIONS_XXHASH3_HASH64LONG$BURSTMANAGED_OFFSET UNITYSDK_OFFSET(0x9E3BF60)
#define UNITY_COLLECTIONS_XXHASH3_HASH128LONG$BURSTMANAGED_OFFSET UNITYSDK_OFFSET(0x9E3C080)

namespace Unity::Collections
{
	inline static constexpr unsigned int xxHash3_TypeDefinitionIndex = 37052;

	class xxHash3 : public Il2CppObject
	{
	public:
		::System::Void Avx2HashLongInternalLoop(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_AVX2HASHLONGINTERNALLOOP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Avx2ScrambleAcc(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_AVX2SCRAMBLEACC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Avx2Accumulate(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_AVX2ACCUMULATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Avx2Accumulate512(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_AVX2ACCUMULATE512_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt64 Hash64Long(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg)
		{
			return (return (::System::UInt64(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_HASH64LONG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Hash128Long(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg, ::Unity::Mathematics::uint4&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::Unity::Mathematics::uint4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_HASH128LONG_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Unity::Mathematics::uint4* ToUint4(::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::Unity::Mathematics::uint4*(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_TOUINT4_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Read64LE(::System::Object** arg)
		{
			return (return (::System::UInt64(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_READ64LE_OFFSET))(arg, nullptr);
		}

		::System::Void Write64LE(::System::Object** arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_WRITE64LE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Mul32To64(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_MUL32TO64_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 XorShift64(::System::UInt64 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_XORSHIFT64_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Mul128Fold64(::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_MUL128FOLD64_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Avalanche(::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_AVALANCHE_OFFSET))(arg, nullptr);
		}

		::System::UInt64 Mix2Acc(::System::UInt64 arg, ::System::UInt64 arg, ::System::Object** arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_MIX2ACC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 MergeAcc(::System::Object** arg, ::System::Object** arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::Object**, ::System::Object**, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_MERGEACC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DefaultHashLongInternalLoop(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_DEFAULTHASHLONGINTERNALLOOP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DefaultAccumulate(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_DEFAULTACCUMULATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DefaultAccumulate512(::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_DEFAULTACCUMULATE512_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DefaultScrambleAcc(::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_DEFAULTSCRAMBLEACC_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Hash64Long$BurstManaged(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg)
		{
			return (return (::System::UInt64(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_HASH64LONG$BURSTMANAGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Hash128Long$BurstManaged(::System::Object** arg, ::System::Object** arg, ::System::Int64 arg, ::System::Object** arg, ::Unity::Mathematics::uint4&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::System::Int64, ::System::Object**, ::Unity::Mathematics::uint4&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_XXHASH3_HASH128LONG$BURSTMANAGED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

