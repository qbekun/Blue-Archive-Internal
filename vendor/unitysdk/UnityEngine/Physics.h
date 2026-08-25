#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PhysicsScene; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class QueryTriggerInteraction; }
namespace UnityEngine { class RaycastHit&; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class PhysicsScene&; }
namespace UnityEngine { class Ray&; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_PHYSICS_ONSCENECONTACTMODIFY_OFFSET UNITYSDK_OFFSET(0xA29E210)
#define UNITYENGINE_PHYSICS_GET_DEFAULTPHYSICSSCENE_OFFSET UNITYSDK_OFFSET(0xA29E2C0)
#define UNITYENGINE_PHYSICS_IGNORELAYERCOLLISION_OFFSET UNITYSDK_OFFSET(0xA29E340)
#define UNITYENGINE_PHYSICS_GETIGNORELAYERCOLLISION_OFFSET UNITYSDK_OFFSET(0xA29E390)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29E3D0)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29E610)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29E6B0)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29E750)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29E7F0)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29EA50)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29EB10)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29EBC0)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29EC60)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29ED30)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29EE00)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29EED0)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29EF90)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29F070)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29F150)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA29F230)
#define UNITYENGINE_PHYSICS_INTERNAL_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F2F0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F3B0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F5A0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F5E0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F630)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F680)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F710)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F7A0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0xA29F830)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29F8B0)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29FBE0)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29FCC0)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29FDA0)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29FE60)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29FF20)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA29FFE0)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A0090)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2A0130)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_OFFSET UNITYSDK_OFFSET(0xA2A01F0)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_OFFSET UNITYSDK_OFFSET(0xA2A0290)
#define UNITYENGINE_PHYSICS_GET_AUTOSIMULATION_OFFSET UNITYSDK_OFFSET(0xA2A0340)
#define UNITYENGINE_PHYSICS_SET_AUTOSIMULATION_OFFSET UNITYSDK_OFFSET(0xA2A0380)
#define UNITYENGINE_PHYSICS_QUERY_COMPUTEPENETRATION_OFFSET UNITYSDK_OFFSET(0xA2A03C0)
#define UNITYENGINE_PHYSICS_COMPUTEPENETRATION_OFFSET UNITYSDK_OFFSET(0xA2A0460)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERENONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A0580)
#define UNITYENGINE_PHYSICS_CAPSULECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A06B0)
#define UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A0A20)
#define UNITYENGINE_PHYSICS_OVERLAPBOX_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2A0D10)
#define UNITYENGINE_PHYSICS_OVERLAPBOX_OFFSET UNITYSDK_OFFSET(0xA2A0DD0)
#define UNITYENGINE_PHYSICS_OVERLAPBOX_OFFSET UNITYSDK_OFFSET(0xA2A0EA0)
#define UNITYENGINE_PHYSICS_BOXCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A0F90)
#define UNITYENGINE_PHYSICS_BOXCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0xA2A1230)
#define UNITYENGINE_PHYSICS_GET_DEFAULTPHYSICSSCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29E300)
#define UNITYENGINE_PHYSICS_INTERNAL_RAYCASTALL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA29F350)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A0190)
#define UNITYENGINE_PHYSICS_QUERY_COMPUTEPENETRATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A0410)
#define UNITYENGINE_PHYSICS_OVERLAPBOX_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A0D80)

namespace UnityEngine
{
	inline static constexpr unsigned int Physics_TypeDefinitionIndex = 37330;

	class Physics : public Il2CppObject
	{
	public:
		Il2CppObject* ContactModifyEvent; // 0x0
		Il2CppObject* ContactModifyEventCCD; // 0x8

		::System::Void OnSceneContactModify(::UnityEngine::PhysicsScene* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::PhysicsScene*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_ONSCENECONTACTMODIFY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::PhysicsScene* get_defaultPhysicsScene()
		{
			return (return (::UnityEngine::PhysicsScene*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_DEFAULTPHYSICSSCENE_OFFSET))(nullptr);
		}

		::System::Void IgnoreLayerCollision(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_IGNORELAYERCOLLISION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetIgnoreLayerCollision(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GETIGNORELAYERCOLLISION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::UnityEngine::RaycastHit&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Raycast(::UnityEngine::Ray* arg, ::UnityEngine::RaycastHit&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::UnityEngine::RaycastHit&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Internal_RaycastAll(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_RAYCASTALL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RaycastAll(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RaycastAll(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RaycastAll(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RaycastAll(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RaycastAll(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RaycastAll(::UnityEngine::Ray* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RaycastAll(::UnityEngine::Ray* arg, ::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RaycastAll(::UnityEngine::Ray* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Ray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(arg, nullptr);
		}

		::System::Int32 RaycastNonAlloc(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastNonAlloc(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastNonAlloc(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastNonAlloc(::UnityEngine::Ray* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Ray*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 RaycastNonAlloc(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastNonAlloc(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastNonAlloc(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RaycastNonAlloc(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OverlapSphere_Internal(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OverlapSphere(::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OverlapSphere(::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_autoSimulation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_AUTOSIMULATION_OFFSET))(nullptr);
		}

		::System::Void set_autoSimulation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_AUTOSIMULATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean Query_ComputePenetration(::UnityEngine::Collider* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Collider* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Collider*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_QUERY_COMPUTEPENETRATION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ComputePenetration(::UnityEngine::Collider* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Collider* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Collider*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_COMPUTEPENETRATION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 OverlapSphereNonAlloc(::UnityEngine::Vector3* arg, ::System::Single arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::System::Single, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERENONALLOC_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 CapsuleCastNonAlloc(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CAPSULECASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 SphereCastNonAlloc(::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OverlapBox_Internal(::UnityEngine::PhysicsScene* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::PhysicsScene*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOX_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OverlapBox(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOX_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OverlapBox(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 BoxCastNonAlloc(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Quaternion*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_BOXCASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 BoxCastNonAlloc(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Quaternion* arg, ::System::Single arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Quaternion*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_BOXCASTNONALLOC_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void get_defaultPhysicsScene_Injected(::UnityEngine::PhysicsScene&* arg)
		{
			((::System::Void(*)(::UnityEngine::PhysicsScene&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_DEFAULTPHYSICSSCENE_INJECTED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Internal_RaycastAll_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Ray&* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Ray&*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_RAYCASTALL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OverlapSphere_Internal_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Vector3&*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Query_ComputePenetration_Injected(::UnityEngine::Collider* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Collider* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Collider*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_QUERY_COMPUTEPENETRATION_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OverlapBox_Internal_Injected(::UnityEngine::PhysicsScene&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::System::Int32 arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::PhysicsScene&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOX_INTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

