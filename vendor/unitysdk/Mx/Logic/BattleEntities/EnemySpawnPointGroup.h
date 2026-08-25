#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11CECC0)
#define MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CEF80)
#define MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11CFB10)
#define MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x11CFB00)
#define MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11D03F0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int EnemySpawnPointGroup_TypeDefinitionIndex = 13368;

	class EnemySpawnPointGroup : public Il2CppObject
	{
	public:
		::System::String* GroupName; // 0x10
		Il2CppObject* SpawnPoints; // 0x18

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::BattleEntities::EnemySpawnPointGroup&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::BattleEntities::EnemySpawnPointGroup&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::BattleEntities::EnemySpawnPointGroup&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::BattleEntities::EnemySpawnPointGroup&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_ENEMYSPAWNPOINTGROUP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

