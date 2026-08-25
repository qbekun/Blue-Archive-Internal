#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x146F970)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x146F990)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_GET_SPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x146F9A0)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x146F9B0)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146FBB0)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SET_SPAWNGROUPID_OFFSET UNITYSDK_OFFSET(0x1470010)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1470000)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1470020)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1470030)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SET_ROTKEY_OFFSET UNITYSDK_OFFSET(0x1470040)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_GET_ROTKEY_OFFSET UNITYSDK_OFFSET(0x1470050)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1470060)
#define MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1470070)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int EnemySpawnPointInfo_TypeDefinitionIndex = 15124;

	class EnemySpawnPointInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _Pos_k__BackingField; // 0x10
		::System::UInt32 _RotKey_k__BackingField; // 0x1C
		::System::Int64 _CharacterId_k__BackingField; // 0x20
		::System::Int32 _SpawnGroupId_k__BackingField; // 0x28

		::UnityEngine::Vector3* get_Pos()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_GET_POS_OFFSET))(nullptr);
		}

		::System::Void set_Pos(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SET_POS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SpawnGroupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_GET_SPAWNGROUPID_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::EnemySpawnPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::EnemySpawnPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SpawnGroupId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SET_SPAWNGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_RotKey(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SET_ROTKEY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_RotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_GET_ROTKEY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::EnemySpawnPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::EnemySpawnPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_ENEMYSPAWNPOINTINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

