#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_COLLISION2D_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xA29CD80)
#define UNITYENGINE_COLLISION2D_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0xA29CE20)
#define UNITYENGINE_COLLISION2D_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA29CEA0)
#define UNITYENGINE_COLLISION2D_GET_RELATIVEVELOCITY_OFFSET UNITYSDK_OFFSET(0xA29D080)

namespace UnityEngine
{
	inline static constexpr unsigned int Collision2D_TypeDefinitionIndex = 37707;

	class Collision2D : public Il2CppObject
	{
	public:
		::System::Int32 m_Collider; // 0x10
		::System::Int32 m_OtherCollider; // 0x14
		::System::Int32 m_Rigidbody; // 0x18
		::System::Int32 m_OtherRigidbody; // 0x1C
		::UnityEngine::Vector2* m_RelativeVelocity; // 0x20
		::System::Int32 m_Enabled; // 0x28
		::System::Int32 m_ContactCount; // 0x2C
		::Il2CppArray<::System::Object*>* m_ReusedContacts; // 0x30
		::Il2CppArray<::System::Object*>* m_LegacyContacts; // 0x38

		::UnityEngine::Collider2D* get_collider()
		{
			return (return (::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_COLLIDER_OFFSET))(nullptr);
		}

		::UnityEngine::Rigidbody2D* get_rigidbody()
		{
			return (return (::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_RIGIDBODY_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_relativeVelocity()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION2D_GET_RELATIVEVELOCITY_OFFSET))(nullptr);
		}

	};
}

