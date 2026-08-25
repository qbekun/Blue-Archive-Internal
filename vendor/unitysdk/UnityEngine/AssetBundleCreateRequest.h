#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AssetBundle; }

#define UNITYENGINE_ASSETBUNDLECREATEREQUEST_GET_ASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA1DA470)
#define UNITYENGINE_ASSETBUNDLECREATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DA4B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleCreateRequest_TypeDefinitionIndex = 37962;

	class AssetBundleCreateRequest : public ::Unity::Burst::BurstRuntime
	{
	public:
		::UnityEngine::AssetBundle* get_assetBundle()
		{
			return (return (::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLECREATEREQUEST_GET_ASSETBUNDLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLECREATEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

