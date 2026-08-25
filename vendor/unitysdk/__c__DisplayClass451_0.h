#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class GroundObstacle; }

#define <>C__DISPLAYCLASS451_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1268F00)
#define <>C__DISPLAYCLASS451_0__DESTROYOBSTACLES_B__0_OFFSET UNITYSDK_OFFSET(0x126C690)

	inline static constexpr unsigned int <>c__DisplayClass451_0_TypeDefinitionIndex = 13995;

	class <>c__DisplayClass451_0 : public Il2CppObject
	{
	public:
		::System::String* commandID; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS451_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _DestroyObstacles_b__0(::MX::Logic::BattleEntities::GroundObstacle* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS451_0__DESTROYOBSTACLES_B__0_OFFSET))(arg, nullptr);
		}

	};

