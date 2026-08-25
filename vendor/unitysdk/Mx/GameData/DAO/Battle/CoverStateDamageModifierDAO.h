#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class CoverState; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CoverStateDamageModifierDAO&; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F4B50)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F4C80)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F4CD0)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F4D30)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F4D40)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F50B0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CoverStateDamageModifierDAO_TypeDefinitionIndex = 15438;

	class CoverStateDamageModifierDAO : public Il2CppObject
	{
	public:
		::System::Int64 Multiplier; // 0x18
		::MX::Logic::Skills::CoverState* CoverState; // 0x20

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CoverStateDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATEDAMAGEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

