#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }

#define MX_CORE_FIXEDMATH_FIX64_SIGN_OFFSET UNITYSDK_OFFSET(0x1040D90)
#define MX_CORE_FIXEDMATH_FIX64_ABS_OFFSET UNITYSDK_OFFSET(0x1040DB0)
#define MX_CORE_FIXEDMATH_FIX64_FASTABS_OFFSET UNITYSDK_OFFSET(0x1040E20)
#define MX_CORE_FIXEDMATH_FIX64_FLOOR_OFFSET UNITYSDK_OFFSET(0x1040E30)
#define MX_CORE_FIXEDMATH_FIX64_CEILING_OFFSET UNITYSDK_OFFSET(0x1040E40)
#define MX_CORE_FIXEDMATH_FIX64_ROUND_OFFSET UNITYSDK_OFFSET(0x1041000)
#define MX_CORE_FIXEDMATH_FIX64_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1040EC0)
#define MX_CORE_FIXEDMATH_FIX64_OVERFLOWADD_OFFSET UNITYSDK_OFFSET(0x10410E0)
#define MX_CORE_FIXEDMATH_FIX64_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1041120)
#define MX_CORE_FIXEDMATH_FIX64_OP_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1041260)
#define MX_CORE_FIXEDMATH_FIX64_OVERFLOWSUB_OFFSET UNITYSDK_OFFSET(0x1041330)
#define MX_CORE_FIXEDMATH_FIX64_FASTSUB_OFFSET UNITYSDK_OFFSET(0x1041370)
#define MX_CORE_FIXEDMATH_FIX64_ADDOVERFLOWHELPER_OFFSET UNITYSDK_OFFSET(0x1041380)
#define MX_CORE_FIXEDMATH_FIX64_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x10413A0)
#define MX_CORE_FIXEDMATH_FIX64_OVERFLOWMUL_OFFSET UNITYSDK_OFFSET(0x1041570)
#define MX_CORE_FIXEDMATH_FIX64_FASTMUL_OFFSET UNITYSDK_OFFSET(0x1041750)
#define MX_CORE_FIXEDMATH_FIX64_COUNTLEADINGZEROES_OFFSET UNITYSDK_OFFSET(0x1041780)
#define MX_CORE_FIXEDMATH_FIX64_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x10417D0)
#define MX_CORE_FIXEDMATH_FIX64_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1041BD0)
#define MX_CORE_FIXEDMATH_FIX64_FASTMOD_OFFSET UNITYSDK_OFFSET(0x1041D10)
#define MX_CORE_FIXEDMATH_FIX64_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1041D30)
#define MX_CORE_FIXEDMATH_FIX64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1041D90)
#define MX_CORE_FIXEDMATH_FIX64_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1041DA0)
#define MX_CORE_FIXEDMATH_FIX64_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1041DB0)
#define MX_CORE_FIXEDMATH_FIX64_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1041DC0)
#define MX_CORE_FIXEDMATH_FIX64_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1041DD0)
#define MX_CORE_FIXEDMATH_FIX64_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1041DE0)
#define MX_CORE_FIXEDMATH_FIX64_SQRT_OFFSET UNITYSDK_OFFSET(0x1041DF0)
#define MX_CORE_FIXEDMATH_FIX64_SIN_OFFSET UNITYSDK_OFFSET(0x10420D0)
#define MX_CORE_FIXEDMATH_FIX64_FASTSIN_OFFSET UNITYSDK_OFFSET(0x1042500)
#define MX_CORE_FIXEDMATH_FIX64_CLAMPSINVALUE_OFFSET UNITYSDK_OFFSET(0x1042430)
#define MX_CORE_FIXEDMATH_FIX64_COS_OFFSET UNITYSDK_OFFSET(0x10426B0)
#define MX_CORE_FIXEDMATH_FIX64_FASTCOS_OFFSET UNITYSDK_OFFSET(0x1042720)
#define MX_CORE_FIXEDMATH_FIX64_TAN_OFFSET UNITYSDK_OFFSET(0x1042790)
#define MX_CORE_FIXEDMATH_FIX64_ATAN_OFFSET UNITYSDK_OFFSET(0x10429C0)
#define MX_CORE_FIXEDMATH_FIX64_ATAN2_OFFSET UNITYSDK_OFFSET(0x1042DA0)
#define MX_CORE_FIXEDMATH_FIX64_ASIN_OFFSET UNITYSDK_OFFSET(0x10431D0)
#define MX_CORE_FIXEDMATH_FIX64_ACOS_OFFSET UNITYSDK_OFFSET(0x1043240)
#define MX_CORE_FIXEDMATH_FIX64_POW2_OFFSET UNITYSDK_OFFSET(0x10434A0)
#define MX_CORE_FIXEDMATH_FIX64_LOG2_OFFSET UNITYSDK_OFFSET(0x10438F0)
#define MX_CORE_FIXEDMATH_FIX64_LOGN_OFFSET UNITYSDK_OFFSET(0x1043AC0)
#define MX_CORE_FIXEDMATH_FIX64_POW_OFFSET UNITYSDK_OFFSET(0x1043B40)
#define MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1041BC0)
#define MX_CORE_FIXEDMATH_FIX64_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x10424E0)
#define MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1043D00)
#define MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1043D20)
#define MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1043D30)
#define MX_CORE_FIXEDMATH_FIX64_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1043D40)
#define MX_CORE_FIXEDMATH_FIX64_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1043D50)
#define MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x10424F0)
#define MX_CORE_FIXEDMATH_FIX64_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1043E00)
#define MX_CORE_FIXEDMATH_FIX64_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x1043EA0)
#define MX_CORE_FIXEDMATH_FIX64_ASINT_OFFSET UNITYSDK_OFFSET(0x1043EF0)
#define MX_CORE_FIXEDMATH_FIX64_ASLONG_OFFSET UNITYSDK_OFFSET(0x1043F40)
#define MX_CORE_FIXEDMATH_FIX64_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1043F90)
#define MX_CORE_FIXEDMATH_FIX64_ASDECIMAL_OFFSET UNITYSDK_OFFSET(0x1043FE0)
#define MX_CORE_FIXEDMATH_FIX64_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x1044100)
#define MX_CORE_FIXEDMATH_FIX64_TOINT_OFFSET UNITYSDK_OFFSET(0x1044150)
#define MX_CORE_FIXEDMATH_FIX64_FROMFLOAT_OFFSET UNITYSDK_OFFSET(0x10441A0)
#define MX_CORE_FIXEDMATH_FIX64_ISINFINITY_OFFSET UNITYSDK_OFFSET(0x1041BA0)
#define MX_CORE_FIXEDMATH_FIX64_ISNAN_OFFSET UNITYSDK_OFFSET(0x1044200)
#define MX_CORE_FIXEDMATH_FIX64_ISPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x10410A0)
#define MX_CORE_FIXEDMATH_FIX64_ISNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x10410C0)
#define MX_CORE_FIXEDMATH_FIX64_EQUALS_OFFSET UNITYSDK_OFFSET(0x1044210)
#define MX_CORE_FIXEDMATH_FIX64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1044280)
#define MX_CORE_FIXEDMATH_FIX64_EQUALS_OFFSET UNITYSDK_OFFSET(0x1044290)
#define MX_CORE_FIXEDMATH_FIX64_COMPARETO_OFFSET UNITYSDK_OFFSET(0x10442A0)
#define MX_CORE_FIXEDMATH_FIX64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10442B0)
#define MX_CORE_FIXEDMATH_FIX64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1044320)
#define MX_CORE_FIXEDMATH_FIX64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1044390)
#define MX_CORE_FIXEDMATH_FIX64_FROMRAW_OFFSET UNITYSDK_OFFSET(0x10438E0)
#define MX_CORE_FIXEDMATH_FIX64_GENERATEACOSLUT_OFFSET UNITYSDK_OFFSET(0x1044400)
#define MX_CORE_FIXEDMATH_FIX64_GENERATESINLUT_OFFSET UNITYSDK_OFFSET(0x10447F0)
#define MX_CORE_FIXEDMATH_FIX64_GENERATETANLUT_OFFSET UNITYSDK_OFFSET(0x1044C30)
#define MX_CORE_FIXEDMATH_FIX64_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x1045340)
#define MX_CORE_FIXEDMATH_FIX64_.CTOR_OFFSET UNITYSDK_OFFSET(0x1045350)
#define MX_CORE_FIXEDMATH_FIX64_.CTOR_OFFSET UNITYSDK_OFFSET(0x1045360)
#define MX_CORE_FIXEDMATH_FIX64_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1045370)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int Fix64_TypeDefinitionIndex = 12862;

	class Fix64 : public Il2CppObject
	{
	public:
		::System::Int64 _serializedValue; // 0x10
		::System::Int64 MAX_VALUE; // 0x0
		::System::Int64 MIN_VALUE; // 0x0
		::System::Int32 NUM_BITS; // 0x0
		::System::Int32 FRACTIONAL_PLACES; // 0x0
		::System::Int64 ONE; // 0x0
		::System::Int64 TEN; // 0x0
		::System::Int64 HALF; // 0x0
		::System::Int64 PI_TIMES_2; // 0x0
		::System::Int64 PI; // 0x0
		::System::Int64 PI_OVER_2; // 0x0
		::System::Int64 LN2; // 0x0
		::System::Int64 LOG2MAX; // 0x0
		::System::Int64 LOG2MIN; // 0x0
		::System::Int32 LUT_SIZE; // 0x0
		::System::Decimal* Precision; // 0x0
		::MX::Core::FixedMath::Fix64* MaxValue; // 0x10
		::MX::Core::FixedMath::Fix64* MinValue; // 0x18
		::MX::Core::FixedMath::Fix64* One; // 0x20
		::MX::Core::FixedMath::Fix64* Ten; // 0x28
		::MX::Core::FixedMath::Fix64* Half; // 0x30
		::MX::Core::FixedMath::Fix64* Zero; // 0x38
		::MX::Core::FixedMath::Fix64* PositiveInfinity; // 0x40
		::MX::Core::FixedMath::Fix64* NegativeInfinity; // 0x48
		::MX::Core::FixedMath::Fix64* NaN; // 0x50
		::MX::Core::FixedMath::Fix64* EN1; // 0x58
		::MX::Core::FixedMath::Fix64* EN2; // 0x60
		::MX::Core::FixedMath::Fix64* EN3; // 0x68
		::MX::Core::FixedMath::Fix64* EN4; // 0x70
		::MX::Core::FixedMath::Fix64* EN5; // 0x78
		::MX::Core::FixedMath::Fix64* EN6; // 0x80
		::MX::Core::FixedMath::Fix64* EN7; // 0x88
		::MX::Core::FixedMath::Fix64* EN8; // 0x90
		::MX::Core::FixedMath::Fix64* Epsilon; // 0x98
		::MX::Core::FixedMath::Fix64* Pi; // 0xA0
		::MX::Core::FixedMath::Fix64* PiOver2; // 0xA8
		::MX::Core::FixedMath::Fix64* PiTimes2; // 0xB0
		::MX::Core::FixedMath::Fix64* PiInv; // 0xB8
		::MX::Core::FixedMath::Fix64* PiOver2Inv; // 0xC0
		::MX::Core::FixedMath::Fix64* Deg2Rad; // 0xC8
		::MX::Core::FixedMath::Fix64* Rad2Deg; // 0xD0
		::MX::Core::FixedMath::Fix64* LutInterval; // 0xD8
		::MX::Core::FixedMath::Fix64* Log2Max; // 0xE0
		::MX::Core::FixedMath::Fix64* Log2Min; // 0xE8
		::MX::Core::FixedMath::Fix64* Ln2; // 0xF0
		::Il2CppArray<::System::Object*>* AcosLut; // 0xF8
		::Il2CppArray<::System::Object*>* SinLut; // 0x100
		::Il2CppArray<::System::Object*>* TanLut; // 0x108

		::System::Int32 Sign(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int32(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_SIGN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Abs(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ABS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* FastAbs(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FASTABS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Floor(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FLOOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Ceiling(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_CEILING_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Round(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ROUND_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Addition(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* OverflowAdd(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OVERFLOWADD_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Subtraction(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Decrement(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_DECREMENT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* OverflowSub(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OVERFLOWSUB_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* FastSub(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FASTSUB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 AddOverflowHelper(::System::Int64 arg, ::System::Int64 arg2, bool&* arg3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ADDOVERFLOWHELPER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Multiply(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* OverflowMul(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OVERFLOWMUL_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* FastMul(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FASTMUL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 CountLeadingZeroes(::System::UInt64 arg)
		{
			return ((::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_COUNTLEADINGZEROES_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Division(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_DIVISION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Modulus(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_MODULUS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* FastMod(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FASTMOD_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_UnaryNegation(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThan(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_GREATERTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThan(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_LESSTHAN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_LESSTHANOREQUAL_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Sqrt(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_SQRT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Sin(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_SIN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* FastSin(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FASTSIN_OFFSET))(arg, nullptr);
		}

		::System::Int64 ClampSinValue(::System::Int64 arg, bool&* arg2, bool&* arg3)
		{
			return ((::System::Int64(*)(::System::Int64, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_CLAMPSINVALUE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Cos(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_COS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* FastCos(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FASTCOS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Tan(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_TAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Atan(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ATAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Atan2(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ATAN2_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Asin(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ASIN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Acos(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ACOS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Pow2(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_POW2_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Log2(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_LOG2_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* LogN(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_LOGN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Pow(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_POW_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Implicit(::System::Int64 arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 op_Explicit(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int64(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Implicit(::System::Single arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Single op_Implicit(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Single(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Implicit(::System::Double arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Double op_Explicit(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Double(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Explicit(::System::Decimal* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* op_Implicit(::System::Int32 arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Decimal* op_Explicit(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Decimal*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Single AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ASFLOAT_OFFSET))(nullptr);
		}

		::System::Int32 AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ASINT_OFFSET))(nullptr);
		}

		::System::Int64 AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ASLONG_OFFSET))(nullptr);
		}

		::System::Double AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ASDOUBLE_OFFSET))(nullptr);
		}

		::System::Decimal* AsDecimal()
		{
			return ((::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ASDECIMAL_OFFSET))(nullptr);
		}

		::System::Single ToFloat(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Single(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_TOFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int32(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_TOINT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* FromFloat(::System::Single arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FROMFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInfinity(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ISINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNaN(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ISNAN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPositiveInfinity(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ISPOSITIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegativeInfinity(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_ISNEGATIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int32(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return ((::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_TOSTRING_OFFSET))(str, nullptr);
		}

		::MX::Core::FixedMath::Fix64* FromRaw(::System::Int64 arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_FROMRAW_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateAcosLut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_GENERATEACOSLUT_OFFSET))(nullptr);
		}

		::System::Void GenerateSinLut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_GENERATESINLUT_OFFSET))(nullptr);
		}

		::System::Void GenerateTanLut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_GENERATETANLUT_OFFSET))(nullptr);
		}

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_GET_RAWVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_FIX64_.CCTOR_OFFSET))(nullptr);
		}

	};
}

