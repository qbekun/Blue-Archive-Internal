#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillUsePoint; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define SKILLUSEPOINTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1815880)
#define SKILLUSEPOINTVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET UNITYSDK_OFFSET(0x1815890)
#define SKILLUSEPOINTVISUAL_GET_SPAWNPOINTBASE_OFFSET UNITYSDK_OFFSET(0x18158A0)
#define SKILLUSEPOINTVISUAL_SETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x18158B0)
#define SKILLUSEPOINTVISUAL_SETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x1815910)
#define SKILLUSEPOINTVISUAL_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18159D0)

	inline static constexpr unsigned int SkillUsePointVisual_TypeDefinitionIndex = 1253;

	class SkillUsePointVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SkillUsePoint* SkillUsePoint; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SavePointDataVisualToLogic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SpawnPointBase* get_SpawnPointBase()
		{
			return ((::MX::Logic::BattleEntities::SpawnPointBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTVISUAL_GET_SPAWNPOINTBASE_OFFSET))(nullptr);
		}

		::System::Void SetGameObjectName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTVISUAL_SETGAMEOBJECTNAME_OFFSET))(nullptr);
		}

		::System::Void SetSpawnPoint(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTVISUAL_SETSPAWNPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransform(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLUSEPOINTVISUAL_SETTRANSFORM_OFFSET))(arg, nullptr);
		}

	};

