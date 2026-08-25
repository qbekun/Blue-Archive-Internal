#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class RandomSpawnPoint; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define RANDOMSPAWNPOINTVISUAL_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1815690)
#define RANDOMSPAWNPOINTVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET UNITYSDK_OFFSET(0x1815730)
#define RANDOMSPAWNPOINTVISUAL_SETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1815740)
#define RANDOMSPAWNPOINTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18157A0)
#define RANDOMSPAWNPOINTVISUAL_SETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x18157B0)
#define RANDOMSPAWNPOINTVISUAL_GET_SPAWNPOINTBASE_OFFSET UNITYSDK_OFFSET(0x1815870)

	inline static constexpr unsigned int RandomSpawnPointVisual_TypeDefinitionIndex = 1252;

	class RandomSpawnPointVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::RandomSpawnPoint* RandomSpawnPoint; // 0x18

		::System::Void SetTransform(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTVISUAL_SETTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Boolean SavePointDataVisualToLogic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET))(nullptr);
		}

		::System::Void SetGameObjectName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTVISUAL_SETGAMEOBJECTNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSpawnPoint(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTVISUAL_SETSPAWNPOINT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SpawnPointBase* get_SpawnPointBase()
		{
			return ((::MX::Logic::BattleEntities::SpawnPointBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMSPAWNPOINTVISUAL_GET_SPAWNPOINTBASE_OFFSET))(nullptr);
		}

	};

