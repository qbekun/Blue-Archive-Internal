#pragma once
#include "../unitysdk.h"

namespace NPA { class IMMUICompatability; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define NPA_TOYOBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_TOYOBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_TOYOBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_TOYOBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_TOYOBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_TOYOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x9BCD3D0)
#define NPA_TOYOBJECT_SETPARENT_OFFSET UNITYSDK_OFFSET(0x9BCD4B0)
#define NPA_TOYOBJECT_SETPARENT_OFFSET UNITYSDK_OFFSET(0x9BCD590)
#define NPA_TOYOBJECT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_TOYOBJECT_ADDNOTUICOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_TOYOBJECT_DESTROY_OFFSET UNITYSDK_OFFSET(0x9BCD680)

namespace NPA
{
	inline static constexpr unsigned int ToyObject_TypeDefinitionIndex = 25672;

	class ToyObject : public Il2CppObject
	{
	public:
		::NPA::IMMUICompatability* Compat; // 0x0

		Il2CppObject* Instantiate(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_INSTANTIATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_INSTANTIATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetActive(::UnityEngine::GameObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_SETACTIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetParent(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_SETPARENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetParent(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_SETPARENT_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* AddComponent(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_ADDCOMPONENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AddNotUIComponent(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_ADDNOTUICOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Object* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_TOYOBJECT_DESTROY_OFFSET))(arg, arg, nullptr);
		}

	};
}

