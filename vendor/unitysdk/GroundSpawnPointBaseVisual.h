#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define GROUNDSPAWNPOINTBASEVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUNDSPAWNPOINTBASEVISUAL_SETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUNDSPAWNPOINTBASEVISUAL_GET_SPAWNPOINTBASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUNDSPAWNPOINTBASEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814B00)
#define GROUNDSPAWNPOINTBASEVISUAL_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define GROUNDSPAWNPOINTBASEVISUAL_SETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int GroundSpawnPointBaseVisual_TypeDefinitionIndex = 1248;

	class GroundSpawnPointBaseVisual : public Il2CppObject
	{
	public:
		::System::Boolean SavePointDataVisualToLogic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDSPAWNPOINTBASEVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET))(nullptr);
		}

		::System::Void SetGameObjectName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDSPAWNPOINTBASEVISUAL_SETGAMEOBJECTNAME_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SpawnPointBase* get_SpawnPointBase()
		{
			return ((::MX::Logic::BattleEntities::SpawnPointBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDSPAWNPOINTBASEVISUAL_GET_SPAWNPOINTBASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDSPAWNPOINTBASEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTransform(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDSPAWNPOINTBASEVISUAL_SETTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpawnPoint(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDSPAWNPOINTBASEVISUAL_SETSPAWNPOINT_OFFSET))(arg, nullptr);
		}

	};

