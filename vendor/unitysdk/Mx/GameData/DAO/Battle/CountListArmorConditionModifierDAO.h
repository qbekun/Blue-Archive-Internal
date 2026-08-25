#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListArmorConditionModifierDAO&; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16EFFA0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F0460)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F0A60)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F0AC0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F09B0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16EFFB0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListArmorConditionModifierDAO_TypeDefinitionIndex = 15428;

	class CountListArmorConditionModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* ArmorTypeList; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTARMORCONDITIONMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

