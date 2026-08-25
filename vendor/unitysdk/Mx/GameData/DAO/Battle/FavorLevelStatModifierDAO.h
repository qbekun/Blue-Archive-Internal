#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FavorLevelStatModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F5500)
#define MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F5840)
#define MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F5510)
#define MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F5D00)
#define MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F5C70)
#define MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F5E40)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int FavorLevelStatModifierDAO_TypeDefinitionIndex = 15440;

	class FavorLevelStatModifierDAO : public Il2CppObject
	{
	public:
		::System::Int64 FavorCountMin; // 0x18
		::System::Int64 FavorCountMax; // 0x20
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FavorLevelStatModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FAVORLEVELSTATMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

	};
}

