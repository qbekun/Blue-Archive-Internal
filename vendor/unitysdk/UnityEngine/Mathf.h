#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_MATHF_ISPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0xA227AF0)
#define UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0xA227B30)
#define UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET UNITYSDK_OFFSET(0xA227B70)
#define UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET UNITYSDK_OFFSET(0xA227BC0)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET UNITYSDK_OFFSET(0xA227C10)
#define UNITYENGINE_MATHF_FLOATTOHALF_OFFSET UNITYSDK_OFFSET(0xA227CC0)
#define UNITYENGINE_MATHF_PERLINNOISE_OFFSET UNITYSDK_OFFSET(0xA227D10)
#define UNITYENGINE_MATHF_SIN_OFFSET UNITYSDK_OFFSET(0xA227D60)
#define UNITYENGINE_MATHF_COS_OFFSET UNITYSDK_OFFSET(0xA227DC0)
#define UNITYENGINE_MATHF_TAN_OFFSET UNITYSDK_OFFSET(0xA227E20)
#define UNITYENGINE_MATHF_ASIN_OFFSET UNITYSDK_OFFSET(0xA227E80)
#define UNITYENGINE_MATHF_ACOS_OFFSET UNITYSDK_OFFSET(0xA227EE0)
#define UNITYENGINE_MATHF_ATAN_OFFSET UNITYSDK_OFFSET(0xA227F40)
#define UNITYENGINE_MATHF_ATAN2_OFFSET UNITYSDK_OFFSET(0xA227FA0)
#define UNITYENGINE_MATHF_SQRT_OFFSET UNITYSDK_OFFSET(0xA228010)
#define UNITYENGINE_MATHF_ABS_OFFSET UNITYSDK_OFFSET(0xA2280A0)
#define UNITYENGINE_MATHF_ABS_OFFSET UNITYSDK_OFFSET(0xA228100)
#define UNITYENGINE_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0xA228150)
#define UNITYENGINE_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0xA228160)
#define UNITYENGINE_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0xA228250)
#define UNITYENGINE_MATHF_MIN_OFFSET UNITYSDK_OFFSET(0xA228260)
#define UNITYENGINE_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0xA2283A0)
#define UNITYENGINE_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0xA2283B0)
#define UNITYENGINE_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0xA2284A0)
#define UNITYENGINE_MATHF_MAX_OFFSET UNITYSDK_OFFSET(0xA2284B0)
#define UNITYENGINE_MATHF_POW_OFFSET UNITYSDK_OFFSET(0xA2285F0)
#define UNITYENGINE_MATHF_EXP_OFFSET UNITYSDK_OFFSET(0xA228660)
#define UNITYENGINE_MATHF_LOG_OFFSET UNITYSDK_OFFSET(0xA2286C0)
#define UNITYENGINE_MATHF_LOG_OFFSET UNITYSDK_OFFSET(0xA228730)
#define UNITYENGINE_MATHF_LOG10_OFFSET UNITYSDK_OFFSET(0xA228790)
#define UNITYENGINE_MATHF_CEIL_OFFSET UNITYSDK_OFFSET(0xA2287F0)
#define UNITYENGINE_MATHF_FLOOR_OFFSET UNITYSDK_OFFSET(0xA228850)
#define UNITYENGINE_MATHF_ROUND_OFFSET UNITYSDK_OFFSET(0xA2288B0)
#define UNITYENGINE_MATHF_CEILTOINT_OFFSET UNITYSDK_OFFSET(0xA2289B0)
#define UNITYENGINE_MATHF_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0xA228A10)
#define UNITYENGINE_MATHF_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0xA228A70)
#define UNITYENGINE_MATHF_SIGN_OFFSET UNITYSDK_OFFSET(0xA228B70)
#define UNITYENGINE_MATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0xA228B90)
#define UNITYENGINE_MATHF_CLAMP_OFFSET UNITYSDK_OFFSET(0xA228BB0)
#define UNITYENGINE_MATHF_CLAMP01_OFFSET UNITYSDK_OFFSET(0xA228BD0)
#define UNITYENGINE_MATHF_LERP_OFFSET UNITYSDK_OFFSET(0xA228C10)
#define UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0xA228C50)
#define UNITYENGINE_MATHF_LERPANGLE_OFFSET UNITYSDK_OFFSET(0xA228C60)
#define UNITYENGINE_MATHF_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0xA228D40)
#define UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET UNITYSDK_OFFSET(0xA228D90)
#define UNITYENGINE_MATHF_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0xA228EC0)
#define UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0xA228F50)
#define UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0xA2290F0)
#define UNITYENGINE_MATHF_REPEAT_OFFSET UNITYSDK_OFFSET(0xA229220)
#define UNITYENGINE_MATHF_PINGPONG_OFFSET UNITYSDK_OFFSET(0xA229280)
#define UNITYENGINE_MATHF_INVERSELERP_OFFSET UNITYSDK_OFFSET(0xA229300)
#define UNITYENGINE_MATHF_DELTAANGLE_OFFSET UNITYSDK_OFFSET(0xA229350)
#define UNITYENGINE_MATHF_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2293D0)
#define UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET UNITYSDK_OFFSET(0xA227C70)

namespace UnityEngine
{
	inline static constexpr unsigned int Mathf_TypeDefinitionIndex = 31101;

	class Mathf : public Il2CppObject
	{
	public:
		::System::Single Epsilon; // 0x0

		::System::Boolean IsPowerOfTwo(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ISPOWEROFTWO_OFFSET))(arg, nullptr);
		}

		::System::Int32 NextPowerOfTwo(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_NEXTPOWEROFTWO_OFFSET))(arg, nullptr);
		}

		::System::Single GammaToLinearSpace(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_GAMMATOLINEARSPACE_OFFSET))(arg, nullptr);
		}

		::System::Single LinearToGammaSpace(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LINEARTOGAMMASPACE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* CorrelatedColorTemperatureToRGB(::System::Single arg)
		{
			return (return (::UnityEngine::Color*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_OFFSET))(arg, nullptr);
		}

		::System::UInt16 FloatToHalf(::System::Single arg)
		{
			return (return (::System::UInt16(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOATTOHALF_OFFSET))(arg, nullptr);
		}

		::System::Single PerlinNoise(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_PERLINNOISE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Sin(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SIN_OFFSET))(arg, nullptr);
		}

		::System::Single Cos(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_COS_OFFSET))(arg, nullptr);
		}

		::System::Single Tan(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_TAN_OFFSET))(arg, nullptr);
		}

		::System::Single Asin(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ASIN_OFFSET))(arg, nullptr);
		}

		::System::Single Acos(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ACOS_OFFSET))(arg, nullptr);
		}

		::System::Single Atan(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ATAN_OFFSET))(arg, nullptr);
		}

		::System::Single Atan2(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ATAN2_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Sqrt(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SQRT_OFFSET))(arg, nullptr);
		}

		::System::Single Abs(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ABS_OFFSET))(arg, nullptr);
		}

		::System::Int32 Abs(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ABS_OFFSET))(arg, nullptr);
		}

		::System::Single Min(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Min(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Single(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_OFFSET))(arg, nullptr);
		}

		::System::Int32 Min(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Min(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MIN_OFFSET))(arg, nullptr);
		}

		::System::Single Max(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Max(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Single(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 Max(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Max(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MAX_OFFSET))(arg, nullptr);
		}

		::System::Single Pow(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_POW_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Exp(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_EXP_OFFSET))(arg, nullptr);
		}

		::System::Single Log(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Log(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG_OFFSET))(arg, nullptr);
		}

		::System::Single Log10(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LOG10_OFFSET))(arg, nullptr);
		}

		::System::Single Ceil(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CEIL_OFFSET))(arg, nullptr);
		}

		::System::Single Floor(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOOR_OFFSET))(arg, nullptr);
		}

		::System::Single Round(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Int32 CeilToInt(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CEILTOINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 FloorToInt(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_FLOORTOINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 RoundToInt(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_ROUNDTOINT_OFFSET))(arg, nullptr);
		}

		::System::Single Sign(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SIGN_OFFSET))(arg, nullptr);
		}

		::System::Single Clamp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Clamp(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single Clamp01(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CLAMP01_OFFSET))(arg, nullptr);
		}

		::System::Single Lerp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single LerpUnclamped(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERPUNCLAMPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single LerpAngle(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_LERPANGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single MoveTowards(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MOVETOWARDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single MoveTowardsAngle(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_MOVETOWARDSANGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Approximately(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_APPROXIMATELY_OFFSET))(arg, arg, nullptr);
		}

		::System::Single SmoothDamp(::System::Single arg, ::System::Single arg, float&* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, float&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single SmoothDamp(::System::Single arg, ::System::Single arg, float&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, float&*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_SMOOTHDAMP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single Repeat(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_REPEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Single PingPong(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_PINGPONG_OFFSET))(arg, arg, nullptr);
		}

		::System::Single InverseLerp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_INVERSELERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single DeltaAngle(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_DELTAANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void CorrelatedColorTemperatureToRGB_Injected(::System::Single arg, ::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATHF_CORRELATEDCOLORTEMPERATURETORGB_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

