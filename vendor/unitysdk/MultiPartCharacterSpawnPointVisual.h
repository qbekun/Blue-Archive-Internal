#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class MultiPartCharacterSpawnPoint; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }

#define MULTIPARTCHARACTERSPAWNPOINTVISUAL_SETGAMEOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1814BA0)
#define MULTIPARTCHARACTERSPAWNPOINTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1814F10)
#define MULTIPARTCHARACTERSPAWNPOINTVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET UNITYSDK_OFFSET(0x1814F20)
#define MULTIPARTCHARACTERSPAWNPOINTVISUAL_GET_SPAWNPOINTBASE_OFFSET UNITYSDK_OFFSET(0x1815280)
#define MULTIPARTCHARACTERSPAWNPOINTVISUAL_SETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x1815290)
#define MULTIPARTCHARACTERSPAWNPOINTVISUAL_SETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1815350)

	inline static constexpr unsigned int MultiPartCharacterSpawnPointVisual_TypeDefinitionIndex = 1251;

	class MultiPartCharacterSpawnPointVisual : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::MultiPartCharacterSpawnPoint* MultiPartCharacterSpawnPoint; // 0x18

		::System::Void SetGameObjectName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTVISUAL_SETGAMEOBJECTNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SavePointDataVisualToLogic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTVISUAL_SAVEPOINTDATAVISUALTOLOGIC_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SpawnPointBase* get_SpawnPointBase()
		{
			return ((::MX::Logic::BattleEntities::SpawnPointBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTVISUAL_GET_SPAWNPOINTBASE_OFFSET))(nullptr);
		}

		::System::Void SetSpawnPoint(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTVISUAL_SETSPAWNPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTransform(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + MULTIPARTCHARACTERSPAWNPOINTVISUAL_SETTRANSFORM_OFFSET))(arg, nullptr);
		}

	};

