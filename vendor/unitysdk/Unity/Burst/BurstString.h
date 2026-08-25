#pragma once
#include "../../unitysdk.h"

#define UNITY_BURST_BURSTSTRING_COPYFIXEDSTRING_OFFSET UNITYSDK_OFFSET(0x9E2FA60)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E2FA90)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E2FD00)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E30080)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E30400)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E305E0)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E30840)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E309A0)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E30A90)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E30930)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E30D20)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E31000)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E310C0)
#define UNITY_BURST_BURSTSTRING_FORMAT_OFFSET UNITYSDK_OFFSET(0x9E31180)
#define UNITY_BURST_BURSTSTRING_CONVERTUNSIGNEDINTEGERTOSTRING_OFFSET UNITYSDK_OFFSET(0x9E30B10)
#define UNITY_BURST_BURSTSTRING_GETLENGTHINTEGERTOSTRING_OFFSET UNITYSDK_OFFSET(0x9E316B0)
#define UNITY_BURST_BURSTSTRING_CONVERTINTEGERTOSTRING_OFFSET UNITYSDK_OFFSET(0x9E30DE0)
#define UNITY_BURST_BURSTSTRING_FORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x9E312C0)
#define UNITY_BURST_BURSTSTRING_FORMATDECIMALORHEXADECIMAL_OFFSET UNITYSDK_OFFSET(0x9E31700)
#define UNITY_BURST_BURSTSTRING_VALUETOINTEGERCHAR_OFFSET UNITYSDK_OFFSET(0x9E31260)
#define UNITY_BURST_BURSTSTRING_ALIGNRIGHT_OFFSET UNITYSDK_OFFSET(0x9E2FC50)
#define UNITY_BURST_BURSTSTRING_ALIGNLEFT_OFFSET UNITYSDK_OFFSET(0x9E2FC10)
#define UNITY_BURST_BURSTSTRING_GETLENGTHFORFORMATGENERAL_OFFSET UNITYSDK_OFFSET(0x9E318D0)
#define UNITY_BURST_BURSTSTRING_FORMATGENERAL_OFFSET UNITYSDK_OFFSET(0x9E31A80)
#define UNITY_BURST_BURSTSTRING_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x9E31790)
#define UNITY_BURST_BURSTSTRING_SHOULDROUNDUP_OFFSET UNITYSDK_OFFSET(0x9E31C60)
#define UNITY_BURST_BURSTSTRING_LOGBASE2_OFFSET UNITYSDK_OFFSET(0x9E31C90)
#define UNITY_BURST_BURSTSTRING_BIGINT_COMPARE_OFFSET UNITYSDK_OFFSET(0x9E31DD0)
#define UNITY_BURST_BURSTSTRING_BIGINT_ADD_OFFSET UNITYSDK_OFFSET(0x9E31E30)
#define UNITY_BURST_BURSTSTRING_BIGINT_ADD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9E320D0)
#define UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9E32200)
#define UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9E324B0)
#define UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x9E325D0)
#define UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY2_OFFSET UNITYSDK_OFFSET(0x9E32690)
#define UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY2_OFFSET UNITYSDK_OFFSET(0x9E32730)
#define UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY10_OFFSET UNITYSDK_OFFSET(0x9E32800)
#define UNITY_BURST_BURSTSTRING_G_POWEROF10_BIG_OFFSET UNITYSDK_OFFSET(0x9E328F0)
#define UNITY_BURST_BURSTSTRING_BIGINT_POW10_OFFSET UNITYSDK_OFFSET(0x9E32A80)
#define UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLYPOW10_OFFSET UNITYSDK_OFFSET(0x9E32CC0)
#define UNITY_BURST_BURSTSTRING_BIGINT_POW2_OFFSET UNITYSDK_OFFSET(0x9E32FB0)
#define UNITY_BURST_BURSTSTRING_BIGINT_DIVIDEWITHREMAINDER_MAXQUOTIENT9_OFFSET UNITYSDK_OFFSET(0x9E33050)
#define UNITY_BURST_BURSTSTRING_BIGINT_SHIFTLEFT_OFFSET UNITYSDK_OFFSET(0x9E33210)
#define UNITY_BURST_BURSTSTRING_DRAGON4_OFFSET UNITYSDK_OFFSET(0x9E333E0)
#define UNITY_BURST_BURSTSTRING_FORMATINFINITYNAN_OFFSET UNITYSDK_OFFSET(0x9E34AC0)
#define UNITY_BURST_BURSTSTRING_CONVERTFLOATTOSTRING_OFFSET UNITYSDK_OFFSET(0x9E2FD80)
#define UNITY_BURST_BURSTSTRING_CONVERTDOUBLETOSTRING_OFFSET UNITYSDK_OFFSET(0x9E30100)
#define UNITY_BURST_BURSTSTRING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E35050)

namespace Unity::Burst
{
	inline static constexpr unsigned int BurstString_TypeDefinitionIndex = 37254;

	class BurstString : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SplitByColon; // 0x0
		::Il2CppArray<::System::Object*>* logTable; // 0x8
		::Il2CppArray<::System::Object*>* g_PowerOf10_U32; // 0x10
		::Il2CppArray<::System::Object*>* InfinityString; // 0x18
		::Il2CppArray<::System::Object*>* NanString; // 0x20

		::System::Void CopyFixedString(::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_COPYFIXEDSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Object**, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Double arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Double, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Char arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Byte arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::UInt16 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::UInt16, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::UInt64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::UInt64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::SByte arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::SByte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Int16 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Int16, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Format(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ConvertUnsignedIntegerToString(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::UInt64 arg, FormatOptions* arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::UInt64, FormatOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_CONVERTUNSIGNEDINTEGERTOSTRING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetLengthIntegerToString(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_GETLENGTHINTEGERTOSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConvertIntegerToString(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Int64 arg, FormatOptions* arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Int64, FormatOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_CONVERTINTEGERTOSTRING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatNumber(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, NumberBuffer&* arg, ::System::Int32 arg, FormatOptions* arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, NumberBuffer&*, ::System::Int32, FormatOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMATNUMBER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatDecimalOrHexadecimal(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, NumberBuffer&* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, NumberBuffer&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMATDECIMALORHEXADECIMAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Byte ValueToIntegerChar(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Byte(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_VALUETOINTEGERCHAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AlignRight(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_ALIGNRIGHT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AlignLeft(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_ALIGNLEFT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetLengthForFormatGeneral(NumberBuffer&* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(NumberBuffer&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_GETLENGTHFORFORMATGENERAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FormatGeneral(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, NumberBuffer&* arg, ::System::Int32 arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, NumberBuffer&*, ::System::Int32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMATGENERAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RoundNumber(NumberBuffer&* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(NumberBuffer&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_ROUNDNUMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldRoundUp(::System::Object** arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object**, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_SHOULDROUNDUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 LogBase2(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_LOGBASE2_OFFSET))(arg, nullptr);
		}

		::System::Int32 BigInt_Compare(tBigInt&* arg, tBigInt&* arg)
		{
			return (return (::System::Int32(*)(tBigInt&*, tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BigInt_Add(tBigInt&* arg, tBigInt&* arg, tBigInt&* arg)
		{
			((::System::Void(*)(tBigInt&*, tBigInt&*, tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BigInt_Add_internal(tBigInt&* arg, tBigInt&* arg, tBigInt&* arg)
		{
			((::System::Void(*)(tBigInt&*, tBigInt&*, tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_ADD_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BigInt_Multiply(tBigInt&* arg, tBigInt&* arg, tBigInt&* arg)
		{
			((::System::Void(*)(tBigInt&*, tBigInt&*, tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BigInt_Multiply_internal(tBigInt&* arg, tBigInt&* arg, tBigInt&* arg)
		{
			((::System::Void(*)(tBigInt&*, tBigInt&*, tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BigInt_Multiply(tBigInt&* arg, tBigInt&* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(tBigInt&*, tBigInt&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BigInt_Multiply2(tBigInt&* arg, tBigInt&* arg)
		{
			((::System::Void(*)(tBigInt&*, tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BigInt_Multiply2(tBigInt&* arg)
		{
			((::System::Void(*)(tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY2_OFFSET))(arg, nullptr);
		}

		::System::Void BigInt_Multiply10(tBigInt&* arg)
		{
			((::System::Void(*)(tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLY10_OFFSET))(arg, nullptr);
		}

		tBigInt* g_PowerOf10_Big(::System::Int32 arg)
		{
			return (return (tBigInt*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_G_POWEROF10_BIG_OFFSET))(arg, nullptr);
		}

		::System::Void BigInt_Pow10(tBigInt&* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(tBigInt&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_POW10_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BigInt_MultiplyPow10(tBigInt&* arg, tBigInt&* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(tBigInt&*, tBigInt&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_MULTIPLYPOW10_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BigInt_Pow2(tBigInt&* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(tBigInt&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_POW2_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 BigInt_DivideWithRemainder_MaxQuotient9(tBigInt&* arg, tBigInt&* arg)
		{
			return (return (::System::UInt32(*)(tBigInt&*, tBigInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_DIVIDEWITHREMAINDER_MAXQUOTIENT9_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BigInt_ShiftLeft(tBigInt&* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(tBigInt&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_BIGINT_SHIFTLEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Dragon4(::System::UInt64 arg, ::System::Int32 arg, ::System::UInt32 arg, ::System::Boolean arg, CutoffMode* arg, ::System::UInt32 arg, ::System::Object** arg, ::System::UInt32 arg, int32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt64, ::System::Int32, ::System::UInt32, ::System::Boolean, CutoffMode*, ::System::UInt32, ::System::Object**, ::System::UInt32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_DRAGON4_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FormatInfinityNaN(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::UInt64 arg, ::System::Boolean arg, FormatOptions* arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::UInt64, ::System::Boolean, FormatOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_FORMATINFINITYNAN_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ConvertFloatToString(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Single arg, FormatOptions* arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Single, FormatOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_CONVERTFLOATTOSTRING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ConvertDoubleToString(::System::Object** arg, int32_t&* arg, ::System::Int32 arg, ::System::Double arg, FormatOptions* arg)
		{
			((::System::Void(*)(::System::Object**, int32_t&*, ::System::Int32, ::System::Double, FormatOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_CONVERTDOUBLETOSTRING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTSTRING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

