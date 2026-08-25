#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA49EA30)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA49EA40)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA49EA50)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA490830)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0xA49EAE0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int RaycastResult_TypeDefinitionIndex = 34938;

	class RaycastResult : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* m_GameObject; // 0x10
		::UnityEngine::EventSystems::BaseRaycaster* module; // 0x18
		::System::Single distance; // 0x20
		::System::Single index; // 0x24
		::System::Int32 depth; // 0x28
		::System::Int32 sortingGroupID; // 0x2C
		::System::Int32 sortingGroupOrder; // 0x30
		::System::Int32 sortingLayer; // 0x34
		::System::Int32 sortingOrder; // 0x38
		::UnityEngine::Vector3* worldPosition; // 0x3C
		::UnityEngine::Vector3* worldNormal; // 0x48
		::UnityEngine::Vector2* screenPosition; // 0x54
		::System::Int32 displayIndex; // 0x5C

		::UnityEngine::GameObject* get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_SET_GAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTRESULT_CLEAR_OFFSET))(nullptr);
		}

	};
}

