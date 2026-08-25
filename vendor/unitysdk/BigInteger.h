#pragma once
#include "unitysdk.h"

#define BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0xA4B1DA0)
#define BIGINTEGER_COMPARE_OFFSET UNITYSDK_OFFSET(0xA4B1F20)
#define BIGINTEGER_COUNTSIGNIFICANTBITS_OFFSET UNITYSDK_OFFSET(0xA4C6700)
#define BIGINTEGER_COUNTSIGNIFICANTBITS_OFFSET UNITYSDK_OFFSET(0xA4BBF40)
#define BIGINTEGER_COUNTSIGNIFICANTBITS_OFFSET UNITYSDK_OFFSET(0xA4BD000)
#define BIGINTEGER_DIVREM_OFFSET UNITYSDK_OFFSET(0xA4BD0A0)
#define BIGINTEGER_HEURISTICDIVIDE_OFFSET UNITYSDK_OFFSET(0xA4B2070)
#define BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA4B1BB0)
#define BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA4C6960)
#define BIGINTEGER_POW2_OFFSET UNITYSDK_OFFSET(0xA4B1620)
#define BIGINTEGER_POW10_OFFSET UNITYSDK_OFFSET(0xA4B1830)
#define BIGINTEGER_ADDDIVISOR_OFFSET UNITYSDK_OFFSET(0xA4C68A0)
#define BIGINTEGER_DIVIDEGUESSTOOBIG_OFFSET UNITYSDK_OFFSET(0xA4C67D0)
#define BIGINTEGER_SUBTRACTDIVISOR_OFFSET UNITYSDK_OFFSET(0xA4C6840)
#define BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0xA4BB9B0)
#define BIGINTEGER_GETBLOCK_OFFSET UNITYSDK_OFFSET(0xA4B2060)
#define BIGINTEGER_GETLENGTH_OFFSET UNITYSDK_OFFSET(0xA4C6CA0)
#define BIGINTEGER_ISONE_OFFSET UNITYSDK_OFFSET(0xA4C6C70)
#define BIGINTEGER_ISZERO_OFFSET UNITYSDK_OFFSET(0xA4B2290)
#define BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA4C6CB0)
#define BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xA4B1AB0)
#define BIGINTEGER_MULTIPLY10_OFFSET UNITYSDK_OFFSET(0xA4B1F70)
#define BIGINTEGER_MULTIPLYPOW10_OFFSET UNITYSDK_OFFSET(0xA4B1700)
#define BIGINTEGER_SETUINT32_OFFSET UNITYSDK_OFFSET(0xA4B15C0)
#define BIGINTEGER_SETUINT64_OFFSET UNITYSDK_OFFSET(0xA4B1210)
#define BIGINTEGER_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA4C6730)
#define BIGINTEGER_SETZERO_OFFSET UNITYSDK_OFFSET(0xA4BB910)
#define BIGINTEGER_SHIFTLEFT_OFFSET UNITYSDK_OFFSET(0xA4B12C0)
#define BIGINTEGER_TOUINT64_OFFSET UNITYSDK_OFFSET(0xA4BC360)
#define BIGINTEGER_GETBLOCKSPOINTER_OFFSET UNITYSDK_OFFSET(0xA4C6C80)
#define BIGINTEGER_DIVREM32_OFFSET UNITYSDK_OFFSET(0xA4C6C90)
#define BIGINTEGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4C6D00)

	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 34657;

	class BigInteger : public Il2CppObject
	{
	public:
		::System::Int32 BitsForLongestBinaryMantissa; // 0x0
		::System::Int32 BitsForLongestDigitSequence; // 0x0
		::System::Int32 MaxBits; // 0x0
		::System::Int32 BitsPerBlock; // 0x0
		::System::Int32 MaxBlockCount; // 0x0
		::Il2CppArray<::System::Object*>* s_Pow10UInt32Table; // 0x0
		::Il2CppArray<::System::Object*>* s_Pow10BigNumTableIndices; // 0x8
		::Il2CppArray<::System::Object*>* s_Pow10BigNumTable; // 0x10
		::System::Int32 _length; // 0x10
		<_blocks>e__FixedBuffer* _blocks; // 0x14

		::System::Void Add(BigInteger&* arg, BigInteger&* arg, BigInteger&* arg)
		{
			((::System::Void(*)(BigInteger&*, BigInteger&*, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Compare(BigInteger&* arg, BigInteger&* arg)
		{
			return (return (::System::Int32(*)(BigInteger&*, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 CountSignificantBits(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_COUNTSIGNIFICANTBITS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 CountSignificantBits(::System::UInt64 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_COUNTSIGNIFICANTBITS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 CountSignificantBits(BigInteger&* arg)
		{
			return (return (::System::UInt32(*)(BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_COUNTSIGNIFICANTBITS_OFFSET))(arg, nullptr);
		}

		::System::Void DivRem(BigInteger&* arg, BigInteger&* arg, BigInteger&* arg, BigInteger&* arg)
		{
			((::System::Void(*)(BigInteger&*, BigInteger&*, BigInteger&*, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_DIVREM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 HeuristicDivide(BigInteger&* arg, BigInteger&* arg)
		{
			return (return (::System::UInt32(*)(BigInteger&*, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_HEURISTICDIVIDE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Multiply(BigInteger&* arg, ::System::UInt32 arg, BigInteger&* arg)
		{
			((::System::Void(*)(BigInteger&*, ::System::UInt32, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_MULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Multiply(BigInteger&* arg, BigInteger&* arg, BigInteger&* arg)
		{
			((::System::Void(*)(BigInteger&*, BigInteger&*, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_MULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Pow2(::System::UInt32 arg, BigInteger&* arg)
		{
			((::System::Void(*)(::System::UInt32, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_POW2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Pow10(::System::UInt32 arg, BigInteger&* arg)
		{
			((::System::Void(*)(::System::UInt32, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_POW10_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 AddDivisor(BigInteger&* arg, ::System::Int32 arg, BigInteger&* arg)
		{
			return (return (::System::UInt32(*)(BigInteger&*, ::System::Int32, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_ADDDIVISOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean DivideGuessTooBig(::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_DIVIDEGUESSTOOBIG_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 SubtractDivisor(BigInteger&* arg, ::System::Int32 arg, BigInteger&* arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt32(*)(BigInteger&*, ::System::Int32, BigInteger&*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_SUBTRACTDIVISOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Add(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_ADD_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetBlock(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_GETBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_GETLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean IsOne()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_ISONE_OFFSET))(nullptr);
		}

		::System::Boolean IsZero()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_ISZERO_OFFSET))(nullptr);
		}

		::System::Void Multiply(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_MULTIPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Multiply(BigInteger&* arg)
		{
			((::System::Void(*)(BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_MULTIPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Multiply10()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_MULTIPLY10_OFFSET))(nullptr);
		}

		::System::Void MultiplyPow10(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_MULTIPLYPOW10_OFFSET))(arg, nullptr);
		}

		::System::Void SetUInt32(BigInteger&* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(BigInteger&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_SETUINT32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetUInt64(BigInteger&* arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(BigInteger&*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_SETUINT64_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValue(BigInteger&* arg, BigInteger&* arg)
		{
			((::System::Void(*)(BigInteger&*, BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetZero(BigInteger&* arg)
		{
			((::System::Void(*)(BigInteger&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_SETZERO_OFFSET))(arg, nullptr);
		}

		::System::Void ShiftLeft(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_SHIFTLEFT_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ToUInt64()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_TOUINT64_OFFSET))(nullptr);
		}

		::System::Object** GetBlocksPointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_GETBLOCKSPOINTER_OFFSET))(nullptr);
		}

		::System::UInt32 DivRem32(::System::UInt32 arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_DIVREM32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGER_.CCTOR_OFFSET))(nullptr);
		}

	};

