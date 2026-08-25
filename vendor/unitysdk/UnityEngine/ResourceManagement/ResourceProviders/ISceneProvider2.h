#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::SceneManagement { class UnloadSceneOptions; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ISCENEPROVIDER2_RELEASESCENE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int ISceneProvider2_TypeDefinitionIndex = 36404;

	class ISceneProvider2 : public Il2CppObject
	{
	public:
		Il2CppObject* ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager* arg, Il2CppObject* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, Il2CppObject*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ISCENEPROVIDER2_RELEASESCENE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

