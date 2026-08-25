#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMUICOMPATABILITY_GAMEOBJECTSETACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMUICOMPATABILITY_TRANSFORMSETPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMUICOMPATABILITY_OBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_IMMUICOMPATABILITY_GAMEOBJECTADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int IMMUICompatability_TypeDefinitionIndex = 25671;

	class IMMUICompatability : public Il2CppObject
	{
	public:
		Il2CppObject* ObjectInstantiate(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ObjectInstantiate(Il2CppObject* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ObjectInstantiate(Il2CppObject* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ObjectInstantiate(Il2CppObject* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* ObjectInstantiate(Il2CppObject* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_OBJECTINSTANTIATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GameObjectSetActive(::UnityEngine::GameObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_GAMEOBJECTSETACTIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TransformSetParent(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_TRANSFORMSETPARENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ObjectDestroy(::UnityEngine::Object* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_OBJECTDESTROY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GameObjectAddComponent(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_IMMUICOMPATABILITY_GAMEOBJECTADDCOMPONENT_OFFSET))(arg, nullptr);
		}

	};
}

