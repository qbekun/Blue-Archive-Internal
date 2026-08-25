#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ResourcesAPI; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ResourceRequest; }

#define UNITYENGINE_RESOURCESAPI_GET_ACTIVEAPI_OFFSET UNITYSDK_OFFSET(0xA22D4A0)
#define UNITYENGINE_RESOURCESAPI_GET_OVERRIDEAPI_OFFSET UNITYSDK_OFFSET(0xA22D590)
#define UNITYENGINE_RESOURCESAPI_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22D5E0)
#define UNITYENGINE_RESOURCESAPI_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0xA22D5F0)
#define UNITYENGINE_RESOURCESAPI_FINDSHADERBYNAME_OFFSET UNITYSDK_OFFSET(0xA22D630)
#define UNITYENGINE_RESOURCESAPI_LOAD_OFFSET UNITYSDK_OFFSET(0xA22D670)
#define UNITYENGINE_RESOURCESAPI_LOADALL_OFFSET UNITYSDK_OFFSET(0xA22D6B0)
#define UNITYENGINE_RESOURCESAPI_LOADASYNC_OFFSET UNITYSDK_OFFSET(0xA22D6F0)
#define UNITYENGINE_RESOURCESAPI_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0xA22D760)
#define UNITYENGINE_RESOURCESAPI_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA22D7A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ResourcesAPI_TypeDefinitionIndex = 31128;

	class ResourcesAPI : public Il2CppObject
	{
	public:
		::UnityEngine::ResourcesAPI* s_DefaultAPI; // 0x0
		::UnityEngine::ResourcesAPI* _overrideAPI_k__BackingField; // 0x8

		::UnityEngine::ResourcesAPI* get_ActiveAPI()
		{
			return (return (::UnityEngine::ResourcesAPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_GET_ACTIVEAPI_OFFSET))(nullptr);
		}

		::UnityEngine::ResourcesAPI* get_overrideAPI()
		{
			return (return (::UnityEngine::ResourcesAPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_GET_OVERRIDEAPI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* FindObjectsOfTypeAll(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_FINDOBJECTSOFTYPEALL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Shader* FindShaderByName(::System::String* str)
		{
			return (return (::UnityEngine::Shader*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_FINDSHADERBYNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::Object* Load(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_LOAD_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* LoadAll(::System::String* str, ::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_LOADALL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::ResourceRequest* LoadAsync(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::ResourceRequest*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_LOADASYNC_OFFSET))(str, arg, nullptr);
		}

		::System::Void UnloadAsset(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_UNLOADASSET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCESAPI_.CCTOR_OFFSET))(nullptr);
		}

	};
}

