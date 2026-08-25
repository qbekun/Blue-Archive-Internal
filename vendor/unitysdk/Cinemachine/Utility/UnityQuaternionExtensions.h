#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x28887F0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_GETCAMERAROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0x28888C0)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x2888030)
#define CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_APPLYCAMERAROTATION_OFFSET UNITYSDK_OFFSET(0x2888EE0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int UnityQuaternionExtensions_TypeDefinitionIndex = 34416;

	class UnityQuaternionExtensions : public Il2CppObject
	{
	public:
		::UnityEngine::Quaternion* Normalized(::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_NORMALIZED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetCameraRotationToTarget(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_GETCAMERAROTATIONTOTARGET_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* SlerpWithReferenceUp(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_SLERPWITHREFERENCEUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* ApplyCameraRotation(::UnityEngine::Quaternion* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Vector2*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_UNITYQUATERNIONEXTENSIONS_APPLYCAMERAROTATION_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

