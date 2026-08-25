#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_COLLISION_GET_RELATIVEVELOCITY_OFFSET UNITYSDK_OFFSET(0xA29E160)
#define UNITYENGINE_COLLISION_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xA29E180)
#define UNITYENGINE_COLLISION_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA29E190)

namespace UnityEngine
{
	inline static constexpr unsigned int Collision_TypeDefinitionIndex = 37326;

	class Collision : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Impulse; // 0x10
		::UnityEngine::Vector3* m_RelativeVelocity; // 0x1C
		::UnityEngine::Component* m_Body; // 0x28
		::UnityEngine::Collider* m_Collider; // 0x30
		::System::Int32 m_ContactCount; // 0x38
		::Il2CppArray<::System::Object*>* m_ReusedContacts; // 0x40
		::Il2CppArray<::System::Object*>* m_LegacyContacts; // 0x48

		::UnityEngine::Vector3* get_relativeVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_RELATIVEVELOCITY_OFFSET))(nullptr);
		}

		::UnityEngine::Collider* get_collider()
		{
			return (return (::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_COLLIDER_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLISION_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

	};
}

