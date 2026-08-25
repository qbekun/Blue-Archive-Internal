#pragma once
#include "../unitysdk.h"

#define SYSTEM_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x935B250)
#define SYSTEM_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x935B350)
#define SYSTEM_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x935B3F0)
#define SYSTEM_MATH_THROWABSOVERFLOW_OFFSET UNITYSDK_OFFSET(0x935B2F0)
#define SYSTEM_MATH_DIVREM_OFFSET UNITYSDK_OFFSET(0x935B450)
#define SYSTEM_MATH_DIVREM_OFFSET UNITYSDK_OFFSET(0x935B460)
#define SYSTEM_MATH_DIVREM_OFFSET UNITYSDK_OFFSET(0x935B490)
#define SYSTEM_MATH_CLAMP_OFFSET UNITYSDK_OFFSET(0x935B4A0)
#define SYSTEM_MATH_CLAMP_OFFSET UNITYSDK_OFFSET(0x935B520)
#define SYSTEM_MATH_IEEEREMAINDER_OFFSET UNITYSDK_OFFSET(0x935B5A0)
#define SYSTEM_MATH_LOG_OFFSET UNITYSDK_OFFSET(0x935BA30)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BBC0)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BBD0)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BC50)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BCE0)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BCF0)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BD00)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BD10)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BD30)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BDD0)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BDE0)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x935BDF0)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BE00)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BE10)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BE70)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BF00)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BF10)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BF20)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BF30)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BF50)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935BFF0)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935C000)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x935C010)
#define SYSTEM_MATH_ROUND_OFFSET UNITYSDK_OFFSET(0x935C020)
#define SYSTEM_MATH_ROUND_OFFSET UNITYSDK_OFFSET(0x935C090)
#define SYSTEM_MATH_ROUND_OFFSET UNITYSDK_OFFSET(0x935C170)
#define SYSTEM_MATH_ROUND_OFFSET UNITYSDK_OFFSET(0x935C510)
#define SYSTEM_MATH_ROUND_OFFSET UNITYSDK_OFFSET(0x935C1D0)
#define SYSTEM_MATH_SIGN_OFFSET UNITYSDK_OFFSET(0x935B9B0)
#define SYSTEM_MATH_SIGN_OFFSET UNITYSDK_OFFSET(0x935C580)
#define SYSTEM_MATH_SIGN_OFFSET UNITYSDK_OFFSET(0x935C5A0)
#define SYSTEM_MATH_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x935C620)
#define SYSTEM_MATH_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x935C690)
#define SYSTEM_MATH_THROWMINMAXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x935C6F0)
#define SYSTEM_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x935C700)
#define SYSTEM_MATH_ACOS_OFFSET UNITYSDK_OFFSET(0x935C710)
#define SYSTEM_MATH_ASIN_OFFSET UNITYSDK_OFFSET(0x935C720)
#define SYSTEM_MATH_ATAN_OFFSET UNITYSDK_OFFSET(0x935C730)
#define SYSTEM_MATH_ATAN2_OFFSET UNITYSDK_OFFSET(0x935C740)
#define SYSTEM_MATH_CEILING_OFFSET UNITYSDK_OFFSET(0x935C750)
#define SYSTEM_MATH_COS_OFFSET UNITYSDK_OFFSET(0x935C760)
#define SYSTEM_MATH_EXP_OFFSET UNITYSDK_OFFSET(0x935C770)
#define SYSTEM_MATH_FLOOR_OFFSET UNITYSDK_OFFSET(0x935C780)
#define SYSTEM_MATH_LOG_OFFSET UNITYSDK_OFFSET(0x935C790)
#define SYSTEM_MATH_LOG10_OFFSET UNITYSDK_OFFSET(0x935C7A0)
#define SYSTEM_MATH_POW_OFFSET UNITYSDK_OFFSET(0x935C7B0)
#define SYSTEM_MATH_SIN_OFFSET UNITYSDK_OFFSET(0x935C7C0)
#define SYSTEM_MATH_SQRT_OFFSET UNITYSDK_OFFSET(0x935C7D0)
#define SYSTEM_MATH_TAN_OFFSET UNITYSDK_OFFSET(0x935C7F0)
#define SYSTEM_MATH_MODF_OFFSET UNITYSDK_OFFSET(0x935C570)
#define SYSTEM_MATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x935C800)

namespace System
{
	inline static constexpr unsigned int Math_TypeDefinitionIndex = 23793;

	class Math : public Il2CppObject
	{
	public:
		::System::Double doubleRoundLimit; // 0x0
		::Il2CppArray<::System::Object*>* roundPower10Double; // 0x8

		::System::Int32 Abs(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_OFFSET))(arg, nullptr);
		}

		::System::Int64 Abs(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_OFFSET))(arg, nullptr);
		}

		::System::Decimal* Abs(::System::Decimal* arg)
		{
			return (return (::System::Decimal*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowAbsOverflow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_THROWABSOVERFLOW_OFFSET))(nullptr);
		}

		::System::Int32 DivRem(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_DIVREM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 DivRem(::System::Int64 arg, ::System::Int64 arg, int64_t&* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_DIVREM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 DivRem(::System::UInt32 arg, ::System::UInt32 arg, uint32_t&* arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_DIVREM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Clamp(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Clamp(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double IEEERemainder(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_IEEEREMAINDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Log(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte Max(::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Decimal* Max(::System::Decimal* arg, ::System::Decimal* arg)
		{
			return (return (::System::Decimal*(*)(::System::Decimal*, ::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Max(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int16 Max(::System::Int16 arg, ::System::Int16 arg)
		{
			return (return (::System::Int16(*)(::System::Int16, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Max(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 Max(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::SByte Max(::System::SByte arg, ::System::SByte arg)
		{
			return (return (::System::SByte(*)(::System::SByte, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Max(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt16 Max(::System::UInt16 arg, ::System::UInt16 arg)
		{
			return (return (::System::UInt16(*)(::System::UInt16, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Max(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Max(::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Byte Min(::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Decimal* Min(::System::Decimal* arg, ::System::Decimal* arg)
		{
			return (return (::System::Decimal*(*)(::System::Decimal*, ::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Min(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int16 Min(::System::Int16 arg, ::System::Int16 arg)
		{
			return (return (::System::Int16(*)(::System::Int16, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Min(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 Min(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::SByte Min(::System::SByte arg, ::System::SByte arg)
		{
			return (return (::System::SByte(*)(::System::SByte, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Min(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt16 Min(::System::UInt16 arg, ::System::UInt16 arg)
		{
			return (return (::System::UInt16(*)(::System::UInt16, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Min(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 Min(::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Decimal* Round(::System::Decimal* arg)
		{
			return (return (::System::Decimal*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Double Round(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Double Round(::System::Double arg, ::System::Int32 arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Round(::System::Double arg, ::System::MidpointRounding* arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::MidpointRounding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Round(::System::Double arg, ::System::Int32 arg, ::System::MidpointRounding* arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Int32, ::System::MidpointRounding*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Sign(::System::Double arg)
		{
			return (return (::System::Int32(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_OFFSET))(arg, nullptr);
		}

		::System::Int32 Sign(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_OFFSET))(arg, nullptr);
		}

		::System::Int32 Sign(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_OFFSET))(arg, nullptr);
		}

		::System::Decimal* Truncate(::System::Decimal* arg)
		{
			return (return (::System::Decimal*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TRUNCATE_OFFSET))(arg, nullptr);
		}

		::System::Double Truncate(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TRUNCATE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowMinMaxException(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_THROWMINMAXEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Abs(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_OFFSET))(arg, nullptr);
		}

		::System::Single Abs(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_OFFSET))(arg, nullptr);
		}

		::System::Double Acos(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ACOS_OFFSET))(arg, nullptr);
		}

		::System::Double Asin(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ASIN_OFFSET))(arg, nullptr);
		}

		::System::Double Atan(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ATAN_OFFSET))(arg, nullptr);
		}

		::System::Double Atan2(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ATAN2_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Ceiling(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_CEILING_OFFSET))(arg, nullptr);
		}

		::System::Double Cos(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_COS_OFFSET))(arg, nullptr);
		}

		::System::Double Exp(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_EXP_OFFSET))(arg, nullptr);
		}

		::System::Double Floor(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_FLOOR_OFFSET))(arg, nullptr);
		}

		::System::Double Log(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG_OFFSET))(arg, nullptr);
		}

		::System::Double Log10(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG10_OFFSET))(arg, nullptr);
		}

		::System::Double Pow(::System::Double arg, ::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_POW_OFFSET))(arg, arg, nullptr);
		}

		::System::Double Sin(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIN_OFFSET))(arg, nullptr);
		}

		::System::Double Sqrt(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SQRT_OFFSET))(arg, nullptr);
		}

		::System::Double Tan(::System::Double arg)
		{
			return (return (::System::Double(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TAN_OFFSET))(arg, nullptr);
		}

		::System::Double ModF(::System::Double arg, ::System::Object** arg)
		{
			return (return (::System::Double(*)(::System::Double, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MODF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

