#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class InstantiationParameters; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IINSTANCEPROVIDER_RELEASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IINSTANCEPROVIDER_PROVIDEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int IInstanceProvider_TypeDefinitionIndex = 36397;

	class IInstanceProvider : public Il2CppObject
	{
	public:
		::System::Void ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IINSTANCEPROVIDER_RELEASEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* ProvideInstance(::UnityEngine::ResourceManagement::ResourceManager* arg, Il2CppObject* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, Il2CppObject*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IINSTANCEPROVIDER_PROVIDEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

