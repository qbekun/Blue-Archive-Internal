#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::FixedMath { class Fix64; }

#define MX_CORE_FIXEDMATH_TSMATH_SQRT_OFFSET UNITYSDK_OFFSET(0x1050490)
#define MX_CORE_FIXEDMATH_TSMATH_MAX_OFFSET UNITYSDK_OFFSET(0x10504E0)
#define MX_CORE_FIXEDMATH_TSMATH_MIN_OFFSET UNITYSDK_OFFSET(0x1050540)
#define MX_CORE_FIXEDMATH_TSMATH_MAX_OFFSET UNITYSDK_OFFSET(0x10505A0)
#define MX_CORE_FIXEDMATH_TSMATH_CLAMP_OFFSET UNITYSDK_OFFSET(0x1050630)
#define MX_CORE_FIXEDMATH_TSMATH_CLAMP01_OFFSET UNITYSDK_OFFSET(0x10506C0)
#define MX_CORE_FIXEDMATH_TSMATH_ABSOLUTE_OFFSET UNITYSDK_OFFSET(0x10507B0)
#define MX_CORE_FIXEDMATH_TSMATH_SIN_OFFSET UNITYSDK_OFFSET(0x1050880)
#define MX_CORE_FIXEDMATH_TSMATH_COS_OFFSET UNITYSDK_OFFSET(0x10508D0)
#define MX_CORE_FIXEDMATH_TSMATH_TAN_OFFSET UNITYSDK_OFFSET(0x1050920)
#define MX_CORE_FIXEDMATH_TSMATH_ASIN_OFFSET UNITYSDK_OFFSET(0x1050970)
#define MX_CORE_FIXEDMATH_TSMATH_ACOS_OFFSET UNITYSDK_OFFSET(0x10509C0)
#define MX_CORE_FIXEDMATH_TSMATH_ATAN_OFFSET UNITYSDK_OFFSET(0x1050A10)
#define MX_CORE_FIXEDMATH_TSMATH_ATAN2_OFFSET UNITYSDK_OFFSET(0x1050A60)
#define MX_CORE_FIXEDMATH_TSMATH_FLOOR_OFFSET UNITYSDK_OFFSET(0x1050AC0)
#define MX_CORE_FIXEDMATH_TSMATH_CEILING_OFFSET UNITYSDK_OFFSET(0x1050B10)
#define MX_CORE_FIXEDMATH_TSMATH_ROUND_OFFSET UNITYSDK_OFFSET(0x1050B20)
#define MX_CORE_FIXEDMATH_TSMATH_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x1050B70)
#define MX_CORE_FIXEDMATH_TSMATH_SIGN_OFFSET UNITYSDK_OFFSET(0x1050BD0)
#define MX_CORE_FIXEDMATH_TSMATH_ABS_OFFSET UNITYSDK_OFFSET(0x1050C20)
#define MX_CORE_FIXEDMATH_TSMATH_BARYCENTRIC_OFFSET UNITYSDK_OFFSET(0x1050C70)
#define MX_CORE_FIXEDMATH_TSMATH_CATMULLROM_OFFSET UNITYSDK_OFFSET(0x1050D20)
#define MX_CORE_FIXEDMATH_TSMATH_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1050F50)
#define MX_CORE_FIXEDMATH_TSMATH_HERMITE_OFFSET UNITYSDK_OFFSET(0x1050FB0)
#define MX_CORE_FIXEDMATH_TSMATH_LERP_OFFSET UNITYSDK_OFFSET(0x1051220)
#define MX_CORE_FIXEDMATH_TSMATH_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x10512C0)
#define MX_CORE_FIXEDMATH_TSMATH_SMOOTHSTEP_OFFSET UNITYSDK_OFFSET(0x10513B0)
#define MX_CORE_FIXEDMATH_TSMATH_POW2_OFFSET UNITYSDK_OFFSET(0x1051510)
#define MX_CORE_FIXEDMATH_TSMATH_LOG2_OFFSET UNITYSDK_OFFSET(0x10519A0)
#define MX_CORE_FIXEDMATH_TSMATH_LN_OFFSET UNITYSDK_OFFSET(0x1051BA0)
#define MX_CORE_FIXEDMATH_TSMATH_POW_OFFSET UNITYSDK_OFFSET(0x1051C30)
#define MX_CORE_FIXEDMATH_TSMATH_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x1051DE0)
#define MX_CORE_FIXEDMATH_TSMATH_REPEAT_OFFSET UNITYSDK_OFFSET(0x1051FC0)
#define MX_CORE_FIXEDMATH_TSMATH_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0x10520B0)
#define MX_CORE_FIXEDMATH_TSMATH_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0x10521B0)
#define MX_CORE_FIXEDMATH_TSMATH_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1052260)
#define MX_CORE_FIXEDMATH_TSMATH_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x10526F0)
#define MX_CORE_FIXEDMATH_TSMATH_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x1052310)
#define MX_CORE_FIXEDMATH_TSMATH_.CTOR_OFFSET UNITYSDK_OFFSET(0x10527B0)
#define MX_CORE_FIXEDMATH_TSMATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x10527C0)

namespace MX::Core::FixedMath
{
	inline static constexpr unsigned int TSMath_TypeDefinitionIndex = 12866;

	class TSMath : public Il2CppObject
	{
	public:
		::MX::Core::FixedMath::Fix64* Pi; // 0x0
		::MX::Core::FixedMath::Fix64* PiOver2; // 0x8
		::MX::Core::FixedMath::Fix64* Epsilon; // 0x10
		::MX::Core::FixedMath::Fix64* Deg2Rad; // 0x18
		::MX::Core::FixedMath::Fix64* Rad2Deg; // 0x20
		::MX::Core::FixedMath::Fix64* Infinity; // 0x28

		::MX::Core::FixedMath::Fix64* Sqrt(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_SQRT_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Max(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_MAX_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Min(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_MIN_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Max(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_MAX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Clamp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_CLAMP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Clamp01(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_CLAMP01_OFFSET))(arg, nullptr);
		}

		::System::Void Absolute(::MX::Core::FixedMath::TSMatrix&* arg, ::MX::Core::FixedMath::TSMatrix&* arg2)
		{
			((::System::Void(*)(::MX::Core::FixedMath::TSMatrix&*, ::MX::Core::FixedMath::TSMatrix&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_ABSOLUTE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Sin(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_SIN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Cos(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_COS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Tan(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_TAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Asin(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_ASIN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Acos(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_ACOS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Atan(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_ATAN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Atan2(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_ATAN2_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Floor(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_FLOOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Ceiling(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_CEILING_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Round(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Int32 RoundToInt(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int32(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_ROUNDTOINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Sign(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::System::Int32(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_SIGN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Abs(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_ABS_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Barycentric(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_BARYCENTRIC_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Core::FixedMath::Fix64* CatmullRom(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_CATMULLROM_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Distance(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Hermite(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_HERMITE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Lerp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_LERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* InverseLerp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_INVERSELERP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* SmoothStep(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_SMOOTHSTEP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Pow2(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_POW2_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Log2(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_LOG2_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Ln(::MX::Core::FixedMath::Fix64* arg)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_LN_OFFSET))(arg, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Pow(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_POW_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* MoveTowards(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64* arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_MOVETOWARDS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* Repeat(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_REPEAT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* DeltaAngle(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_DELTAANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Core::FixedMath::Fix64* MoveTowardsAngle(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::System::Single arg3)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_MOVETOWARDSANGLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::Core::FixedMath::Fix64* SmoothDamp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64&* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_SMOOTHDAMP_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::MX::Core::FixedMath::Fix64* SmoothDamp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64&* arg3, ::MX::Core::FixedMath::Fix64* arg4)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64&*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_SMOOTHDAMP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Core::FixedMath::Fix64* SmoothDamp(::MX::Core::FixedMath::Fix64* arg, ::MX::Core::FixedMath::Fix64* arg2, ::MX::Core::FixedMath::Fix64&* arg3, ::MX::Core::FixedMath::Fix64* arg4, ::MX::Core::FixedMath::Fix64* arg5, ::MX::Core::FixedMath::Fix64* arg6)
		{
			return ((::MX::Core::FixedMath::Fix64*(*)(::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64&*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::MX::Core::FixedMath::Fix64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_SMOOTHDAMP_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_FIXEDMATH_TSMATH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

