#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINT_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x14718C0)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1471940)
#define MX_MINIGAMESHOOTING_PLAYERSPAWNPOINT_SPAWN_OFFSET UNITYSDK_OFFSET(0x1471950)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PlayerSpawnPoint_TypeDefinitionIndex = 15129;

	class PlayerSpawnPoint : public Il2CppObject
	{
	public:
		::System::Void OnDrawGizmos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINT_ONDRAWGIZMOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Spawn(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSPAWNPOINT_SPAWN_OFFSET))(arg, arg2, nullptr);
		}

	};
}

