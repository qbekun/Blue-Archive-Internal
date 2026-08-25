#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_HABLECURVE_GET_X0_OFFSET UNITYSDK_OFFSET(0x9FDB660)
#define UNITYENGINE_RENDERING_HABLECURVE_INITSEGMENTS_OFFSET UNITYSDK_OFFSET(0x9FDB670)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_WHITEPOINT_OFFSET UNITYSDK_OFFSET(0x9FDBD00)
#define UNITYENGINE_RENDERING_HABLECURVE_SOLVEAB_OFFSET UNITYSDK_OFFSET(0x9FDBC20)
#define UNITYENGINE_RENDERING_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET UNITYSDK_OFFSET(0x9FDBBD0)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_X1_OFFSET UNITYSDK_OFFSET(0x9FDBD10)
#define UNITYENGINE_RENDERING_HABLECURVE_INIT_OFFSET UNITYSDK_OFFSET(0x9FDBD20)
#define UNITYENGINE_RENDERING_HABLECURVE_ASSLOPEINTERCEPT_OFFSET UNITYSDK_OFFSET(0x9FDBB80)
#define UNITYENGINE_RENDERING_HABLECURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDBF80)
#define UNITYENGINE_RENDERING_HABLECURVE_EVAL_OFFSET UNITYSDK_OFFSET(0x9FDC1C0)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_WHITEPOINT_OFFSET UNITYSDK_OFFSET(0x9FDC270)
#define UNITYENGINE_RENDERING_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x9FDC280)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET UNITYSDK_OFFSET(0x9FDC290)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_X0_OFFSET UNITYSDK_OFFSET(0x9FDC2A0)
#define UNITYENGINE_RENDERING_HABLECURVE_SET_X1_OFFSET UNITYSDK_OFFSET(0x9FDC2B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int HableCurve_TypeDefinitionIndex = 34067;

	class HableCurve : public Il2CppObject
	{
	public:
		::System::Single _whitePoint_k__BackingField; // 0x10
		::System::Single _inverseWhitePoint_k__BackingField; // 0x14
		::System::Single _x0_k__BackingField; // 0x18
		::System::Single _x1_k__BackingField; // 0x1C
		::Il2CppArray<::System::Object*>* segments; // 0x20
		Uniforms* uniforms; // 0x28

		::System::Single get_x0()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_X0_OFFSET))(nullptr);
		}

		::System::Void InitSegments(DirectParams* arg)
		{
			((::System::Void(*)(DirectParams*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_INITSEGMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_whitePoint(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_WHITEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void SolveAB(float&* arg, float&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(float&*, float&*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SOLVEAB_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single EvalDerivativeLinearGamma(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_EVALDERIVATIVELINEARGAMMA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single get_x1()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_X1_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_INIT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AsSlopeIntercept(float&* arg, float&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(float&*, float&*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_ASSLOPEINTERCEPT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Single Eval(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_whitePoint()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_WHITEPOINT_OFFSET))(nullptr);
		}

		::System::Single get_inverseWhitePoint()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_GET_INVERSEWHITEPOINT_OFFSET))(nullptr);
		}

		::System::Void set_inverseWhitePoint(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_INVERSEWHITEPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void set_x0(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_X0_OFFSET))(arg, nullptr);
		}

		::System::Void set_x1(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_HABLECURVE_SET_X1_OFFSET))(arg, nullptr);
		}

	};
}

