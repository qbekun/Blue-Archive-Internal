#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PhysicsScene; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class QueryTriggerInteraction; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class RaycastHit&; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class PhysicsScene&; }
namespace UnityEngine { class Ray&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_PHYSICSSCENE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2A4E30)
#define UNITYENGINE_PHYSICSSCENE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2A4F10)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2A4F20)
#define UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2A4F90)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29E480)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET UNITYSDK_OFFSET(0xA2A4FA0)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29E8B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA2A5060)
#define UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29F990)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A5130)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A5200)
#define UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0xA2A08A0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A5310)
#define UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET UNITYSDK_OFFSET(0xA2A0BC0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2A5410)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET UNITYSDK_OFFSET(0xA2A0630)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A54E0)
#define UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET UNITYSDK_OFFSET(0xA2A10B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A5000)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A50D0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A51A0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A52B0)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A53B0)
#define UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A5480)
#define UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A5590)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene_TypeDefinitionIndex = 37341;

	class PhysicsScene : public Il2CppObject
	{
	public:
		::System::Int32 m_Handle; // 0x10

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::PhysicsScene* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PhysicsScene*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Internal_RaycastTest(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Internal_Raycast(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Ray* arg, ::System::Single arg, ::UnityEngine::RaycastHit&* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Ray*, ::System::Single, ::UnityEngine::RaycastHit&*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CapsuleCast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_CAPSULECAST_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 SphereCast(::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_SPHERECAST_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Vector3*, ::System::Single, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 OverlapSphere(::UnityEngine::Vector3* arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::System::Single, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_BoxCastNonAlloc(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Quaternion*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 BoxCast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Quaternion*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_BOXCAST_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Internal_RaycastTest_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Ray&* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Ray&*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTTEST_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Internal_Raycast_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Ray&* arg, ::System::Single arg, ::UnityEngine::RaycastHit&* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Ray&*, ::System::Single, ::UnityEngine::RaycastHit&*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCAST_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_RaycastNonAlloc_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Ray&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Ray&*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_RAYCASTNONALLOC_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_CapsuleCastNonAlloc_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::UnityEngine::Vector3&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3&*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_CAPSULECASTNONALLOC_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_SphereCastNonAlloc_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::UnityEngine::Vector3&* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::Vector3&*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_SPHERECASTNONALLOC_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 OverlapSphereNonAlloc_Internal_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Vector3&*, ::System::Single, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_OVERLAPSPHERENONALLOC_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_BoxCastNonAlloc_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Quaternion&* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Quaternion&*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE_INTERNAL_BOXCASTNONALLOC_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

