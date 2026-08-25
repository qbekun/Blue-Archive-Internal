#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class SendMessageOptions; }

#define UNITYENGINE_COMPONENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA22EC90)
#define UNITYENGINE_COMPONENT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA22ECD0)
#define UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA22ED10)
#define UNITYENGINE_COMPONENT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0xA22EDD0)
#define UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0xA22EE20)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0xA22EEF0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0xA22F080)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSFORLISTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA22F150)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA22F1A0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA22F1F0)
#define UNITYENGINE_COMPONENT_SET_TAG_OFFSET UNITYSDK_OFFSET(0xA22F2A0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_COMPONENT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0xA22F360)
#define UNITYENGINE_COMPONENT_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA22F420)
#define UNITYENGINE_COMPONENT_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA22F470)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA22F4C0)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA22F510)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA22F560)
#define UNITYENGINE_COMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22EC30)

namespace UnityEngine
{
	inline static constexpr unsigned int Component_TypeDefinitionIndex = 31147;

	class Component : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::UnityEngine::Component* GetComponent(::System::Type* arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void GetComponentFastPath(::System::Type* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTFASTPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetComponent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetComponent(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_TRYGETCOMPONENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetComponentInChildren(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetComponentInChildren()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInChildren(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInChildren(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Void GetComponentsInChildren(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInChildren()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET))(nullptr);
		}

		::System::Void GetComponentsInChildren(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetComponentInParent(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetComponentInParent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInParent(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET))(arg, nullptr);
		}

		::System::Void GetComponentsInParent(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInParent()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET))(nullptr);
		}

		::System::Void GetComponentsForListInternal(::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSFORLISTINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetComponents(::System::Type* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetComponents(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET))(arg, nullptr);
		}

		::System::String* get_tag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_TAG_OFFSET))(nullptr);
		}

		::System::Void set_tag(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SET_TAG_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponents()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET))(nullptr);
		}

		::System::Boolean CompareTag(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_COMPARETAG_OFFSET))(str, nullptr);
		}

		::System::Void SendMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void SendMessage(::System::String* str, ::System::Object* arg, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void BroadcastMessage(::System::String* str, ::System::Object* arg, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void BroadcastMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void BroadcastMessage(::System::String* str, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

