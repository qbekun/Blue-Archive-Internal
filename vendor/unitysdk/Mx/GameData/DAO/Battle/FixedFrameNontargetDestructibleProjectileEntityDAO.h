#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class CharacterEntityDAO; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerDAO; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FixedFrameNontargetDestructibleProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x175A1D0)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x175A220)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x175AB70)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x175AB80)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x175AC90)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x175E2D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int FixedFrameNontargetDestructibleProjectileEntityDAO_TypeDefinitionIndex = 15519;

	class FixedFrameNontargetDestructibleProjectileEntityDAO : public Il2CppObject
	{
	public:
		::MX::GameData::DAO::Battle::CharacterEntityDAO* CharacterEntityForStat; // 0x200
		::MX::GameData::DAO::Battle::SkillEntitySpawnerDAO* DestroyedSpawnEntity; // 0x208

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FixedFrameNontargetDestructibleProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

