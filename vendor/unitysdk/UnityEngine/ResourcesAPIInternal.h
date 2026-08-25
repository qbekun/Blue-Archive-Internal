#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Shader; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ResourceRequest; }

#define UNITYENGINE_RESOURCESAPIINTERNAL_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0xA22D320)
#define UNITYENGINE_RESOURCESAPIINTERNAL_FINDSHADERBYNAME_OFFSET UNITYSDK_OFFSET(0xA22D360)
#define UNITYENGINE_RESOURCESAPIINTERNAL_LOAD_OFFSET UNITYSDK_OFFSET(0xA22D3A0)
#define UNITYENGINE_RESOURCESAPIINTERNAL_LOADALL_OFFSET UNITYSDK_OFFSET(0xA22D3E0)
#define UNITYENGINE_RESOURCESAPIINTERNAL_LOADASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0xA22D420)
#define UNITYENGINE_RESOURCESAPIINTERNAL_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0xA22D460)

namespace UnityEngine
{
	inline static constexpr unsigned int ResourcesAPIInternal_TypeDefinitionIndex = 31127;

	class ResourcesAPIInternal : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* FindObjectsOfTypeAll(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPIINTERNAL_FINDOBJECTSOFTYPEALL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Shader* FindShaderByName(::System::String* str)
		{
			return (return (::UnityEngine::Shader*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPIINTERNAL_FINDSHADERBYNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::Object* Load(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPIINTERNAL_LOAD_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* LoadAll(::System::String* str, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPIINTERNAL_LOADALL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::ResourceRequest* LoadAsyncInternal(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::ResourceRequest*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPIINTERNAL_LOADASYNCINTERNAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void UnloadAsset(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPIINTERNAL_UNLOADASSET_OFFSET))(arg, nullptr);
		}

	};
}

