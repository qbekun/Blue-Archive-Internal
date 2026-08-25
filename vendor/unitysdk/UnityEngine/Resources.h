#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class ResourceRequest; }
namespace UnityEngine { class AsyncOperation; }

#define UNITYENGINE_RESOURCES_CONVERTOBJECTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0xA22D820)
#define UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCES_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCES_LOAD_OFFSET UNITYSDK_OFFSET(0xA22D250)
#define UNITYENGINE_RESOURCES_LOADASYNC_OFFSET UNITYSDK_OFFSET(0xA22D8B0)
#define UNITYENGINE_RESOURCES_LOADALL_OFFSET UNITYSDK_OFFSET(0xA22D940)
#define UNITYENGINE_RESOURCES_LOADALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET UNITYSDK_OFFSET(0xA22D9D0)
#define UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCES_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0xA22DA10)
#define UNITYENGINE_RESOURCES_UNLOADUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0xA22DAA0)

namespace UnityEngine
{
	inline static constexpr unsigned int Resources_TypeDefinitionIndex = 31129;

	class Resources : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* ConvertObjects(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_CONVERTOBJECTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfTypeAll(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfTypeAll()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET))(nullptr);
		}

		Il2CppObject* Load(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOAD_OFFSET))(str, nullptr);
		}

		::UnityEngine::Object* Load(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOAD_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::ResourceRequest* LoadAsync(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::ResourceRequest*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADASYNC_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* LoadAll(::System::String* str, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADALL_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* LoadAll(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADALL_OFFSET))(str, nullptr);
		}

		::UnityEngine::Object* GetBuiltinResource(::System::Type* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Object*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetBuiltinResource(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void UnloadAsset(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADASSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AsyncOperation* UnloadUnusedAssets()
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADUNUSEDASSETS_OFFSET))(nullptr);
		}

	};
}

