#pragma once
#include "unitysdk.h"

#define ENEMYSPAWNPOINTGROUPFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11D0400)
#define ENEMYSPAWNPOINTGROUPFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11CEF40)
#define ENEMYSPAWNPOINTGROUPFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11D0450)

	inline static constexpr unsigned int EnemySpawnPointGroupFormatter_TypeDefinitionIndex = 13367;

	class EnemySpawnPointGroupFormatter : public ::System::Diagnostics::Tracing::EventKeywords
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::EnemySpawnPointGroup&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::EnemySpawnPointGroup&*, ::PVOID))((::PBYTE)hIl2Cpp + ENEMYSPAWNPOINTGROUPFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEMYSPAWNPOINTGROUPFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::EnemySpawnPointGroup&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::EnemySpawnPointGroup&*, ::PVOID))((::PBYTE)hIl2Cpp + ENEMYSPAWNPOINTGROUPFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

