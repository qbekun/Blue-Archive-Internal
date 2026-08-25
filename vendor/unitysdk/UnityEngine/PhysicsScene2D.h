#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PhysicsScene2D; }
namespace UnityEngine { class RaycastHit2D; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class ContactFilter2D; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class PhysicsScene2D&; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class ContactFilter2D&; }
namespace UnityEngine { class RaycastHit2D&; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_PHYSICSSCENE2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA29A7C0)
#define UNITYENGINE_PHYSICSSCENE2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA29A8A0)
#define UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET UNITYSDK_OFFSET(0xA29A8B0)
#define UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET UNITYSDK_OFFSET(0xA29A920)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29A930)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29AC10)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29AB50)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29AD60)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29AE00)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29AEE0)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29AF80)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0xA29B060)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29B180)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET UNITYSDK_OFFSET(0xA29B290)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29B350)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0xA29B430)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29B490)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0xA29B530)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA29B590)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29AD00)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29AE80)
#define UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29B000)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29B230)
#define UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29B3D0)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29B4E0)
#define UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29B5E0)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicsScene2D_TypeDefinitionIndex = 37703;

	class PhysicsScene2D : public Il2CppObject
	{
	public:
		::System::Int32 m_Handle; // 0x10

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::PhysicsScene2D* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::PhysicsScene2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_EQUALS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D* arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::ContactFilter2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* Raycast_Internal(::UnityEngine::PhysicsScene2D* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D* arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::PhysicsScene2D*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::ContactFilter2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::ContactFilter2D*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastArray_Internal(::UnityEngine::PhysicsScene2D* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene2D*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::ContactFilter2D*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Raycast(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::ContactFilter2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastList_Internal(::UnityEngine::PhysicsScene2D* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene2D*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::UnityEngine::ContactFilter2D*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* GetRayIntersection(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::RaycastHit2D* GetRayIntersection_Internal(::UnityEngine::PhysicsScene2D* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::RaycastHit2D*(*)(::UnityEngine::PhysicsScene2D*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetRayIntersection(::UnityEngine::Ray* arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::System::Single, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene2D*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Collider2D* OverlapPoint(::UnityEngine::Vector2* arg, ::UnityEngine::ContactFilter2D* arg)
		{
			return (return (::UnityEngine::Collider2D*(*)(::UnityEngine::Vector2*, ::UnityEngine::ContactFilter2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Collider2D* OverlapPoint_Internal(::UnityEngine::PhysicsScene2D* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::ContactFilter2D* arg)
		{
			return (return (::UnityEngine::Collider2D*(*)(::UnityEngine::PhysicsScene2D*, ::UnityEngine::Vector2*, ::UnityEngine::ContactFilter2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 OverlapPoint(::UnityEngine::Vector2* arg, ::UnityEngine::ContactFilter2D* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector2*, ::UnityEngine::ContactFilter2D*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 OverlapPointArray_Internal(::UnityEngine::PhysicsScene2D* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::ContactFilter2D* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene2D*, ::UnityEngine::Vector2*, ::UnityEngine::ContactFilter2D*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINTARRAY_INTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Raycast_Internal_Injected(::UnityEngine::PhysicsScene2D&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D&* arg, ::UnityEngine::RaycastHit2D&* arg)
		{
			((::System::Void(*)(::UnityEngine::PhysicsScene2D&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::System::Single, ::UnityEngine::ContactFilter2D&*, ::UnityEngine::RaycastHit2D&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCAST_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastArray_Internal_Injected(::UnityEngine::PhysicsScene2D&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D&* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene2D&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::System::Single, ::UnityEngine::ContactFilter2D&*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTARRAY_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastList_Internal_Injected(::UnityEngine::PhysicsScene2D&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::Vector2&* arg, ::System::Single arg, ::UnityEngine::ContactFilter2D&* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene2D&*, ::UnityEngine::Vector2&*, ::UnityEngine::Vector2&*, ::System::Single, ::UnityEngine::ContactFilter2D&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_RAYCASTLIST_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetRayIntersection_Internal_Injected(::UnityEngine::PhysicsScene2D&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::RaycastHit2D&* arg)
		{
			((::System::Void(*)(::UnityEngine::PhysicsScene2D&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::System::Single, ::System::Int32, ::UnityEngine::RaycastHit2D&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTION_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetRayIntersectionArray_Internal_Injected(::UnityEngine::PhysicsScene2D&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene2D&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::System::Single, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_GETRAYINTERSECTIONARRAY_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Collider2D* OverlapPoint_Internal_Injected(::UnityEngine::PhysicsScene2D&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::ContactFilter2D&* arg)
		{
			return (return (::UnityEngine::Collider2D*(*)(::UnityEngine::PhysicsScene2D&*, ::UnityEngine::Vector2&*, ::UnityEngine::ContactFilter2D&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINT_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 OverlapPointArray_Internal_Injected(::UnityEngine::PhysicsScene2D&* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::ContactFilter2D&* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::PhysicsScene2D&*, ::UnityEngine::Vector2&*, ::UnityEngine::ContactFilter2D&*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICSSCENE2D_OVERLAPPOINTARRAY_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

