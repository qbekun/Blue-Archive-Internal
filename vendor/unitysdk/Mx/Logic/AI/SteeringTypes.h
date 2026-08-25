#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::AI { class SteeringTypes; }

namespace MX::Logic::AI
{
	inline static constexpr unsigned int SteeringTypes_TypeDefinitionIndex = 14496;

	class SteeringTypes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::AI::SteeringTypes* None; // 0x0
		::MX::Logic::AI::SteeringTypes* Seek; // 0x0
		::MX::Logic::AI::SteeringTypes* Flee; // 0x0
		::MX::Logic::AI::SteeringTypes* Forward; // 0x0
		::MX::Logic::AI::SteeringTypes* Backward; // 0x0
		::MX::Logic::AI::SteeringTypes* Wander; // 0x0
		::MX::Logic::AI::SteeringTypes* Separation; // 0x0
		::MX::Logic::AI::SteeringTypes* Alignment; // 0x0
		::MX::Logic::AI::SteeringTypes* Cohesion; // 0x0
		::MX::Logic::AI::SteeringTypes* AvoidObstacle; // 0x0
		::MX::Logic::AI::SteeringTypes* AvoidWall; // 0x0
		::MX::Logic::AI::SteeringTypes* Pursuit; // 0x0
		::MX::Logic::AI::SteeringTypes* Evade; // 0x0
		::MX::Logic::AI::SteeringTypes* Arrive; // 0x0
		::MX::Logic::AI::SteeringTypes* InterPose; // 0x0
		::MX::Logic::AI::SteeringTypes* Breakthrough; // 0x0
		::MX::Logic::AI::SteeringTypes* Stop; // 0x0
		::MX::Logic::AI::SteeringTypes* All; // 0x0

	};
}

