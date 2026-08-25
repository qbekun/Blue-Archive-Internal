#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }

#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_CACHEINITIALIZATION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E1B0F0)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_CACHEINITIALIZATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E1B220)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_CACHEINITIALIZATION_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x9E1B230)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_CACHEINITIALIZATION_GET_ROOTPATH_OFFSET UNITYSDK_OFFSET(0x9E1B3B0)

namespace UnityEngine::AddressableAssets::Initialization
{
	inline static constexpr unsigned int CacheInitialization_TypeDefinitionIndex = 36230;

	class CacheInitialization : public Il2CppObject
	{
	public:
		::System::Boolean Initialize(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_CACHEINITIALIZATION_INITIALIZE_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_CACHEINITIALIZATION_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_CACHEINITIALIZATION_INITIALIZEASYNC_OFFSET))(arg, str, str, nullptr);
		}

		::System::String* get_RootPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_CACHEINITIALIZATION_GET_ROOTPATH_OFFSET))(nullptr);
		}

	};
}

