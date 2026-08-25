#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class ObstaclePoint; }
class BlockedArea;

#define <>C__DISPLAYCLASS55_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x118DE30)
#define <>C__DISPLAYCLASS55_2__FINDPATHTOOBSTACLEPOINT_B__2_OFFSET UNITYSDK_OFFSET(0x118DE50)

	inline static constexpr unsigned int <>c__DisplayClass55_2_TypeDefinitionIndex = 13254;

	class <>c__DisplayClass55_2 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::ObstaclePoint* a; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS55_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindPathToObstaclePoint_b__2(BlockedArea* arg)
		{
			return ((::System::Boolean(*)(BlockedArea*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS55_2__FINDPATHTOOBSTACLEPOINT_B__2_OFFSET))(arg, nullptr);
		}

	};

