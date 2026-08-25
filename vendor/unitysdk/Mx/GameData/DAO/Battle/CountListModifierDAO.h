#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E4DD0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E4E20)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E5240)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16E5380)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E56F0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16E5700)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListModifierDAO_TypeDefinitionIndex = 15406;

	class CountListModifierDAO : public Il2CppObject
	{
	public:
		::System::Int32 CountMin; // 0x18
		::System::Int32 CountMax; // 0x1C
		::MX::Logic::Data::IncludeType* IncludeType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

	};
}

