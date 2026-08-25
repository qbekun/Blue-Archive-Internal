#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class AssetBundle; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IASSETBUNDLERESOURCE_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int IAssetBundleResource_TypeDefinitionIndex = 36388;

	class IAssetBundleResource : public Il2CppObject
	{
	public:
		::UnityEngine::AssetBundle* GetAssetBundle()
		{
			return (return (::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_IASSETBUNDLERESOURCE_GETASSETBUNDLE_OFFSET))(nullptr);
		}

	};
}

