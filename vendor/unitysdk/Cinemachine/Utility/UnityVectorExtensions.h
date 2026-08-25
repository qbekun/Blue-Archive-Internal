#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ISNAN_OFFSET UNITYSDK_OFFSET(0x2886E20)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ISNAN_OFFSET UNITYSDK_OFFSET(0x2886EC0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x2886FE0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x28870A0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_PROJECTONTOPLANE_OFFSET UNITYSDK_OFFSET(0x2887150)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SQUARENORMALIZE_OFFSET UNITYSDK_OFFSET(0x28871B0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_FINDINTERSECTION_OFFSET UNITYSDK_OFFSET(0x2887240)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CROSS_OFFSET UNITYSDK_OFFSET(0x28875F0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ABS_OFFSET UNITYSDK_OFFSET(0x2887620)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ABS_OFFSET UNITYSDK_OFFSET(0x2887640)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ISUNIFORM_OFFSET UNITYSDK_OFFSET(0x2887670)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ISUNIFORM_OFFSET UNITYSDK_OFFSET(0x28876F0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x2885110)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ANGLE_OFFSET UNITYSDK_OFFSET(0x28877B0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x2887AC0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SAFEFROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x2887BA0)
#define CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x2887C90)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityVectorExtensions_TypeDefinitionIndex = 34415;

	class UnityVectorExtensions : public Il2CppObject
	{
	public:
		::System::Single Epsilon; // 0x0

		::System::Boolean IsNaN(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ISNAN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNaN(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ISNAN_OFFSET))(arg, nullptr);
		}

		::System::Single ClosestPointOnSegment(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ClosestPointOnSegment(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CLOSESTPOINTONSEGMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* ProjectOntoPlane(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_PROJECTONTOPLANE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* SquareNormalize(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SQUARENORMALIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 FindIntersection(::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_FINDINTERSECTION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single Cross(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_CROSS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Abs(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ABS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* Abs(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ABS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUniform(::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ISUNIFORM_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUniform(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ISUNIFORM_OFFSET))(arg, nullptr);
		}

		::System::Boolean AlmostZero(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ALMOSTZERO_OFFSET))(arg, nullptr);
		}

		::System::Single Angle(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_ANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single SignedAngle(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SIGNEDANGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* SafeFromToRotation(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SAFEFROMTOROTATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* SlerpWithReferenceUp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYVECTOREXTENSIONS_SLERPWITHREFERENCEUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

