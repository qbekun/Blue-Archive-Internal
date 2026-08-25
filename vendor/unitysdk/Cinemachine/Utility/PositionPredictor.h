#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITION_OFFSET UNITYSDK_OFFSET(0x28847D0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2884820)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0x2884830)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITIONDELTA_OFFSET UNITYSDK_OFFSET(0x2884800)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_RESET_OFFSET UNITYSDK_OFFSET(0x28849D0)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYTRANSFORMDELTA_OFFSET UNITYSDK_OFFSET(0x2884A50)
#define CINEMACHINE_UTILITY_POSITIONPREDICTOR_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x2884A70)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int PositionPredictor_TypeDefinitionIndex = 34410;

	class PositionPredictor : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Velocity; // 0x10
		::UnityEngine::Vector3* m_SmoothDampVelocity; // 0x1C
		::UnityEngine::Vector3* m_Pos; // 0x28
		::System::Boolean m_HavePos; // 0x34
		::System::Single Smoothing; // 0x38

		::UnityEngine::Vector3* PredictPosition(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddPosition(::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_ADDPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* PredictPositionDelta(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_PREDICTPOSITIONDELTA_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_RESET_OFFSET))(nullptr);
		}

		::System::Void ApplyTransformDelta(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_APPLYTRANSFORMDELTA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_POSITIONPREDICTOR_ISEMPTY_OFFSET))(nullptr);
		}

	};
}

