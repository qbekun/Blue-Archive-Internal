#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PlayMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int PlayMode_TypeDefinitionIndex = 36444;

	class PlayMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::PlayMode* StopSameLayer; // 0x0
		::UnityEngine::PlayMode* StopAll; // 0x0

	};
}

