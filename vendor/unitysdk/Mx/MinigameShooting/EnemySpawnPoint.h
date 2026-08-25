#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINT_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x146A050)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINT_SPAWN_OFFSET UNITYSDK_OFFSET(0x146A0D0)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x146A2E0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int EnemySpawnPoint_TypeDefinitionIndex = 15110;

	class EnemySpawnPoint : public Il2CppObject
	{
	public:
		::System::Int64 CharacterID; // 0x18
		::System::Int32 SpawnGroupId; // 0x20

		::System::Void OnDrawGizmos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINT_ONDRAWGIZMOS_OFFSET))(nullptr);
		}

		::System::Void Spawn(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINT_SPAWN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINT_.CTOR_OFFSET))(nullptr);
		}

	};
}

