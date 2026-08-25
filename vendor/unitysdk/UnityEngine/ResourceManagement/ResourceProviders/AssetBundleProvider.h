#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_RELEASE_OFFSET UNITYSDK_OFFSET(0xA0E92D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_GETDEFAULTTYPE_OFFSET UNITYSDK_OFFSET(0xA0E9460)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_WAITFORALLUNLOADINGBUNDLESTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA0E94C0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0xA0E94D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E9540)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int AssetBundleProvider_TypeDefinitionIndex = 36392;

	class AssetBundleProvider : public Il2CppObject
	{
	public:
		::System::Void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_RELEASE_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::System::Type*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_GETDEFAULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void WaitForAllUnloadingBundlesToComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_WAITFORALLUNLOADINGBUNDLESTOCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_PROVIDE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLEPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

