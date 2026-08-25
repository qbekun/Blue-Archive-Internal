#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PhysicsScene2D; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class RaycastHit2D; }
namespace UnityEngine { class ContactFilter2D; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class PhysicsScene2D&; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_PHYSICS2D_GET_DEFAULTPHYSICSSCENE_OFFSET UNITYSDK_OFFSET(0xA29B630)
#define UNITYENGINE_PHYSICS2D_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0xA29B640)
#define UNITYENGINE_PHYSICS2D_GET_QUERIESHITTRIGGERS_OFFSET UNITYSDK_OFFSET(0xA29B720)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29B760)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29B8B0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29BA10)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29BB90)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29BD30)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29BEE0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29BFA0)
#define UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29C070)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0xA29C140)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET UNITYSDK_OFFSET(0xA29C2D0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET UNITYSDK_OFFSET(0xA29C4B0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET UNITYSDK_OFFSET(0xA29C5E0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29C3F0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29C770)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29C870)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29C980)
#define UNITYENGINE_PHYSICS2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0xA29CA90)
#define UNITYENGINE_PHYSICS2D_OVERLAPPOINTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29CB50)
#define UNITYENGINE_PHYSICS2D_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA29CC10)
#define UNITYENGINE_PHYSICS2D_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29B6E0)
#define UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29C710)

namespace UnityEngine
{
	inline static constexpr unsigned int Physics2D_TypeDefinitionIndex = 37704;

	class Physics2D : public Il2CppObject
	{
	public:
		Il2CppObject* m_LastDisabledRigidbody2D; // 0x0

		::UnityEngine::PhysicsScene2D* get_defaultPhysicsScene()
		{
			return (return (::UnityEngine::PhysicsScene2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_DEFAULTPHYSICSSCENE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_gravity()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_GRAVITY_OFFSET))(nullptr);
		}

		::System::Boolean get_queriesHitTriggers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_QUERIESHITTRIGGERS_OFFSET))(nullptr);
		}

		::UnityEngine::RaycastHit2D* Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::ContactFilter2D* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::ContactFilter2D*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::ContactFilter2D* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::ContactFilter2D*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::ContactFilter2D* arg, Il2CppObject* arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::ContactFilter2D*, Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* GetRayIntersection(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRayIntersectionAll(::UnityEngine::Ray* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRayIntersectionAll(::UnityEngine::Ray* arg, ::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRayIntersectionAll(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::PhysicsScene2D*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetRayIntersectionNonAlloc(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetRayIntersectionNonAlloc(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetRayIntersectionNonAlloc(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONNONALLOC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Collider2D* OverlapPoint(::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Collider2D*(*)(::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_OVERLAPPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 OverlapPointNonAlloc(::UnityEngine::Vector2* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_OVERLAPPOINTNONALLOC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void get_gravity_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GET_GRAVITY_INJECTED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRayIntersectionAll_Internal_Injected(::UnityEngine::PhysicsScene2D&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::PhysicsScene2D&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS2D_GETRAYINTERSECTIONALL_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

