#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_ASSETBUNDLESERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1443770)
#define MX_ASSETBUNDLES_ASSETBUNDLESERVICE_LOADLOCALHASH_OFFSET UNITYSDK_OFFSET(0x1443780)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int AssetBundleService_TypeDefinitionIndex = 14943;

	class AssetBundleService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ASSETBUNDLESERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* LoadLocalHash(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_ASSETBUNDLESERVICE_LOADLOCALHASH_OFFSET))(str, nullptr);
		}

	};
}

