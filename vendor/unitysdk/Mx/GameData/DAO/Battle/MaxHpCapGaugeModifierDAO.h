#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class ComparisonOperator; }
namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class MaxHpCapGaugeModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F97D0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F9BD0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F9C20)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FA050)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F97E0)
#define MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16FA1D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int MaxHpCapGaugeModifierDAO_TypeDefinitionIndex = 15450;

	class MaxHpCapGaugeModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ComparisonOperator* Operator; // 0x18
		::System::Int64 MaxHpCapGauge; // 0x20
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::MaxHpCapGaugeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::MaxHpCapGaugeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::MaxHpCapGaugeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::MaxHpCapGaugeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MAXHPCAPGAUGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

	};
}

