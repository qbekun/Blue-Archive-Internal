#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class PlayerSpawnPointInfo; }
namespace MX::MinigameShooting { class ObstacleInfo; }

#define MX_MINIGAMESHOOTING_GROUPINFO_SET_TILES_OFFSET UNITYSDK_OFFSET(0x146D2F0)
#define MX_MINIGAMESHOOTING_GROUPINFO_SET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x146D300)
#define MX_MINIGAMESHOOTING_GROUPINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x146D310)
#define MX_MINIGAMESHOOTING_GROUPINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x146D320)
#define MX_MINIGAMESHOOTING_GROUPINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x146D330)
#define MX_MINIGAMESHOOTING_GROUPINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x146D340)
#define MX_MINIGAMESHOOTING_GROUPINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x146D350)
#define MX_MINIGAMESHOOTING_GROUPINFO_SET_PLAYERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x146D690)
#define MX_MINIGAMESHOOTING_GROUPINFO_GET_PLAYERSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x146D6A0)
#define MX_MINIGAMESHOOTING_GROUPINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x146D6B0)
#define MX_MINIGAMESHOOTING_GROUPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x146E570)
#define MX_MINIGAMESHOOTING_GROUPINFO_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x146E640)
#define MX_MINIGAMESHOOTING_GROUPINFO_SET_ENEMYSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x146E650)
#define MX_MINIGAMESHOOTING_GROUPINFO_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x146E660)
#define MX_MINIGAMESHOOTING_GROUPINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x146D360)
#define MX_MINIGAMESHOOTING_GROUPINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x146E6B0)
#define MX_MINIGAMESHOOTING_GROUPINFO_GET_ENEMYSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x146F0E0)
#define MX_MINIGAMESHOOTING_GROUPINFO_SET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x146F0F0)
#define MX_MINIGAMESHOOTING_GROUPINFO_GET_TILES_OFFSET UNITYSDK_OFFSET(0x146F100)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int GroupInfo_TypeDefinitionIndex = 15120;

	class GroupInfo : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::System::Int32 _Probability_k__BackingField; // 0x20
		::MX::MinigameShooting::PlayerSpawnPointInfo* _PlayerSpawnPoint_k__BackingField; // 0x28
		Il2CppObject* _EnemySpawnPoints_k__BackingField; // 0x30
		Il2CppObject* _Tiles_k__BackingField; // 0x38
		::MX::MinigameShooting::ObstacleInfo* _EndPoint_k__BackingField; // 0x40

		::System::Void set_Tiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_SET_TILES_OFFSET))(arg, nullptr);
		}

		::System::Void set_EndPoint(::MX::MinigameShooting::ObstacleInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::ObstacleInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_SET_ENDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_PlayerSpawnPoint(::MX::MinigameShooting::PlayerSpawnPointInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::PlayerSpawnPointInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_SET_PLAYERSPAWNPOINT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameShooting::PlayerSpawnPointInfo* get_PlayerSpawnPoint()
		{
			return ((::MX::MinigameShooting::PlayerSpawnPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_GET_PLAYERSPAWNPOINT_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::MinigameShooting::GroupInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::MinigameShooting::GroupInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_.CTOR_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::ObstacleInfo* get_EndPoint()
		{
			return ((::MX::MinigameShooting::ObstacleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_GET_ENDPOINT_OFFSET))(nullptr);
		}

		::System::Void set_EnemySpawnPoints(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_SET_ENEMYSPAWNPOINTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Probability()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_GET_PROBABILITY_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::MinigameShooting::GroupInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::MinigameShooting::GroupInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_EnemySpawnPoints()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_GET_ENEMYSPAWNPOINTS_OFFSET))(nullptr);
		}

		::System::Void set_Probability(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_SET_PROBABILITY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tiles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_GROUPINFO_GET_TILES_OFFSET))(nullptr);
		}

	};
}

