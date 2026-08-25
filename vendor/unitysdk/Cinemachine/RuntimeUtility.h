#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class RaycastHit&; }
namespace UnityEngine { class Ray; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class AnimationCurve; }

#define CINEMACHINE_RUNTIMEUTILITY_GETSCRATCHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2862280)
#define CINEMACHINE_RUNTIMEUTILITY_SPHERECASTIGNORETAG_OFFSET UNITYSDK_OFFSET(0x2862540)
#define CINEMACHINE_RUNTIMEUTILITY_RAYCASTIGNORETAG_OFFSET UNITYSDK_OFFSET(0x28630D0)
#define CINEMACHINE_RUNTIMEUTILITY_ISPREFAB_OFFSET UNITYSDK_OFFSET(0x2863440)
#define CINEMACHINE_RUNTIMEUTILITY_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x2863450)
#define CINEMACHINE_RUNTIMEUTILITY_DESTROYSCRATCHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x28634D0)
#define CINEMACHINE_RUNTIMEUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x28637C0)
#define CINEMACHINE_RUNTIMEUTILITY_NORMALIZECURVE_OFFSET UNITYSDK_OFFSET(0x2863870)

namespace Cinemachine
{
	inline static constexpr unsigned int RuntimeUtility_TypeDefinitionIndex = 34331;

	class RuntimeUtility : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_HitBuffer; // 0x0
		::Il2CppArray<::System::Object*>* s_PenetrationIndexBuffer; // 0x8
		::UnityEngine::SphereCollider* s_ScratchCollider; // 0x10
		::UnityEngine::GameObject* s_ScratchColliderGameObject; // 0x18

		::UnityEngine::SphereCollider* GetScratchCollider()
		{
			return (return (::UnityEngine::SphereCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_GETSCRATCHCOLLIDER_OFFSET))(nullptr);
		}

		::System::Boolean SphereCastIgnoreTag(::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_SPHERECASTIGNORETAG_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean RaycastIgnoreTag(::UnityEngine::Ray* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::System::Int32 arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Ray*, ::UnityEngine::RaycastHit&*, ::System::Single, ::System::Int32, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_RAYCASTIGNORETAG_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsPrefab(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_ISPREFAB_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyObject(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_DESTROYOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyScratchCollider()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_DESTROYSCRATCHCOLLIDER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationCurve* NormalizeCurve(::UnityEngine::AnimationCurve* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_NORMALIZECURVE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

