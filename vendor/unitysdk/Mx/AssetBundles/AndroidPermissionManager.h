#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_ANDROIDPERMISSIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1443700)
#define MX_ASSETBUNDLES_ANDROIDPERMISSIONMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1443710)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int AndroidPermissionManager_TypeDefinitionIndex = 14942;

	class AndroidPermissionManager : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ANDROIDPERMISSIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ANDROIDPERMISSIONMANAGER_START_OFFSET))(nullptr);
		}

	};
}

