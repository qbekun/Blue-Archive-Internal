#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class EchelonExtensionTypeModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1701290)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17012A0)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x17016D0)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1701730)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1701B20)
#define MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1701AD0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int EchelonExtensionTypeModifierDAO_TypeDefinitionIndex = 15474;

	class EchelonExtensionTypeModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18
		::FlatData::EchelonExtensionType* EchelonExtensionType; // 0x1C

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ECHELONEXTENSIONTYPEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

