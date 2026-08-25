#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Data { class ComparisonOperator; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillLevelModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16FC0A0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16FC100)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16FC5F0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FC600)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FC750)
#define MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FC7A0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillLevelModifierDAO_TypeDefinitionIndex = 15458;

	class SkillLevelModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SkillSlot* SkillSlot; // 0x18
		::MX::Logic::Data::ComparisonOperator* Operator; // 0x1C
		::System::Int32 SkillLevel; // 0x20
		::MX::Logic::Data::IncludeType* IncludeType; // 0x24

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillLevelModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillLevelModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillLevelModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillLevelModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLLEVELMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

