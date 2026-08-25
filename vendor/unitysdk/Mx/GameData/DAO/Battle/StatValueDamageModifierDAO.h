#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StatValueDamageModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1702830)
#define MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1702BA0)
#define MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1702C00)
#define MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1703170)
#define MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1703120)
#define MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1703180)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StatValueDamageModifierDAO_TypeDefinitionIndex = 15478;

	class StatValueDamageModifierDAO : public Il2CppObject
	{
	public:
		::FlatData::StatType* StatType; // 0x18
		::System::Int64 MinStatValue; // 0x20
		::System::Int64 MaxStatValue; // 0x28
		::System::Int64 MinDamageMultiplier; // 0x30
		::System::Int64 MaxDamageMultiplier; // 0x38

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatValueDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatValueDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatValueDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatValueDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATVALUEDAMAGEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

