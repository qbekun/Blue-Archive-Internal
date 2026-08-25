#pragma once
#include "unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeVolumeState; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeAsset; }

	inline static constexpr unsigned int SerializableAssetItem_TypeDefinitionIndex = 33818;

	class SerializableAssetItem : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::ProbeVolumeState* state; // 0x10
		::UnityEngine::Experimental::Rendering::ProbeVolumeAsset* asset; // 0x18

	};

