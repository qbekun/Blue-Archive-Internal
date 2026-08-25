#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::SceneManagement { class UnloadSceneOptions; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDER_RELEASESCENE_OFFSET UNITYSDK_OFFSET(0xA0EC220)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDER_UNITYENGINE.RESOURCEMANAGEMENT.RESOURCEPROVIDERS.ISCENEPROVIDER2.RELEASESCENE_OFFSET UNITYSDK_OFFSET(0xA0EC310)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EC540)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDER_PROVIDESCENE_OFFSET UNITYSDK_OFFSET(0xA0EC550)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int SceneProvider_TypeDefinitionIndex = 36415;

	class SceneProvider : public Il2CppObject
	{
	public:
		Il2CppObject* ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDER_RELEASESCENE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene(::UnityEngine::ResourceManagement::ResourceManager* arg, Il2CppObject* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, Il2CppObject*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDER_UNITYENGINE.RESOURCEMANAGEMENT.RESOURCEPROVIDERS.ISCENEPROVIDER2.RELEASESCENE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* ProvideScene(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_SCENEPROVIDER_PROVIDESCENE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

