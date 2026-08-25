#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Hash128; }
namespace UnityEngine { class Hash128&; }

#define UNITYENGINE_ASSETBUNDLEMANIFEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DA4C0)
#define UNITYENGINE_ASSETBUNDLEMANIFEST_GETASSETBUNDLEHASH_OFFSET UNITYSDK_OFFSET(0xA1DA510)
#define UNITYENGINE_ASSETBUNDLEMANIFEST_GETASSETBUNDLEHASH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1DA570)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleManifest_TypeDefinitionIndex = 37963;

	class AssetBundleManifest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEMANIFEST_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Hash128* GetAssetBundleHash(::System::String* str)
		{
			return (return (::UnityEngine::Hash128*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEMANIFEST_GETASSETBUNDLEHASH_OFFSET))(str, nullptr);
		}

		::System::Void GetAssetBundleHash_Injected(::System::String* str, ::UnityEngine::Hash128&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Hash128&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEMANIFEST_GETASSETBUNDLEHASH_INJECTED_OFFSET))(str, arg, nullptr);
		}

	};
}

