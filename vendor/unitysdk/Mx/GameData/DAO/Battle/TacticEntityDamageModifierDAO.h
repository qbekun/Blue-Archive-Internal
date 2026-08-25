#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class TacticEntityType; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TacticEntityDamageModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FE020)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16FE070)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16FE3E0)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FE440)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE7F0)
#define MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FE800)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TacticEntityDamageModifierDAO_TypeDefinitionIndex = 15464;

	class TacticEntityDamageModifierDAO : public Il2CppObject
	{
	public:
		::System::Int64 Multiplier; // 0x18
		::FlatData::TacticEntityType* TacticEntity; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TACTICENTITYDAMAGEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

