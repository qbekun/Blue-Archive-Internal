#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class BoundingSphere; }
namespace UnityEngine { class Vector2&; }

#define CINEMACHINE_ICINEMACHINETARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINETARGETGROUP_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINETARGETGROUP_GET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINETARGETGROUP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINETARGETGROUP_GET_SPHERE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CINEMACHINE_ICINEMACHINETARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cinemachine
{
	inline static constexpr unsigned int ICinemachineTargetGroup_TypeDefinitionIndex = 34237;

	class ICinemachineTargetGroup : public Il2CppObject
	{
	public:
		::UnityEngine::Bounds* GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINETARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINETARGETGROUP_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* get_BoundingBox()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINETARGETGROUP_GET_BOUNDINGBOX_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINETARGETGROUP_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::UnityEngine::BoundingSphere* get_Sphere()
		{
			return (return (::UnityEngine::BoundingSphere*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINETARGETGROUP_GET_SPHERE_OFFSET))(nullptr);
		}

		::System::Void GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_ICINEMACHINETARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

