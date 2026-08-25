#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayState; }

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayState_TypeDefinitionIndex = 31615;

	class PlayState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Playables::PlayState* Paused; // 0x0
		::UnityEngine::Playables::PlayState* Playing; // 0x0
		::UnityEngine::Playables::PlayState* Delayed; // 0x0

	};
}

