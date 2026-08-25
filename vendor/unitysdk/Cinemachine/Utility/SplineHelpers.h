#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER1_OFFSET UNITYSDK_OFFSET(0x2885840)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x2885900)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT3_OFFSET UNITYSDK_OFFSET(0x2886620)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT1_OFFSET UNITYSDK_OFFSET(0x28867B0)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTSLOOPED_OFFSET UNITYSDK_OFFSET(0x2886870)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER3_OFFSET UNITYSDK_OFFSET(0x2886D20)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int SplineHelpers_TypeDefinitionIndex = 34414;

	class SplineHelpers : public Il2CppObject
	{
	public:
		::System::Single Bezier1(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER1_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ComputeSmoothControlPoints(::System::Object[]&* arg, ::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* BezierTangent3(::System::Single arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT3_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single BezierTangent1(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT1_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ComputeSmoothControlPointsLooped(::System::Object[]&* arg, ::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTSLOOPED_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Bezier3(::System::Single arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER3_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

