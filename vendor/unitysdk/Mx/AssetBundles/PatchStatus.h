#pragma once
#include "../../unitysdk.h"

namespace MX::AssetBundles { class PatchStatus; }

namespace MX::AssetBundles
{
	inline static constexpr unsigned int PatchStatus_TypeDefinitionIndex = 14982;

	class PatchStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::AssetBundles::PatchStatus* None; // 0x0
		::MX::AssetBundles::PatchStatus* ClientNetworkUnreachable; // 0x0
		::MX::AssetBundles::PatchStatus* DownloadCatalogHashFailed; // 0x0
		::MX::AssetBundles::PatchStatus* DownloadCatalogFailed; // 0x0
		::MX::AssetBundles::PatchStatus* DownloadCatalogSuccess; // 0x0
		::MX::AssetBundles::PatchStatus* DownloadBundleFailed; // 0x0
		::MX::AssetBundles::PatchStatus* DownloadComplete; // 0x0

	};
}

