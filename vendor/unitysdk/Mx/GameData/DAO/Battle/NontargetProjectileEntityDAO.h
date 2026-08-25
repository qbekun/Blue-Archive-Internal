#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BounceConditionCheckTiming; }
namespace MX::Logic::Data { class NontargetBounceCondition; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class NontargetProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1734270)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1734BC0)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1738110)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1738160)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1738170)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17395C0)
#define MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x17396D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int NontargetProjectileEntityDAO_TypeDefinitionIndex = 15503;

	class NontargetProjectileEntityDAO : public Il2CppObject
	{
	public:
		Il2CppObject* BarrierTransferAbilities; // 0x1D8
		::System::Single AngleOffset; // 0x1E0
		::System::Int64 ExpireDistance; // 0x1E8
		::System::Boolean Piercing; // 0x1F0
		::MX::Logic::Data::BounceConditionCheckTiming* BounceCheckTiming; // 0x1F4
		::System::Int32 BounceConditionCheckFixedDelay; // 0x1F8
		::MX::Logic::Data::NontargetBounceCondition* BounceCondition; // 0x1FC
		::MX::GameData::DAO::Battle::SkillEntityDAO* BounceEntity; // 0x200

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NONTARGETPROJECTILEENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

	};
}

