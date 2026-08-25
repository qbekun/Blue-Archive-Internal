#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class RandomProjectileEntitySpawnerDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C6110)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17C7260)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17C78C0)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17C78D0)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C79E0)
#define MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17C9C30)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int RandomProjectileEntitySpawnerDAO_TypeDefinitionIndex = 15571;

	class RandomProjectileEntitySpawnerDAO : public Il2CppObject
	{
	public:
		Il2CppObject* EntityList; // 0x158

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_RANDOMPROJECTILEENTITYSPAWNERDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

