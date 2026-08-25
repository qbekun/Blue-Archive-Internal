#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_SPAWNPOINT_SPAWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_SPAWNPOINT_SPAWN_OFFSET UNITYSDK_OFFSET(0x146A0F0)
#define MX_MINIGAMESHOOTING_SPAWNPOINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x14749C0)
#define MX_MINIGAMESHOOTING_SPAWNPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x146A2F0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int SpawnPoint_TypeDefinitionIndex = 15142;

	class SpawnPoint : public Il2CppObject
	{
	public:
		::System::Void Spawn(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SPAWNPOINT_SPAWN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Spawn(::System::Int32 arg, ::System::Int64 arg2, ::System::Boolean arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SPAWNPOINT_SPAWN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SPAWNPOINT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_SPAWNPOINT_.CTOR_OFFSET))(nullptr);
		}

	};
}

