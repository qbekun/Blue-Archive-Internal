#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ComparisonOperator; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class HpRateModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F6950)
#define MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F69B0)
#define MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F6AF0)
#define MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F6B40)
#define MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F6F70)
#define MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F73A0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int HpRateModifierDAO_TypeDefinitionIndex = 15444;

	class HpRateModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ComparisonOperator* Operator; // 0x18
		::System::Int64 HpRate; // 0x20
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HpRateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HpRateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HpRateModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HpRateModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_HPRATEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

