#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSETBUNDLEREQUEST_GETRESULT_OFFSET UNITYSDK_OFFSET(0xA1DA5C0)
#define UNITYENGINE_ASSETBUNDLEREQUEST_GET_ASSET_OFFSET UNITYSDK_OFFSET(0xA1DA600)
#define UNITYENGINE_ASSETBUNDLEREQUEST_GET_ALLASSETS_OFFSET UNITYSDK_OFFSET(0xA1DA620)
#define UNITYENGINE_ASSETBUNDLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DA660)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleRequest_TypeDefinitionIndex = 37965;

	class AssetBundleRequest : public Il2CppObject
	{
	public:
		::UnityEngine::Object* GetResult()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEREQUEST_GETRESULT_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_asset()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEREQUEST_GET_ASSET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_allAssets()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEREQUEST_GET_ALLASSETS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

