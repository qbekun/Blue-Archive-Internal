#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class ObstacleAvoidanceType; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int ObstacleAvoidanceType_TypeDefinitionIndex = 37492;

	class ObstacleAvoidanceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AI::ObstacleAvoidanceType* NoObstacleAvoidance; // 0x0
		::UnityEngine::AI::ObstacleAvoidanceType* LowQualityObstacleAvoidance; // 0x0
		::UnityEngine::AI::ObstacleAvoidanceType* MedQualityObstacleAvoidance; // 0x0
		::UnityEngine::AI::ObstacleAvoidanceType* GoodQualityObstacleAvoidance; // 0x0
		::UnityEngine::AI::ObstacleAvoidanceType* HighQualityObstacleAvoidance; // 0x0

	};
}

