#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class NavMeshPathStatus; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshPathStatus_TypeDefinitionIndex = 37489;

	class NavMeshPathStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AI::NavMeshPathStatus* PathComplete; // 0x0
		::UnityEngine::AI::NavMeshPathStatus* PathPartial; // 0x0
		::UnityEngine::AI::NavMeshPathStatus* PathInvalid; // 0x0

	};
}

