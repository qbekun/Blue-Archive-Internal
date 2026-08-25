#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class CollectObjects; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int CollectObjects_TypeDefinitionIndex = 37903;

	class CollectObjects : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AI::CollectObjects* All; // 0x0
		::UnityEngine::AI::CollectObjects* Volume; // 0x0
		::UnityEngine::AI::CollectObjects* Children; // 0x0

	};
}

