#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SupporterEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17AF110)
#define MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_SHOULDSERIALIZEINITIALABILITIES_OFFSET UNITYSDK_OFFSET(0x17AF1C0)
#define MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17AF200)
#define MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17AF920)
#define MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x17B1270)
#define MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17B12C0)
#define MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17B12D0)
#define MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17B4820)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SupporterEntityDAO_TypeDefinitionIndex = 15561;

	class SupporterEntityDAO : public Il2CppObject
	{
	public:
		::System::Int64 CostumeId; // 0x188
		Il2CppObject* InitialAbilities; // 0x190
		::System::Boolean SuccessionFromCasterEquip; // 0x198
		::System::Boolean SuccessionFromCasterCharacterWeapon; // 0x199
		::System::Boolean SuccessionFromCasterCharacterGear; // 0x19A

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeInitialAbilities()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_SHOULDSERIALIZEINITIALABILITIES_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SupporterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SupporterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SupporterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SupporterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUPPORTERENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

