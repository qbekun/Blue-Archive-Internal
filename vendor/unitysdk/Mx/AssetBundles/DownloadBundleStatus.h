#pragma once
#include "../../unitysdk.h"

namespace MX::AssetBundles { class DownloadBundleStatus; }

namespace MX::AssetBundles
{
	inline static constexpr unsigned int DownloadBundleStatus_TypeDefinitionIndex = 14983;

	class DownloadBundleStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::AssetBundles::DownloadBundleStatus* None; // 0x0
		::MX::AssetBundles::DownloadBundleStatus* DownloadSuccess; // 0x0

	};
}

