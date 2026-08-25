#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ISCENEPROVIDER_RELEASESCENE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ISCENEPROVIDER_PROVIDESCENE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int ISceneProvider_TypeDefinitionIndex = 36403;

	class ISceneProvider : public Il2CppObject
	{
	public:
		Il2CppObject* ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ISCENEPROVIDER_RELEASESCENE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ISCENEPROVIDER_PROVIDESCENE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

