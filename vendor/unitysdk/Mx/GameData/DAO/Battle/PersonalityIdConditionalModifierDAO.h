#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class PersonalityIdConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16FA2D0)
#define MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16FA2E0)
#define MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FA710)
#define MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16FA760)
#define MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FA7C0)
#define MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FA940)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int PersonalityIdConditionalModifierDAO_TypeDefinitionIndex = 15452;

	class PersonalityIdConditionalModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* PersonalityIdList; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PERSONALITYIDCONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

