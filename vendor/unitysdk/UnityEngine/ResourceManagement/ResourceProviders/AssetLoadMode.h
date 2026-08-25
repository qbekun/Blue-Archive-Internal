#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class AssetLoadMode; }

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int AssetLoadMode_TypeDefinitionIndex = 36387;

	class AssetLoadMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode* RequestedAssetAndDependencies; // 0x0
		::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode* AllPackedAssetsAndDependencies; // 0x0

	};
}

