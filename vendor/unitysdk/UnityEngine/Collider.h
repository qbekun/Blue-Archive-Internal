#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class RaycastHit; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class RaycastHit&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Bounds&; }
namespace UnityEngine { class Ray&; }

#define UNITYENGINE_COLLIDER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA2A3E90)
#define UNITYENGINE_COLLIDER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA2A3ED0)
#define UNITYENGINE_COLLIDER_GET_ATTACHEDRIGIDBODY_OFFSET UNITYSDK_OFFSET(0xA2A1810)
#define UNITYENGINE_COLLIDER_SET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0xA2A3F10)
#define UNITYENGINE_COLLIDER_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0xA2A3F50)
#define UNITYENGINE_COLLIDER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xA2A4010)
#define UNITYENGINE_COLLIDER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA2A40C0)
#define UNITYENGINE_COLLIDER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA2A41C0)
#define UNITYENGINE_COLLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A42A0)
#define UNITYENGINE_COLLIDER_CLOSESTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A3FC0)
#define UNITYENGINE_COLLIDER_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4080)
#define UNITYENGINE_COLLIDER_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A4160)

namespace UnityEngine
{
	inline static constexpr unsigned int Collider_TypeDefinitionIndex = 37334;

	class Collider : public Il2CppObject
	{
	public:
		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rigidbody* get_attachedRigidbody()
		{
			return (return (::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_ATTACHEDRIGIDBODY_OFFSET))(nullptr);
		}

		::System::Void set_isTrigger(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_SET_ISTRIGGER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* ClosestPoint(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_CLOSESTPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* get_bounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_BOUNDS_OFFSET))(nullptr);
		}

		::UnityEngine::RaycastHit* Raycast(::UnityEngine::Ray* arg, ::System::Single arg, bool&* arg)
		{
			return (return (::UnityEngine::RaycastHit*(*)(::UnityEngine::Ray*, ::System::Single, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_RAYCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::UnityEngine::RaycastHit&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_RAYCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClosestPoint_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_CLOSESTPOINT_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_GET_BOUNDS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Raycast_Injected(::UnityEngine::Ray&* arg, ::System::Single arg, bool&* arg, ::UnityEngine::RaycastHit&* arg)
		{
			((::System::Void(*)(::UnityEngine::Ray&*, ::System::Single, bool&*, ::UnityEngine::RaycastHit&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER_RAYCAST_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

