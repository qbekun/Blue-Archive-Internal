#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TargetProjectileEntityDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1724EA0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1727F20)
#define MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1728030)
#define MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1727E70)
#define MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17287D0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1728040)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TargetProjectileEntityDAO_TypeDefinitionIndex = 15497;

	class TargetProjectileEntityDAO : public Il2CppObject
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETPROJECTILEENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

