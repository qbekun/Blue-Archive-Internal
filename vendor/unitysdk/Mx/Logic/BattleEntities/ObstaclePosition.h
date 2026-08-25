#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class ObstaclePoint; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }

#define MX_LOGIC_BATTLEENTITIES_OBSTACLEPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x118DE40)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ObstaclePosition_TypeDefinitionIndex = 13261;

	class ObstaclePosition : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::ObstaclePoint* ObstaclePoint; // 0x10
		::MX::Logic::BattleEntities::GroundObstacle* GroundObstacle; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_OBSTACLEPOSITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

