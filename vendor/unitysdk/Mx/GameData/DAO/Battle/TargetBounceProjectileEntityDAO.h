#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BounceConditionCheckTiming; }
namespace MX::Logic::Data { class NontargetBounceCondition; }
namespace MX::GameData::DAO::Battle { class TargetBounceProjectileEntityDAO; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TargetBounceProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1729C50)
#define MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1729D60)
#define MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x172A6B0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x172BAE0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x172EE90)
#define MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x172EFA0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TargetBounceProjectileEntityDAO_TypeDefinitionIndex = 15499;

	class TargetBounceProjectileEntityDAO : public Il2CppObject
	{
	public:
		::System::Int64 BounceRadius; // 0x1D8
		::System::Boolean AllowBounceTargetDuplication; // 0x1E0
		::MX::Logic::Data::BounceConditionCheckTiming* BounceCheckTiming; // 0x1E4
		::System::Int32 BounceConditionCheckFixedDelay; // 0x1E8
		::MX::Logic::Data::NontargetBounceCondition* BounceCondition; // 0x1EC
		::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO* BounceProjectileEntity; // 0x1F0

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETBOUNCEPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

