#pragma once
#include "unitysdk.h"

#define GRISU3_TRYRUNCOUNTED_OFFSET UNITYSDK_OFFSET(0xA4C7310)
#define GRISU3_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0xA4C7840)
#define GRISU3_TRYROUNDWEEDCOUNTED_OFFSET UNITYSDK_OFFSET(0xA4C7890)
#define GRISU3_TRYDIGITGENCOUNTED_OFFSET UNITYSDK_OFFSET(0xA4C7560)
#define GRISU3_ISNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0xA4C7A80)
#define GRISU3_TRYRUNDOUBLE_OFFSET UNITYSDK_OFFSET(0xA4C7A90)
#define GRISU3_TRYRUNSHORTEST_OFFSET UNITYSDK_OFFSET(0xA4C7DA0)
#define GRISU3_TRYDIGITGENSHORTEST_OFFSET UNITYSDK_OFFSET(0xA4C7FB0)
#define GRISU3_BIGGESTPOWERTEN_OFFSET UNITYSDK_OFFSET(0xA4C7990)
#define GRISU3_TRYRUNSINGLE_OFFSET UNITYSDK_OFFSET(0xA4C8510)
#define GRISU3_TRYROUNDWEEDSHORTEST_OFFSET UNITYSDK_OFFSET(0xA4C8400)
#define GRISU3_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4C8840)
#define GRISU3_GETCACHEDPOWERFORBINARYEXPONENTRANGE_OFFSET UNITYSDK_OFFSET(0xA4C7450)

	inline static constexpr unsigned int Grisu3_TypeDefinitionIndex = 34659;

	class Grisu3 : public Il2CppObject
	{
	public:
		::System::Int32 CachedPowersDecimalExponentDistance; // 0x0
		::System::Int32 CachedPowersMinDecimalExponent; // 0x0
		::System::Int32 CachedPowersPowerMaxDecimalExponent; // 0x0
		::System::Int32 CachedPowersOffset; // 0x0
		::System::Double D1Log210; // 0x0
		::System::Int32 MaximalTargetExponent; // 0x0
		::System::Int32 MinimalTargetExponent; // 0x0
		::Il2CppArray<::System::Object*>* s_CachedPowersBinaryExponent; // 0x0
		::Il2CppArray<::System::Object*>* s_CachedPowersDecimalExponent; // 0x8
		::Il2CppArray<::System::Object*>* s_CachedPowersSignificand; // 0x10
		::Il2CppArray<::System::Object*>* s_SmallPowersOfTen; // 0x18

		::System::Boolean TryRunCounted(DiyFp&* arg, ::System::Int32 arg, Il2CppObject* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(DiyFp&*, ::System::Int32, Il2CppObject*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_TRYRUNCOUNTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsNegative(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_ISNEGATIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryRoundWeedCounted(Il2CppObject* arg, ::System::Int32 arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::UInt64, ::System::UInt64, ::System::UInt64, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_TRYROUNDWEEDCOUNTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryDigitGenCounted(DiyFp&* arg, ::System::Int32 arg, Il2CppObject* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(DiyFp&*, ::System::Int32, Il2CppObject*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_TRYDIGITGENCOUNTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsNegativeInfinity(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_ISNEGATIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryRunDouble(::System::Double arg, ::System::Int32 arg, NumberBuffer&* arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::System::Int32, NumberBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_TRYRUNDOUBLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryRunShortest(DiyFp&* arg, DiyFp&* arg, DiyFp&* arg, Il2CppObject* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(DiyFp&*, DiyFp&*, DiyFp&*, Il2CppObject*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_TRYRUNSHORTEST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryDigitGenShortest(DiyFp&* arg, DiyFp&* arg, DiyFp&* arg, Il2CppObject* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(DiyFp&*, DiyFp&*, DiyFp&*, Il2CppObject*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_TRYDIGITGENSHORTEST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 BiggestPowerTen(::System::UInt32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_BIGGESTPOWERTEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryRunSingle(::System::Single arg, ::System::Int32 arg, NumberBuffer&* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Int32, NumberBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_TRYRUNSINGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryRoundWeedShortest(Il2CppObject* arg, ::System::Int32 arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_TRYROUNDWEEDSHORTEST_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRISU3_.CCTOR_OFFSET))(nullptr);
		}

		DiyFp* GetCachedPowerForBinaryExponentRange(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (DiyFp*(*)(::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + GRISU3_GETCACHEDPOWERFORBINARYEXPONENTRANGE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

