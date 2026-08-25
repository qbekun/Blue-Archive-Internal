#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystemCurveMode; }
namespace UnityEngine { class AnimationCurve; }

#define MINMAXCURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2982A0)
#define MINMAXCURVE_GET_MODE_OFFSET UNITYSDK_OFFSET(0xA2982F0)
#define MINMAXCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA298300)
#define MINMAXCURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA298310)
#define MINMAXCURVE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA294410)

	inline static constexpr unsigned int MinMaxCurve_TypeDefinitionIndex = 36920;

	class MinMaxCurve : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystemCurveMode* m_Mode; // 0x10
		::System::Single m_CurveMultiplier; // 0x14
		::UnityEngine::AnimationCurve* m_CurveMin; // 0x18
		::UnityEngine::AnimationCurve* m_CurveMax; // 0x20
		::System::Single m_ConstantMin; // 0x28
		::System::Single m_ConstantMax; // 0x2C

		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXCURVE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystemCurveMode* get_mode()
		{
			return (return (::UnityEngine::ParticleSystemCurveMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINMAXCURVE_GET_MODE_OFFSET))(nullptr);
		}

		::System::Single Evaluate(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXCURVE_EVALUATE_OFFSET))(arg, nullptr);
		}

		::System::Single Evaluate(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXCURVE_EVALUATE_OFFSET))(arg, arg, nullptr);
		}

		MinMaxCurve* op_Implicit(::System::Single arg)
		{
			return (return (MinMaxCurve*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MINMAXCURVE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};

