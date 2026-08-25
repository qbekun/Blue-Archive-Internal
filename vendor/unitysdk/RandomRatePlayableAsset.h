#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableAsset; }

	inline static constexpr unsigned int RandomRatePlayableAsset_TypeDefinitionIndex = 874;

	class RandomRatePlayableAsset : public Il2CppObject
	{
	public:
		::System::Int32 RandomRate; // 0x10
		::UnityEngine::Playables::PlayableAsset* PlayableAsset; // 0x18

	};

