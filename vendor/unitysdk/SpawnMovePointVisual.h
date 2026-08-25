#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SpawnMovePoint; }

#define SPAWNMOVEPOINTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1815A70)

	inline static constexpr unsigned int SpawnMovePointVisual_TypeDefinitionIndex = 1254;

	class SpawnMovePointVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SpawnMovePoint* MovePoint; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNMOVEPOINTVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

