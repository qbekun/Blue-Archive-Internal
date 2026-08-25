#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class ArmorType; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ArmorConditionModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E2CC0)
#define MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E30C0)
#define MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16E3110)
#define MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E3170)
#define MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E32A0)
#define MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16E2CD0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ArmorConditionModifierDAO_TypeDefinitionIndex = 15400;

	class ArmorConditionModifierDAO : public Il2CppObject
	{
	public:
		::FlatData::ArmorType* ArmorType; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ArmorConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ArmorConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ArmorConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ArmorConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ARMORCONDITIONMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

