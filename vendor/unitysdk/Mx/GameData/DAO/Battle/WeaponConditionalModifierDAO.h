#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class WeaponConstraint; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class WeaponConditionalModifierDAO&; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FFF60)
#define MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FFFB0)
#define MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1700330)
#define MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1700390)
#define MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1700650)
#define MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1700660)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int WeaponConditionalModifierDAO_TypeDefinitionIndex = 15470;

	class WeaponConditionalModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::WeaponConstraint* WeaponConstraint; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_WEAPONCONDITIONALMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

