#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class NavMeshObstacleShape; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshObstacleShape_TypeDefinitionIndex = 37494;

	class NavMeshObstacleShape : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AI::NavMeshObstacleShape* Capsule; // 0x0
		::UnityEngine::AI::NavMeshObstacleShape* Box; // 0x0

	};
}

