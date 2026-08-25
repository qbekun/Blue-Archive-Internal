#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class InstantiationParameters; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANCEPROVIDER_PROVIDEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA0EAA60)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANCEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EAB10)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANCEPROVIDER_RELEASEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA0EAB90)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int InstanceProvider_TypeDefinitionIndex = 36398;

	class InstanceProvider : public Il2CppObject
	{
	public:
		Il2CppObject* m_InstanceObjectToPrefabHandle; // 0x10

		::UnityEngine::GameObject* ProvideInstance(::UnityEngine::ResourceManagement::ResourceManager* arg, Il2CppObject* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::ResourceManagement::ResourceManager*, Il2CppObject*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANCEPROVIDER_PROVIDEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANCEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReleaseInstance(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_INSTANCEPROVIDER_RELEASEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

	};
}

