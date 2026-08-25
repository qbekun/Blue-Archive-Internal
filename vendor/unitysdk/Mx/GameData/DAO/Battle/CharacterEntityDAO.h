#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class RetreatAppliedLogicEffectGroupid; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CharacterEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SHOULDSERIALIZELINKEDFORMATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x179C8C0)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x179C910)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SHOULDSERIALIZEUSELINKEDFORMATION_OFFSET UNITYSDK_OFFSET(0x179D0B0)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SHOULDSERIALIZERETREATLOGICID_OFFSET UNITYSDK_OFFSET(0x179D0C0)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x179D120)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x179D230)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SHOULDSERIALIZEINITIALABILITIES_OFFSET UNITYSDK_OFFSET(0x179EC40)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x179C920)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x179ECC0)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x17A26C0)
#define MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17A2610)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CharacterEntityDAO_TypeDefinitionIndex = 15555;

	class CharacterEntityDAO : public Il2CppObject
	{
	public:
		::System::Int64 CostumeId; // 0x188
		Il2CppObject* InitialAbilities; // 0x190
		::System::Boolean SuccessionFromCasterEquip; // 0x198
		::System::Boolean SuccessionFromCasterCharacterWeapon; // 0x199
		::System::Boolean SuccessionFromCasterCharacterGear; // 0x19A
		::System::Boolean InvisibleToStrikerPathing; // 0x19B
		::System::Boolean UseLinkedSummons; // 0x19C
		::System::Boolean UseLinkedFormation; // 0x19D
		::Il2CppArray<::System::Object*>* LinkedFormationOffset; // 0x1A0
		::System::Boolean IsUseRetreat; // 0x1A8
		::MX::Logic::Data::RetreatAppliedLogicEffectGroupid* RetreatLogicId; // 0x1B0

		::System::Boolean ShouldSerializeLinkedFormationOffset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SHOULDSERIALIZELINKEDFORMATIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeUseLinkedFormation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SHOULDSERIALIZEUSELINKEDFORMATION_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeRetreatLogicId()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SHOULDSERIALIZERETREATLOGICID_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CharacterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CharacterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeInitialAbilities()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_SHOULDSERIALIZEINITIALABILITIES_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CharacterEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CharacterEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHARACTERENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

