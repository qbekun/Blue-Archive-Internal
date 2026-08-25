#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class FixedFrameTargetProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1745920)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1746CC0)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1749C90)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1749D40)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x174A4E0)
#define MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1749D50)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int FixedFrameTargetProjectileEntityDAO_TypeDefinitionIndex = 15511;

	class FixedFrameTargetProjectileEntityDAO : public Il2CppObject
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FixedFrameTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FIXEDFRAMETARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

