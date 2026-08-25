#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class PrimitiveType; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Component&; }
namespace UnityEngine { class SendMessageOptions; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace UnityEngine::SceneManagement { class Scene&; }

#define UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0xA22F9C0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA22ED90)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0xA22FA00)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET UNITYSDK_OFFSET(0xA22FA50)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA22FA90)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0xA22EEA0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0xA22FAD0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0xA22F100)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0xA22FB10)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0xA22FB50)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA22FBA0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xA22FC50)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0xA22FCB0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0xA22EFD0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0xA22FD60)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0xA22FE10)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA22FEC0)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA22FFA0)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0xA230040)
#define UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET UNITYSDK_OFFSET(0xA230090)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0xA230110)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA2301B0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA230250)
#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2302F0)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET UNITYSDK_OFFSET(0xA230330)
#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA230370)
#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2303B0)
#define UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0xA2303F0)
#define UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0xA230430)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA230470)
#define UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA2304B0)
#define UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xA2304F0)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET UNITYSDK_OFFSET(0xA230530)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA230570)
#define UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET UNITYSDK_OFFSET(0xA2305B0)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xA2305F0)
#define UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xA230630)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET UNITYSDK_OFFSET(0xA230670)
#define UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0xA22F260)
#define UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET UNITYSDK_OFFSET(0xA22F320)
#define UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0xA22F3E0)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET UNITYSDK_OFFSET(0xA2300D0)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET UNITYSDK_OFFSET(0xA2306B0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0xA230160)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0xA2306F0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0xA230740)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA230200)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA230790)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA2307E0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA2302A0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA230830)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xA230880)
#define UNITYENGINE_GAMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2308D0)
#define UNITYENGINE_GAMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA230990)
#define UNITYENGINE_GAMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA230A00)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA230950)
#define UNITYENGINE_GAMEOBJECT_FIND_OFFSET UNITYSDK_OFFSET(0xA230AE0)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_OFFSET UNITYSDK_OFFSET(0xA230B20)
#define UNITYENGINE_GAMEOBJECT_GET_SCENECULLINGMASK_OFFSET UNITYSDK_OFFSET(0xA230BB0)
#define UNITYENGINE_GAMEOBJECT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA230BF0)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA230B70)

namespace UnityEngine
{
	inline static constexpr unsigned int GameObject_TypeDefinitionIndex = 31154;

	class GameObject : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CreatePrimitive(::UnityEngine::PrimitiveType* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::PrimitiveType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetComponent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET))(nullptr);
		}

		::UnityEngine::Component* GetComponent(::System::Type* arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void GetComponentFastPath(::System::Type* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Component* GetComponentByName(::System::String* str)
		{
			return (return (::UnityEngine::Component*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::Component* GetComponent(::System::String* str)
		{
			return (return (::UnityEngine::Component*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET))(str, nullptr);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetComponentInChildren()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET))(nullptr);
		}

		Il2CppObject* GetComponentInChildren(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetComponentInParent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetComponentInParent(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET))(arg, nullptr);
		}

		::System::Array* GetComponentsInternal(::System::Type* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Object* arg)
		{
			return (return (::System::Array*(*)(::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponents(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponents()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET))(nullptr);
		}

		::System::Void GetComponents(::System::Type* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetComponents(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInChildren(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInChildren(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInChildren(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Void GetComponentsInChildren(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInChildren()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET))(nullptr);
		}

		::System::Void GetComponentsInChildren(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInParent(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInParent(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetComponentsInParent(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInParent(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetComponentsInParent()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET))(nullptr);
		}

		::System::Boolean TryGetComponent(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetComponent(::System::Type* arg, ::UnityEngine::Component&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::UnityEngine::Component&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Component* TryGetComponentInternal(::System::Type* arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void TryGetComponentFastPath(::System::Type* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* FindWithTag(::System::String* str)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET))(str, nullptr);
		}

		::System::Void SendMessageUpwards(::System::String* str, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET))(str, arg, nullptr);
		}

		::System::Void SendMessage(::System::String* str, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void BroadcastMessage(::System::String* str, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Component* AddComponentInternal(::System::String* str)
		{
			return (return (::UnityEngine::Component*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET))(str, nullptr);
		}

		::UnityEngine::Component* Internal_AddComponentWithType(::System::Type* arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Component* AddComponent(::System::Type* arg)
		{
			return (return (::UnityEngine::Component*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AddComponent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Int32 get_layer()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET))(nullptr);
		}

		::System::Void set_layer(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_active()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_active(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_activeSelf()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET))(nullptr);
		}

		::System::Boolean get_activeInHierarchy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET))(nullptr);
		}

		::System::Void SetActiveRecursively(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isStatic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET))(nullptr);
		}

		::System::Void set_isStatic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isStaticBatchable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET))(nullptr);
		}

		::System::String* get_tag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET))(nullptr);
		}

		::System::Void set_tag(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET))(str, nullptr);
		}

		::System::Boolean CompareTag(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET))(str, nullptr);
		}

		::UnityEngine::GameObject* FindGameObjectWithTag(::System::String* str)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindGameObjectsWithTag(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET))(str, nullptr);
		}

		::System::Void SendMessageUpwards(::System::String* str, ::System::Object* arg, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SendMessageUpwards(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET))(str, arg, nullptr);
		}

		::System::Void SendMessageUpwards(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET))(str, nullptr);
		}

		::System::Void SendMessage(::System::String* str, ::System::Object* arg, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void SendMessage(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SendMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void BroadcastMessage(::System::String* str, ::System::Object* arg, ::UnityEngine::SendMessageOptions* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void BroadcastMessage(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void BroadcastMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Internal_CreateGameObject(::UnityEngine::GameObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::GameObject* Find(::System::String* str)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FIND_OFFSET))(str, nullptr);
		}

		::UnityEngine::SceneManagement::Scene* get_scene()
		{
			return (return (::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENE_OFFSET))(nullptr);
		}

		::System::UInt64 get_sceneCullingMask()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENECULLINGMASK_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void get_scene_Injected(::UnityEngine::SceneManagement::Scene&* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

