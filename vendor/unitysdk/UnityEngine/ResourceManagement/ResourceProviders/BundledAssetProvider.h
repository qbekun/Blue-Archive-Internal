#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_BUNDLEDASSETPROVIDER_PROVIDE_OFFSET UNITYSDK_OFFSET(0xA0E98E0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_BUNDLEDASSETPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E9D30)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int BundledAssetProvider_TypeDefinitionIndex = 36395;

	class BundledAssetProvider : public Il2CppObject
	{
	public:
		::System::Void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_BUNDLEDASSETPROVIDER_PROVIDE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_BUNDLEDASSETPROVIDER_.CTOR_OFFSET))(nullptr);
		}

	};
}

