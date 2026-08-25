#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ProjectileEntityDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class RandomProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C9D20)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17CA0A0)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17CA2A0)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17CA090)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CA2B0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int RandomProjectileEntityDAO_TypeDefinitionIndex = 15573;

	class RandomProjectileEntityDAO : public Il2CppObject
	{
	public:
		::System::Int32 SpawnProb; // 0x10
		::MX::GameData::DAO::Battle::ProjectileEntityDAO* ProjectileData; // 0x18

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RandomProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RandomProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RandomProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RandomProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

