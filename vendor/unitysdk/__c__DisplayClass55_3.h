#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class ObstaclePoint; }
class <>c__DisplayClass55_0;
class BlockedArea;

#define <>C__DISPLAYCLASS55_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1189EF0)
#define <>C__DISPLAYCLASS55_3__FINDPATHTOOBSTACLEPOINT_B__3_OFFSET UNITYSDK_OFFSET(0x118DE80)

	inline static constexpr unsigned int <>c__DisplayClass55_3_TypeDefinitionIndex = 13255;

	class <>c__DisplayClass55_3 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::ObstaclePoint* point; // 0x10
		<>c__DisplayClass55_0* CS$__8__locals2; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS55_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindPathToObstaclePoint_b__3(BlockedArea* arg)
		{
			return ((::System::Boolean(*)(BlockedArea*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS55_3__FINDPATHTOOBSTACLEPOINT_B__3_OFFSET))(arg, nullptr);
		}

	};

