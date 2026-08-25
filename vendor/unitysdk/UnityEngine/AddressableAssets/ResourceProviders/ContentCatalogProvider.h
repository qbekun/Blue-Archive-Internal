#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }

#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCEPROVIDERS_CONTENTCATALOGPROVIDER_RELEASE_OFFSET UNITYSDK_OFFSET(0x9E11CE0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCEPROVIDERS_CONTENTCATALOGPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0x9E11DC0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCEPROVIDERS_CONTENTCATALOGPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E120B0)

namespace UnityEngine::AddressableAssets::ResourceProviders
{
	inline static constexpr unsigned int ContentCatalogProvider_TypeDefinitionIndex = 36218;

	class ContentCatalogProvider : public Il2CppObject
	{
	public:
		::System::Boolean DisableCatalogUpdateOnStart; // 0x20
		::System::Boolean IsLocalCatalogInBundle; // 0x21
		::System::Boolean UseBinaryCatalog; // 0x22
		Il2CppObject* m_LocationToCatalogLoadOpMap; // 0x28
		::UnityEngine::ResourceManagement::ResourceManager* m_RM; // 0x30

		::System::Void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCEPROVIDERS_CONTENTCATALOGPROVIDER_RELEASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCEPROVIDERS_CONTENTCATALOGPROVIDER_PROVIDE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::ResourceManagement::ResourceManager* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCEPROVIDERS_CONTENTCATALOGPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

