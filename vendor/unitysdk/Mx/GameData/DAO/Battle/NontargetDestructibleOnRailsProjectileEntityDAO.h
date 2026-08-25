#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class NontargetDestructibleOnRailsProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x173EFC0)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x173F9A0)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x173EFD0)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x173FAF0)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x173FC00)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17435D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int NontargetDestructibleOnRailsProjectileEntityDAO_TypeDefinitionIndex = 15507;

	class NontargetDestructibleOnRailsProjectileEntityDAO : public Il2CppObject
	{
	public:
		::System::Boolean UseMovePoints; // 0x218
		Il2CppObject* MovePointCommandIdList; // 0x220
		::System::Boolean RepeatMove; // 0x228
		::System::Boolean AllowDuplicateHit; // 0x229

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

