#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SpawnPoint; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define SPAWNPOINTVISUAL_GET_SPAWNPOINTBASE_OFFSET UNITYSDK_OFFSET(0x1815A80)
#define SPAWNPOINTVISUAL_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1815A90)
#define SPAWNPOINTVISUAL_SETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x1815B30)
#define SPAWNPOINTVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET UNITYSDK_OFFSET(0x1815BF0)
#define SPAWNPOINTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1815C00)
#define SPAWNPOINTVISUAL_SETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1815C10)

	inline static constexpr unsigned int SpawnPointVisual_TypeDefinitionIndex = 1255;

	class SpawnPointVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SpawnPoint* SpawnPoint; // 0x18

		::MX::Logic::BattleEntities::SpawnPointBase* get_SpawnPointBase()
		{
			return ((::MX::Logic::BattleEntities::SpawnPointBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTVISUAL_GET_SPAWNPOINTBASE_OFFSET))(nullptr);
		}

		::System::Void SetTransform(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTVISUAL_SETTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void SetSpawnPoint(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTVISUAL_SETSPAWNPOINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean SavePointDataVisualToLogic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetGameObjectName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPAWNPOINTVISUAL_SETGAMEOBJECTNAME_OFFSET))(nullptr);
		}

	};

