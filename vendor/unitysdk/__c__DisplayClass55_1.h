#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class GroundObstacle; }
class <>c__DisplayClass55_0;
namespace MX::Logic::BattleEntities { class ObstaclePoint; }

#define <>C__DISPLAYCLASS55_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1189E40)
#define <>C__DISPLAYCLASS55_1__FINDPATHTOOBSTACLEPOINT_B__1_OFFSET UNITYSDK_OFFSET(0x118DA50)

	inline static constexpr unsigned int <>c__DisplayClass55_1_TypeDefinitionIndex = 13253;

	class <>c__DisplayClass55_1 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::GroundObstacle* obstacle; // 0x10
		<>c__DisplayClass55_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS55_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _FindPathToObstaclePoint_b__1(::MX::Logic::BattleEntities::ObstaclePoint* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::ObstaclePoint*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS55_1__FINDPATHTOOBSTACLEPOINT_B__1_OFFSET))(arg, nullptr);
		}

	};

