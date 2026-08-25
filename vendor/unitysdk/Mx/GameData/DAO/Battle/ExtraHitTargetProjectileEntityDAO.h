#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ExtraHitTargetProjectileEntityDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x172F050)
#define MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1730440)
#define MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1730550)
#define MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1730660)
#define MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1730F60)
#define MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1730670)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ExtraHitTargetProjectileEntityDAO_TypeDefinitionIndex = 15501;

	class ExtraHitTargetProjectileEntityDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* ExtraHitCheckTargetSide; // 0x1D8
		::MX::Logic::Skills::TargetEntityType* ExtraHitCheckTargetEntityType; // 0x1DC
		::System::Boolean Piercing; // 0x1E0
		::System::Int32 MaxExtraHitCount; // 0x1E4

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXTRAHITTARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

