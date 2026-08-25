#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_LEGACYRESOURCESPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EB3E0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_LEGACYRESOURCESPROVIDER_RELEASE_OFFSET UNITYSDK_OFFSET(0xA0EB3F0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_LEGACYRESOURCESPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0xA0EB520)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int LegacyResourcesProvider_TypeDefinitionIndex = 36408;

	class LegacyResourcesProvider : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_LEGACYRESOURCESPROVIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_LEGACYRESOURCESPROVIDER_RELEASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_LEGACYRESOURCESPROVIDER_PROVIDE_OFFSET))(arg, nullptr);
		}

	};
}

