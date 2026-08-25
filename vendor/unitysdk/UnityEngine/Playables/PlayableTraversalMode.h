#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableTraversalMode; }

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableTraversalMode_TypeDefinitionIndex = 31611;

	class PlayableTraversalMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Playables::PlayableTraversalMode* Mix; // 0x0
		::UnityEngine::Playables::PlayableTraversalMode* Passthrough; // 0x0

	};
}

