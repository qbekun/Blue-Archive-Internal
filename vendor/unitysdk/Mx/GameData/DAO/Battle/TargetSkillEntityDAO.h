#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TargetSkillEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x1767220)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1767230)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1767280)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17678E0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1769B10)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x176AC50)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_SHOULDSERIALIZEABILITIES_OFFSET UNITYSDK_OFFSET(0x176AC60)
#define MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x176ACB0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TargetSkillEntityDAO_TypeDefinitionIndex = 15525;

	class TargetSkillEntityDAO : public Il2CppObject
	{
	public:
		Il2CppObject* Abilities; // 0x158

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetSkillEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAbilities()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_SHOULDSERIALIZEABILITIES_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETSKILLENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

