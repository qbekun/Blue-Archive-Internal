#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountListSquadTypeModifierDAO&; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EEFF0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16EF190)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16EF7C0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EF820)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EFE10)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16EF1A0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListSquadTypeModifierDAO_TypeDefinitionIndex = 15426;

	class CountListSquadTypeModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* SquadTypeList; // 0x28
		Il2CppObject* TacticEntityTypeList; // 0x30

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTSQUADTYPEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

