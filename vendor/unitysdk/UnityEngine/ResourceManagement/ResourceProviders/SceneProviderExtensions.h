#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class ISceneProvider; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::SceneManagement { class UnloadSceneOptions; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDEREXTENSIONS_RELEASESCENE_OFFSET UNITYSDK_OFFSET(0xA0EB1A0)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int SceneProviderExtensions_TypeDefinitionIndex = 36405;

	class SceneProviderExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* ReleaseScene(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider* arg, ::UnityEngine::ResourceManagement::ResourceManager* arg, Il2CppObject* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*, ::UnityEngine::ResourceManagement::ResourceManager*, Il2CppObject*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDEREXTENSIONS_RELEASESCENE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

