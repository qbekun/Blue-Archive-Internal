#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class FindObjectsSortMode; }
namespace UnityEngine { class FindObjectsInactive; }
namespace UnityEngine { class HideFlags; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_OBJECT_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA233E80)
#define UNITYENGINE_OBJECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA234020)
#define UNITYENGINE_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA234030)
#define UNITYENGINE_OBJECT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA2342D0)
#define UNITYENGINE_OBJECT_COMPAREBASEOBJECTS_OFFSET UNITYSDK_OFFSET(0xA2341D0)
#define UNITYENGINE_OBJECT_ENSURERUNNINGONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0xA234380)
#define UNITYENGINE_OBJECT_ISNATIVEOBJECTALIVE_OFFSET UNITYSDK_OFFSET(0xA234320)
#define UNITYENGINE_OBJECT_GETCACHEDPTR_OFFSET UNITYSDK_OFFSET(0xA2344A0)
#define UNITYENGINE_OBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA2344B0)
#define UNITYENGINE_OBJECT_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA234580)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA234650)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA234A20)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA234DA0)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA234F70)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xA234FD0)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_DESTROY_OFFSET UNITYSDK_OFFSET(0xA235240)
#define UNITYENGINE_OBJECT_DESTROY_OFFSET UNITYSDK_OFFSET(0xA235290)
#define UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xA235320)
#define UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xA235360)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0xA2353F0)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0xA235480)
#define UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET UNITYSDK_OFFSET(0xA2354C0)
#define UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET UNITYSDK_OFFSET(0xA235550)
#define UNITYENGINE_OBJECT_DONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0xA2355A0)
#define UNITYENGINE_OBJECT_GET_HIDEFLAGS_OFFSET UNITYSDK_OFFSET(0xA2355E0)
#define UNITYENGINE_OBJECT_SET_HIDEFLAGS_OFFSET UNITYSDK_OFFSET(0xA235620)
#define UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0xA235660)
#define UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0xA235700)
#define UNITYENGINE_OBJECT_FINDSCENEOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0xA235790)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEINCLUDINGASSETS_OFFSET UNITYSDK_OFFSET(0xA235860)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDFIRSTOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDANYOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDFIRSTOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDANYOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0xA2358A0)
#define UNITYENGINE_OBJECT_CHECKNULLARGUMENT_OFFSET UNITYSDK_OFFSET(0xA234920)
#define UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET UNITYSDK_OFFSET(0xA235930)
#define UNITYENGINE_OBJECT_FINDFIRSTOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0xA2359D0)
#define UNITYENGINE_OBJECT_FINDANYOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0xA235A90)
#define UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET UNITYSDK_OFFSET(0xA235B40)
#define UNITYENGINE_OBJECT_FINDFIRSTOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0xA235BE0)
#define UNITYENGINE_OBJECT_FINDANYOBJECTBYTYPE_OFFSET UNITYSDK_OFFSET(0xA235CA0)
#define UNITYENGINE_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA235D50)
#define UNITYENGINE_OBJECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA234180)
#define UNITYENGINE_OBJECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA22FFE0)
#define UNITYENGINE_OBJECT_GETOFFSETOFINSTANCEIDINCPLUSPLUSOBJECT_OFFSET UNITYSDK_OFFSET(0xA233FE0)
#define UNITYENGINE_OBJECT_CURRENTTHREADISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0xA234460)
#define UNITYENGINE_OBJECT_INTERNAL_CLONESINGLE_OFFSET UNITYSDK_OFFSET(0xA234F30)
#define UNITYENGINE_OBJECT_INTERNAL_CLONESINGLEWITHPARENT_OFFSET UNITYSDK_OFFSET(0xA2351F0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_OFFSET UNITYSDK_OFFSET(0xA234980)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_OFFSET UNITYSDK_OFFSET(0xA234D00)
#define UNITYENGINE_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA235DE0)
#define UNITYENGINE_OBJECT_GETNAME_OFFSET UNITYSDK_OFFSET(0xA234540)
#define UNITYENGINE_OBJECT_ISPERSISTENT_OFFSET UNITYSDK_OFFSET(0xA235EC0)
#define UNITYENGINE_OBJECT_SETNAME_OFFSET UNITYSDK_OFFSET(0xA234610)
#define UNITYENGINE_OBJECT_DOESOBJECTWITHINSTANCEIDEXIST_OFFSET UNITYSDK_OFFSET(0xA235F00)
#define UNITYENGINE_OBJECT_FINDOBJECTFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA235F40)
#define UNITYENGINE_OBJECT_FORCELOADFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA235F80)
#define UNITYENGINE_OBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22F5B0)
#define UNITYENGINE_OBJECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA235FC0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA235E20)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA235E70)

namespace UnityEngine
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 31179;

	class Object : public Il2CppObject
	{
	public:
		::System::Int32 m_CachedPtr; // 0x10
		::System::Int32 OffsetOfInstanceIDInCPlusPlusObject; // 0x0
		::System::String* objectIsNullMessage; // 0x0
		::System::String* cloneDestroyedMessage; // 0x0

		::System::Int32 GetInstanceID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETINSTANCEID_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Implicit(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CompareBaseObjects(::UnityEngine::Object* arg, ::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_COMPAREBASEOBJECTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureRunningOnMainThread()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ENSURERUNNINGONMAINTHREAD_OFFSET))(nullptr);
		}

		::System::Boolean IsNativeObjectAlive(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ISNATIVEOBJECTALIVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCachedPtr()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETCACHEDPTR_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SET_NAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::Object* Instantiate(::UnityEngine::Object* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Object* Instantiate(::UnityEngine::Object* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Object* Instantiate(::UnityEngine::Object* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* Instantiate(::UnityEngine::Object* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Object* Instantiate(::UnityEngine::Object* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Instantiate(Il2CppObject* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Object* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Destroy(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyImmediate(::UnityEngine::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyImmediate(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfType(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfType(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsByType(::System::Type* arg, ::UnityEngine::FindObjectsSortMode* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::UnityEngine::FindObjectsSortMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsByType(::System::Type* arg, ::UnityEngine::FindObjectsInactive* arg, ::UnityEngine::FindObjectsSortMode* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::UnityEngine::FindObjectsInactive*, ::UnityEngine::FindObjectsSortMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DontDestroyOnLoad(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DONTDESTROYONLOAD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::HideFlags* get_hideFlags()
		{
			return (return (::UnityEngine::HideFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GET_HIDEFLAGS_OFFSET))(nullptr);
		}

		::System::Void set_hideFlags(::UnityEngine::HideFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::HideFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SET_HIDEFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyObject(::UnityEngine::Object* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyObject(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindSceneObjectsOfType(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDSCENEOBJECTSOFTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfTypeIncludingAssets(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEINCLUDINGASSETS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfType()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsByType(::UnityEngine::FindObjectsSortMode* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::FindObjectsSortMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfType(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsByType(::UnityEngine::FindObjectsInactive* arg, ::UnityEngine::FindObjectsSortMode* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::FindObjectsInactive*, ::UnityEngine::FindObjectsSortMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* FindObjectOfType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* FindObjectOfType(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindFirstObjectByType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDFIRSTOBJECTBYTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* FindAnyObjectByType()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDANYOBJECTBYTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* FindFirstObjectByType(::UnityEngine::FindObjectsInactive* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::FindObjectsInactive*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDFIRSTOBJECTBYTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* FindAnyObjectByType(::UnityEngine::FindObjectsInactive* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::FindObjectsInactive*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDANYOBJECTBYTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfTypeAll(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEALL_OFFSET))(arg, nullptr);
		}

		::System::Void CheckNullArgument(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_CHECKNULLARGUMENT_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::Object* FindObjectOfType(::System::Type* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* FindFirstObjectByType(::System::Type* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDFIRSTOBJECTBYTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* FindAnyObjectByType(::System::Type* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDANYOBJECTBYTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* FindObjectOfType(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Object* FindFirstObjectByType(::System::Type* arg, ::UnityEngine::FindObjectsInactive* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Type*, ::UnityEngine::FindObjectsInactive*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDFIRSTOBJECTBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Object* FindAnyObjectByType(::System::Type* arg, ::UnityEngine::FindObjectsInactive* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Type*, ::UnityEngine::FindObjectsInactive*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDANYOBJECTBYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Object* arg, ::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Object* arg, ::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETOFFSETOFINSTANCEIDINCPLUSPLUSOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean CurrentThreadIsMainThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_CURRENTTHREADISMAINTHREAD_OFFSET))(nullptr);
		}

		::UnityEngine::Object* Internal_CloneSingle(::UnityEngine::Object* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_CLONESINGLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* Internal_CloneSingleWithParent(::UnityEngine::Object* arg, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_CLONESINGLEWITHPARENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Object* Internal_InstantiateSingle(::UnityEngine::Object* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Object* Internal_InstantiateSingleWithParent(::UnityEngine::Object* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString(::UnityEngine::Object* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetName(::UnityEngine::Object* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPersistent(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ISPERSISTENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetName(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SETNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean DoesObjectWithInstanceIDExist(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DOESOBJECTWITHINSTANCEIDEXIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* FindObjectFromInstanceID(::System::Int32 arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTFROMINSTANCEID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* ForceLoadFromInstanceID(::System::Int32 arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FORCELOADFROMINSTANCEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Object* Internal_InstantiateSingle_Injected(::UnityEngine::Object* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object* arg, ::UnityEngine::Transform* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

