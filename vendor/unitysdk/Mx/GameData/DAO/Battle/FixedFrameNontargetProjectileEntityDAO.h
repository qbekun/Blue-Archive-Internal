#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BounceConditionCheckTiming; }
namespace MX::Logic::Data { class NontargetBounceCondition; }
namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FixedFrameNontargetProjectileEntityDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1754CF0)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17555F0)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1758B90)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1758AE0)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1758CA0)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1754D00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int FixedFrameNontargetProjectileEntityDAO_TypeDefinitionIndex = 15517;

	class FixedFrameNontargetProjectileEntityDAO : public Il2CppObject
	{
	public:
		::System::Int32 AngleOffset; // 0x1D8
		::System::Int64 ExpireDistance; // 0x1E0
		::System::Boolean Piercing; // 0x1E8
		::MX::Logic::Data::BounceConditionCheckTiming* BounceCheckTiming; // 0x1EC
		::System::Int32 BounceConditionCheckFixedDelay; // 0x1F0
		::MX::Logic::Data::NontargetBounceCondition* BounceCondition; // 0x1F4
		::MX::GameData::DAO::Battle::SkillEntityDAO* BounceEntity; // 0x1F8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FixedFrameNontargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMENONTARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

